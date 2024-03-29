#ifndef compte_utilisateur
#define compte_utilisateur
#include <string>
#include <vector>
#include "ComptePersonnel.hpp"
#include "../gestionnaires/GestionnaireSauvegarde.hpp"

class CompteDepensesCommunes;

/**
 * @brief Classe qui représente le compte d'un utilisateur
 * @author Elhadji Moussa FAYE
 * @version 0.3
 * @since 0.1
 */
class CompteUtilisateur : public ComptePersonnel
{
	/**
 * @brief Liste des comptes de dépenses de l'utilisateur
 *	J'utilise un vector car il est mieux pour acceder aux données rapidement
	*/
	std::vector<CompteDepensesCommunes> comptesDepensesCommunes;

public:
	/**
 * @brief Le constructeur permet de remplir les champs de la classe en fonction des paramètres passés
 *
 * @param pseudo le pseudo de l'utilisateur
 * @param prenom le prenom de l'utilisateur
 * @param nom le nom de l'utilisateur
 * @param email l'email de l'utilisateur
 * @param hashMDP le hash du mot de passe de l'utilisateur
 */
	CompteUtilisateur(const std::string &pseudo, const std::string &prenom, const std::string &nom, const std::string &email, const std::string &hashMDP);
	/**
 * @brief Le destructeur détruit les comptes dépenses communes du compte
	*/
	~CompteUtilisateur();

	/**
	 * @brief Sauvegarde les données du compte grâce au gestionnaire de sauvegarde
	 *
	 * @param gs le gestionnaire de sauvegarde
	 */
	virtual void sauvegarder(GestionnaireSauvegarde &gs) const;

	/**
	 * @brief Ajout un compte de dépense commun au compte de l'utilisateur
	 *
	 * @param compteDC le compte de depenses à ajouter
	 */
	void addCompteDepensesCommunes(const CompteDepensesCommunes &compteDC);
	/**
	 * @brief Cette methode donne les infos essentiels du compte de l'utilisateur
	 *
	 * @return les infos du compte (dans une chaîne de caractère c++)
	 */
	virtual std::string toString() const;
};
#endif
