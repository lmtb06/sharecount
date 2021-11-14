#ifndef compte_depenses_communes
#define compte_depenses_communes

#include <string>
#include <ctime>
#include "CompteUtilisateur.hpp"

/**
 * @brief Cette classe représente le compte de dépenses communes
 * @author Nicolas GRAFF
 * @author Elhadji Moussa FAYE
 * @version 0.2
 * @since 0.2
 */
class CompteDepensesCommunes
{
	/**
	 * @brief l'identifiant du compte de dépenses communes
	 *
	 */
	const std::string identifiant = "";
	/**
	 * @brief le nom du compte de dépense
	 *
	 */
	std::string nom = "";
	/**
	 * @brief la description du compte de dépense
	 *
	 */
	std::string description = "";
	/**
	 * @brief la date de creation du compte de dépense
	 *
	 */
	const std::time_t dateCreation;
	/**
	 * @brief Une reférence au compte createur du compte de dépense
	 * On peut utiliser une référence car le createur est
	 * défini avant le CompteDepensesCommunes : la référence existe
	 * donc lorsqu'on crée l'objet.
	 *
	 */
	const CompteUtilisateur& createur;

public:
	/**
 * @brief Le constructeur permet de remplir les champs de la classe en fonction des paramètres passés
 *
 * @param identifiant l'identifiant du compte de dépense
 * @param createur compte de l'utilisateur créateur
 * @param nom le nom du compte de dépense
 * @param description description du compte
 * @param dateCreation la date de création du compte
 */
	CompteDepensesCommunes(const std::string &identifiant, std::string nom, std::string description, const std::time_t &dateCreation, CompteUtilisateur &createur);
	/**
	 * @brief Le destructeur ne fait rien pour l'instant
	 *
	 */
	~CompteDepensesCommunes();
	/**
	 * @brief Cette methode donne les infos essentiels du compte de dépense commun
	 *
	 * @return les infos du compte (dans une chaîne de caractère c++)
	 */
	const std::string toString() const;
};
#endif