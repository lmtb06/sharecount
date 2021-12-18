#include <iostream>
#ifndef gestionnaired_dialogue
#define gestionnaired_dialogue
#include "../comptes/CompteDepensesCommunes.hpp"
#include "gestionnaires/GestionnaireSauvegardeFichier.hpp"

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

        /**
         * @brief Crée un nouveau compte compte de dépenses communes
         *
         * @param nom et description du compte
         */
        void afficherMenu();

        /**
         * @brief Crée un nouveau compte utilisateur
         *
         * @details pseudo - seulement des lettres et des chiffres;
         * prenom - contiennent au moins 1 caractère;
         * nom - contiennent au moins 1 caractère;
         * email - "symboles@symboles.symboles";
         * motDePasse - minimum 8 caractères, au moins 1 chiffre, majuscules, minuscules et un des symboles "!@#$%^&*".
         *
         * @param pseudo, prenom, nom, email, mot de passe et confirmation mot de passe de l'utilisateur
         */
        void creerCompteUtilisateur(const std::string& pseudo, const std::string& prenom, const std::string& nom, const std::string& email, const std::string& motDePasse, const std::string& confirmationMotDePasse);

        /**
         * @brief Crée un nouveau compte compte de dépenses communes
         *
         * @param nom et description du compte
         */
        void creerCompteDepensesCommunes(const std::string& nom, const std::string& description);

        /**
         * @brief Afficher les informations sur le compte de dépenses communes
         *
         * @param compte de dépenses communes a afficher
         */
        void consulterCompteDepensesCommunes(const CompteDepensesCommunes& compteDC);

        /**
         * @brief Afficher la liste des compte de dépenses communes de l'utilisateur
         *
         * @param compte de l'utilisateur
         */
        void consulterListeCompteDepensesCommunes(const CompteUtilisateur& compteU);

        /**
         * @brief Se connecter à l'application
         *
         * @param pseudo et mot de passe de l'utilisateur
         */
        void seConnecter(const std::string& pseudo, const std::string& motDePasse);

        /**
         * @brief Calculer qui doit qui et combien;
         *
         * @param Liste des depenses
         */
        void creeDepense(Depense& depense);

    private:

        /**
         * @brief Affichage d'un message d'information
         *
         * @param Message à afficher
         */
        void afficherMessageInformation(std::string message);

        /**
         * @brief Affichage d'un message d'erreur
         *
         * @param Erreur à afficher
         */
        void afficherMessageErreur(std::string message);

        //creerCompteUtilisateur
        /**
         * @brief Vérifier que le pseudo d'utilisateur contient uniquement des lettres et des chiffres;
         *
         * @param Pseudo à vérifier
         */
        bool pseudoConforme(std::string pseudo);

        /**
         * @brief Vérifier que le prenom d'utilisateur contiennent au moins 1 caractère;
         *
         * @param Prenom à vérifier
         */
        bool prenomConforme(std::string prenom);

        /**
         * @brief Vérifier que le nom d'utilisateur contiennent au moins 1 caractère;
         *
         * @param Nom à vérifier
         */
        bool nomConforme(std::string nom);

        /**
         * @brief Vérifier que l'email de l'utilisateur a la forme " symboles@symboles.symboles";
         *
         * @param Email à vérifier
         */
        bool emailConforme(std::string email);

        /**
         * @brief Vérifier que le mot de passe de l'utilisateur contient au moins 8 caractères, au moins 1 chiffre, des majuscules, des minuscules et l'un des caractères "!@#$%^&*".
         *
         * @param Mot de passe à vérifier
         */
        bool motDePasseConforme(std::string motDePasse);

        /**
         * @brief Hachage du mot de passe
         *
         * @param Mot de passe à hacher
         *
         * @return Hach de mot de passe
         */
        std::string hasher(std::string motDePasse);
        void afficherPageAccueil(CompteUtilisateur compteU);

        //creerCompteDepensesCommunes
        /**
         * @brief Vérifier que le nom de compte des depenses communes contiennent au moins 1 caractère;
         *
         * @param Nom à vérifier
         */
        bool nomCompteConforme(std::string nom);

        //consulterListeCompteDepensesCommunes
        /**
         * @brief Afficher la liste des compte des depenses communes;
         *
         * @param Liste des comptes à afficher
         */
        void afficherListeComptesDepensesCommunes(std::vector<CompteDepensesCommunes> listeComptesDepenses);

        /**
         * @brief Afficher la liste des depenses communes;
         *
         * @param Liste des depenses à afficher
         */

        void afficherListeDepensesCommunes(std::vector<Depense> listeDepenses);

        /**
         * @brief Calculer qui doit qui et combien;
         *
         * @param Liste des depenses
         */
        void calculerDettes(std::vector<Depense> listeDepenses);
};
#endif
