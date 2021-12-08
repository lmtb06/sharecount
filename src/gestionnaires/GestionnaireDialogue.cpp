#include "GestionnaireDialogue.hpp"
#include <regex>

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
    std::cout << "Affichage de page d'accueil\n";
}

void GestionnaireDialogue::creerCompteUtilisateur(const std::string &pseudo, const std::string &prenom, const std::string &nom, const std::string &email, const std::string &motDePasse, const std::string &confirmationMotDePasse){

    std::string erreurs="";
    std::string hashMDP;
    //if(pseudoExiste("pseudo")) //a verifier dans le BDD
    //    afficherMessageErreur("Ce pseudo est déjà utilisé");//
    //else{
        if(!pseudoConforme(pseudo))
            afficherMessageErreur("Le pseudo n'est pas valide");
        else{
            if(prenomConforme(prenom))
                if(nomConforme(nom))
                    if(emailConforme(email))
                        if(motDePasseConforme(motDePasse))
                            if (motDePasse==confirmationMotDePasse){
                                hashMDP=hasher(motDePasse);
                                CompteUtilisateur compteU = CompteUtilisateur(pseudo, nom, prenom, email, hashMDP);
                                //setGestionnaireSauvegarde(db);
                                //if(sauvegarderCompteUtilisateur(compteU)){
                                    afficherMessageInformation("Compte cree");
                                    afficherPageAccueil(compteU);
                                //}
                                //else{
                                //afficherMessageErreur("Le compte n'a pas été sauvegardé");
                                //}
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
    //}
};

/*---------------------------------------------------------*/
// creerCompteDepensesCommunes
/*---------------------------------------------------------*/

bool GestionnaireDialogue::nomCompteConforme(std::string nom){

    //a verifier
    return true;
}

void GestionnaireDialogue::addCompteDepensesCommunes(CompteDepensesCommunes cdc){

}

void GestionnaireDialogue::creerCompteDepensesCommunes(const std::string &nom, const std::string &description){
    if(nomCompteConforme(nom)){
        //Compte=creerCompteDepensesCommunes(compteU, nom, description);
        std::list<CompteDepensesCommunes> CompteCheck;
        CompteCheck.push_front(CompteDepensesCommunes("id1", "Compte Depense 1", "", time(0), compteU));

        if(CompteCheck.size()==1){
            //addCompteDepensesCommunes(CompteCheck.front())
            afficherPageAccueil(compteU);
        }
        else
            afficherMessageErreur("Impossible de créer le compte de dépense");
    }
    else {
        afficherMessageErreur("Le nom de compte n'est pas valide");
    }
};

/*---------------------------------------------------------*/
// consulterCompteDepensesCommunes
/*---------------------------------------------------------*/

void GestionnaireDialogue::consulterCompteDepensesCommunes(const CompteDepensesCommunes &compteDC){
    std::cout << "Affichage de la ListeDepensesCommunes\n";
}

/*---------------------------------------------------------*/
// consulterListeCompteDepensesCommunes
/*---------------------------------------------------------*/

void GestionnaireDialogue::afficherListeComptesDepensesCommunes(std::list<CompteDepensesCommunes> listeComptesDepenses){
    for (CompteDepensesCommunes c : listeComptesDepenses)
        std::cout << c.toString() << "\n";
}

void GestionnaireDialogue::consulterListeCompteDepensesCommunes(const CompteUtilisateur &compteU){
    //recupererComptesDepensesCommunes()
    //if(!recupererComptesDepensesCommunes())
    //    afficherMessageErreur("Erreur de récupération pour le compte sélectionné");
    //else{
        //std::list<CompteDepensesCommunes> listeComptesDepenses = getComptesDepensesCommunes();
        //if(listeComptesDepenses.size()>0){
            std::list<CompteDepensesCommunes> listeComptesDepenses;
            listeComptesDepenses.push_back(CompteDepensesCommunes("id1", "Compte Depense 1", "", time(0), compteU));
            listeComptesDepenses.push_back(CompteDepensesCommunes("id2", "Compte Depense 2", "", time(0), compteU));
            listeComptesDepenses.push_back(CompteDepensesCommunes("id3", "Compte Depense 3", "", time(0), compteU));
            afficherListeComptesDepensesCommunes(listeComptesDepenses);
        //}
        //else
        //    afficherMessageInformation("Vous ne participez à aucun compte de dépenses communes");
    //}
}

/*---------------------------------------------------------*/
// seConnecter
/*---------------------------------------------------------*/

void GestionnaireDialogue::seConnecter(const std::string &pseudo, const std::string &motDePasse){
    std::string hashMDP = hasher(motDePasse);

    //if(!compteExiste(pseudo,hashMDP))
    //    afficherMessageErreur("Pseudo ou mot de passe incorrect, veuillez les ré entrer");
    //else{
        //CompteUtilisateur compteU = getCompte(pseudo);
        CompteUtilisateur compteU = CompteUtilisateur("wehddn", "Nicolas", "GRAFF", "test@test.com", "SHA256-HASH");
        afficherPageAccueil(compteU);
    //}
}
