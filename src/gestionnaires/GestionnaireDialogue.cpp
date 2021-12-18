#include "GestionnaireDialogue.hpp"
#include <regex>
#include <iostream>

void GestionnaireDialogue::afficherMenu(){
    int i=1;
    while(i){
        std::cout << "\n";
        std::cout << "1 - Créer un compte personnel\n";
        std::cout << "2 - Créer un compte de depenses\n";
        std::cout << "3 - Consulter la liste des comptes de depenses\n";
        std::cout << "4 - Consulter un compte de depenses\n";
        std::cout << "0 - Exit\n";
        std::cin >> i;
        switch (i) {
        case 1 :{
            std::cout << "Veuillez entrer vos informations\n";
            std::string pseudo;
            std::string nom;
            std::string prenom;
            std::string email;
            std::string mdp;
            std::string mdp_c;
            std::cout << "Votre pseudo : ";
            std::cin >> pseudo;
            std::cout << "Votre nom : ";
            std::cin >> nom;
            std::cout << "Votre prenom : ";
            std::cin >> prenom;
            std::cout << "Votre email : ";
            std::cin >> email;
            std::cout << "Votre mdp (8 caractères, avec 1aA!@#$%^&*) :";
            //std::cin >> mdp;
            mdp="1aA!aaaa";
            std::cout << "Votre mdp_c : ";
            //std::cin >> mdp_c;
            mdp_c="1aA!aaaa";
            creerCompteUtilisateur(pseudo, nom, prenom, email, mdp, mdp_c);
            break;
        }
        case 2 :{
                std::cout << "Veuillez entrer informations\n";
                std::string nom;
                std::string description;
                std::cout << "Nom de compte : ";
                std::cin >> nom;
                std::cout << "Description : ";
                std::cin >> description;
                creerCompteDepensesCommunes(nom, description);
        break;
        }
        case 3 :{
            consulterListeCompteDepensesCommunes(compteU);
            break;
        }
        case 4 :{
            CompteDepensesCommunes cdc = CompteDepensesCommunes("id0", "Compte1", "", time(0), compteU);
            consulterCompteDepensesCommunes(cdc);
            break;
        }
        case 0 :
            i=0;
            break;
        }
    }
}

void GestionnaireDialogue::afficherMessageInformation(std::string message){
    std::cout << message << "\n";
}

void GestionnaireDialogue::afficherMessageErreur(std::string message){
    std::cout << message << "\n";
}

/*---------------------------------------------------------*/
// creerCompteUtilisateur
/*---------------------------------------------------------*/

bool GestionnaireDialogue::pseudoConforme(std::string pseudo){
    std::regex rx("^[a-zA-Z0-9]+$");
    bool match = std::regex_match(pseudo.c_str(), rx);
    return match;
}

bool GestionnaireDialogue::prenomConforme(std::string prenom){
    if (prenom.size()>0)
        return true;
    else
        return false;
}

bool GestionnaireDialogue::nomConforme(std::string nom){
    if (nom.size()>0)
        return true;
    else
        return false;
}

bool GestionnaireDialogue::emailConforme(std::string email){
    std::regex rx("^(\\S)+@(\\S)+.(\\S)+$");
    bool match = std::regex_match(email.c_str(), rx);
    if(match)
        return true;
    else
        return false;
}

bool GestionnaireDialogue::motDePasseConforme(std::string motDePasse){
    std::regex rx("(?=.*[0-9])(?=.*[!@#$%^&*])(?=.*[a-z])(?=.*[A-Z])[0-9a-zA-Z!@#$%^&*]{8,}");
    bool match = std::regex_match(motDePasse.c_str(), rx);
    if(match)
        return true;
    else
        return false;
}

std::string GestionnaireDialogue::hasher(std::string motDePasse){
    //a verifier
    return motDePasse;
}

void GestionnaireDialogue::afficherPageAccueil(CompteUtilisateur compteU){
    std::string str = "Bienvenue à l'application, " + compteU.getPseudo() + "\n";
    afficherMessageInformation(str);
}

void GestionnaireDialogue::creerCompteUtilisateur(const std::string &pseudo, const std::string &prenom, const std::string &nom, const std::string &email, const std::string &motDePasse, const std::string &confirmationMotDePasse){

    std::string erreurs="";
    std::string hashMDP;
    if(!pseudoConforme(pseudo))
        afficherMessageErreur("Le pseudo n'est pas valide");
    else{
        if(prenomConforme(prenom))
            if(nomConforme(nom))
                if(emailConforme(email))
                    if(motDePasseConforme(motDePasse))
                        if (motDePasse==confirmationMotDePasse){
                            hashMDP=hasher(motDePasse);

                            GestionnaireSauvegardeFichier gs = GestionnaireSauvegardeFichier();
                            try
                            {
                                CompteUtilisateur compteU = CompteUtilisateur(pseudo, prenom, nom, email, hashMDP);
                                compteU.sauvegarder(gs);
                                afficherMessageInformation("Compte cree");
                                afficherPageAccueil(compteU);
                            }
                            catch (ExceptionSC e)
                            {
                                std::string mes = "Le compte n'a pas été sauvegardé";
                                mes.append(e.what());
                                afficherMessageErreur(mes);
                            }
                        }
                        else
                            afficherMessageErreur("Les mots de passe ne correspondent pas");
                    else
                        afficherMessageErreur("Le mot de passe n'est pas valide");
                else
                    afficherMessageErreur("L'email n'est pas valide");
            else
                afficherMessageErreur("Le nom n'est pas valide");
        else
            afficherMessageErreur("Le prénom n'est pas valide");
    }
};

/*---------------------------------------------------------*/
// creerCompteDepensesCommunes
/*---------------------------------------------------------*/

bool GestionnaireDialogue::nomCompteConforme(std::string nom){
    if (nom.size()>0)
        return true;
    else
        return false;
}

void GestionnaireDialogue::creerCompteDepensesCommunes(const std::string &nom, const std::string &description){
    if(nomCompteConforme(nom)){
        GestionnaireSauvegardeFichier gs = GestionnaireSauvegardeFichier();
        try
        {
            CompteDepensesCommunes compteDC = CompteDepensesCommunes("id1", nom, description, time(0), compteU);
            compteU.addCompteDepensesCommunes(compteDC);
            afficherMessageInformation("Le nouveau compte a été créé avec succès");
            afficherPageAccueil(compteU);
        }
        catch (ExceptionSC e)
        {
            afficherMessageErreur("Impossible de créer le compte de dépense");
        }
    }
    else {
        afficherMessageErreur("Le nom de compte n'est pas valide");
    }
};

/*---------------------------------------------------------*/
// consulterCompteDepensesCommunes
/*---------------------------------------------------------*/

void GestionnaireDialogue::afficherListeDepensesCommunes(std::vector<Depense> listeDepenses){
    for (const auto& depense : listeDepenses){
        std::cout << depense.toString();
    }
    calculerDettes(listeDepenses);
}

void GestionnaireDialogue::consulterCompteDepensesCommunes(const CompteDepensesCommunes &compteDC){
        try
        {
            CompteUtilisateur compteU2 = CompteUtilisateur("wehddn", "Nicolas", "GRAFF", "test@test.com", "SHA256-HASH");
            CompteUtilisateur compteU3 = CompteUtilisateur("pogonateur", "Didier", "MANZI", "test@test.com", "SHA256-HASH");

            /*creation des depenses*/
            std::vector<Depense> listedepenses;
            std::vector<std::pair<std::string, std::pair<float, float>>> repartition;
            std::pair<float, float> montant;
            montant.first=2;
            montant.second=5;
            repartition.push_back(std::pair<std::string, std::pair<float, float>>("user0", montant));
            montant.first=3;
            montant.second=1;
            repartition.push_back(std::pair<std::string, std::pair<float, float>>("user1", montant));
            montant.first=4;
            montant.second=2;
            repartition.push_back(std::pair<std::string, std::pair<float, float>>("user2", montant));
            montant.first=5;
            montant.second=8;
            repartition.push_back(std::pair<std::string, std::pair<float, float>>("user3", montant));
            montant.first=6;
            montant.second=4;
            repartition.push_back(std::pair<std::string, std::pair<float, float>>("user4", montant));
            listedepenses.push_back(Depense("id0", 10, "soiree", time(0), repartition, compteU));
            repartition.clear();

            afficherListeDepensesCommunes(listedepenses);
        }
        catch (ExceptionSC e)
        {
            afficherMessageInformation("Vous ne participez à ce compte de dépenses communes");
        }
}

/*---------------------------------------------------------*/
// consulterListeCompteDepensesCommunes
/*---------------------------------------------------------*/

void GestionnaireDialogue::afficherListeComptesDepensesCommunes(std::vector<CompteDepensesCommunes> listeComptesDepenses){
    for (CompteDepensesCommunes compteDC : listeComptesDepenses)
        std::cout << compteDC.toString() << "\n";
}

void GestionnaireDialogue::consulterListeCompteDepensesCommunes(const CompteUtilisateur &compteU){
    try
    {
        std::vector<CompteDepensesCommunes> listeComptesDepenses;
        listeComptesDepenses.push_back(CompteDepensesCommunes("id1", "Compte Depense 1", "", time(0), compteU));
        listeComptesDepenses.push_back(CompteDepensesCommunes("id2", "Compte Depense 2", "", time(0), compteU));
        listeComptesDepenses.push_back(CompteDepensesCommunes("id3", "Compte Depense 3", "", time(0), compteU));
        afficherListeComptesDepensesCommunes(listeComptesDepenses);
    }
    catch (ExceptionSC e)
    {
        afficherMessageInformation("Vous ne participez à aucun compte de dépenses communes");
    }
}

/*---------------------------------------------------------*/
// seConnecter
/*---------------------------------------------------------*/

void GestionnaireDialogue::seConnecter(const std::string &pseudo, const std::string &motDePasse){
    std::string hashMDP = hasher(motDePasse);

    CompteUtilisateur compteU = CompteUtilisateur("wehddn", "Nicolas", "GRAFF", "test@test.com", "SHA256-HASH");
    afficherPageAccueil(compteU);
}

void GestionnaireDialogue::creeDepense(Depense &depense){
    try
    {
        //ajouterDepenses(CompteDC, depense)
    }
    catch (ExceptionSC e)
    {
        afficherMessageErreur("Erreur lors de l'ajout d'un depense");
    }
}

void GestionnaireDialogue::calculerDettes(std::vector<Depense> listeDepenses){
    struct calcul{
        std::string de_qui;
        std::string pour_qui;
        float montant=0;
    };

    std::vector<calcul> result;
    std::vector<Depense> temp=listeDepenses;

    /*calcul des dettes*/
    for(const auto& dep: temp) {
        std::vector<std::pair<std::string, std::pair<float, float>>> repart=dep.getRepartition();
        for(unsigned i=0; i<repart.size(); i++) {
            calcul d;
            std::string de_qui;
            std::string pour_qui;
            float mont1;
            float mont2;
            if(repart[i].second.first<repart[i].second.second){
                pour_qui=repart[i].first;
                for(unsigned j=0; j<repart.size(); j++) {
                    if(repart[j].second.first>repart[j].second.second){
                        de_qui=repart[j].first;
                        mont1=repart[i].second.second-repart[i].second.first;//?
                        mont2=repart[j].second.first-repart[j].second.second;
                        d.de_qui=de_qui;
                        d.pour_qui=pour_qui;
                        if(mont1>=mont2)
                            d.montant=mont2;
                        else
                            d.montant=mont1;
                        repart[i].second.second-=d.montant;
                        repart[j].second.second+=d.montant;
                        result.push_back(d);
                        if(repart[i].second.first-repart[i].second.second<0.0001 && repart[i].second.first-repart[i].second.second>-0.0001){
                            break;
                        }
                    }
                }
            }
        }
    }

    for(unsigned i=0; i<result.size(); i++) {
        std::cout << "de " + result[i].de_qui + " a " + result[i].pour_qui + ": " + std::to_string(result[i].montant) + "\n";
    }
}

