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
        CompteUtilisateur compteU = CompteUtilisateur("test", "test", "test", "test", "test");

        void creerCompteUtilisateur(const std::string& pseudo, const std::string& prenom, const std::string& nom, const std::string& email, const std::string& motDePasse, const std::string& confirmationMotDePasse);
        void creerCompteDepensesCommunes(const std::string& nom, const std::string& description);
        void consulterCompteDepensesCommunes(const CompteDepensesCommunes& compteDC);
        void consulterListeCompteDepensesCommunes(const CompteUtilisateur& compteU);
        void seConnecter(const std::string& pseudo, const std::string& motDePasse);

    private:
        void afficherMessageInformation(std::string message);
        void afficherMessageErreur(std::string message);

        //creerCompteUtilisateur
        bool pseudoConforme(std::string pseudo);
        bool prenomConforme(std::string prenom);
        bool nomConforme(std::string nom);
        bool emailConforme(std::string email);
        bool motDePasseConforme(std::string motDePasse);
        std::string hasher(std::string motDePasse);
        void afficherPageAccueil(CompteUtilisateur compteU);

        //creerCompteDepensesCommunes
        bool nomCompteConforme(std::string nom);
        void addCompteDepensesCommunes(CompteDepensesCommunes cdc);

        //consulterListeCompteDepensesCommunes
        void afficherListeComptesDepensesCommunes(std::list<CompteDepensesCommunes> listeComptesDepenses);

        //void afficherListeDepensesCommunes(std::list<Depence> listeDepenses);
};
#endif
