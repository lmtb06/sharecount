#include "GestionnaireDialogue.hpp"

bool GestionnaireDialogue::pseudoExiste(std::string pseudo){
    //a verifier dans le BDD
    return false;
}

bool GestionnaireDialogue::pseudoConforme(std::string pseudo){
    //a verifier
    return true;
}

bool GestionnaireDialogue::prenomConforme(std::string prenom){
    //a verifier
    return true;
}

bool GestionnaireDialogue::nomConforme(std::string nom){
    //a verifier
    return true;
}

bool GestionnaireDialogue::emailConforme(std::string email){
    //a verifier
    return true;
}

bool GestionnaireDialogue::motDePasseConforme(std::string motDePasse){
    //a verifier
    return true;
}

std::string GestionnaireDialogue::hasher(std::string motDePasse){
    //a verifier
    return "hashMDP";
}

void GestionnaireDialogue::creerCompteUtilisateur(const std::string &pseudo, const std::string &prenom, const std::string &nom, const std::string &email, const std::string &motDePasse, const std::string &confirmationMotDePasse){

    std::string erreurs="";
    std::string hashMDP;
    if(pseudoExiste("pseudo")) //a verifier dans le BDD
        std::cout << "Ce pseudo est déjà utilisé\n";
    else{
        if(!pseudoConforme(pseudo))
            std::cout << "Le pseudo n'est pas valide\n";
        else{
            if(!prenomConforme(prenom))
                std::cout << "Le prénom n'est pas valide";
            else{
                if(!nomConforme(nom))
                    std::cout << "Le nom n'est pas valide\n";
                else{
                    if(!emailConforme(email))
                        std::cout << "L'email n'est pas valide\n";
                    else{
                        if(!motDePasseConforme(motDePasse))
                            std::cout << "Le mot de passe n'est pas valide\n";
                        else{
                            if (motDePasse!=confirmationMotDePasse)
                                std::cout << "Les mots de passe ne correspondent pas\n";
                            else{
                                hashMDP=hasher(motDePasse);
                                CompteUtilisateur compteU = CompteUtilisateur(pseudo, nom, prenom, email, hashMDP);
                                //sauvegarder
                                std::cout << "Compte cree\n";
                            }
                        }

                    }
                }
            }
        }
    }
};

