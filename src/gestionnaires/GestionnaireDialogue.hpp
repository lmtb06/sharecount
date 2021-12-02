#include <iostream>
#ifndef gestionnaired_dialogue
#define gestionnaired_dialogue
#include "../comptes/CompteDepensesCommunes.hpp"
#include <list>

/**
 * @brief Classe qui représente le gestionnaire des dialogues
 * @author Nicolas GRAFF
 * @version 0.1
 * @since 0.1
 */

class GestionnaireDialogue
{
    public:
        void creerCompteUtilisateur(const std::string& pseudo, const std::string& prenom, const std::string& nom, const std::string& email, const std::string& motDePasse, const std::string& confirmationMotDePasse);

    private:
        bool pseudoExiste(std::string pseudo);
        bool pseudoConforme(std::string pseudo);
        bool prenomConforme(std::string prenom);
        bool nomConforme(std::string nom);
        bool emailConforme(std::string email);
        bool motDePasseConforme(std::string motDePasse);
        std::string hasher(std::string motDePasse);

    void consulterCompteDepensesCommunes(CompteDepensesCommunes compteDC);
    void consulterListeCompteDepensesCommunes(CompteUtilisateur compteU);
    //void afficherListeDepensesCommunes(std::list<Depence> listeDepenses);
    void afficherMessageInformation(std::string message);
    void afficherMessageErreur(std::string message);
    void afficherListeComptesDepensesCommunes(std::list<CompteDepensesCommunes> listeComptesDepenses);
    void afficherPageAccueil(CompteUtilisateur compteU);
    void creerCompteDepensesCommunes(std::string nom, std::string description);
    void seConnecter(std::string pseudo, std::string motDePasse);
};
#endif
