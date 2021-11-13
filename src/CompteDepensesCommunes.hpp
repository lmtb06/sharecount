#ifndef compte_depense_communes
#define compte_depense_communes
/**
 * @brief Cette classe représente le compte de dépenses communes
 * @author Nicolas GRAFF
 * @version 0.1
 * @since 0.1
 */
#include <string>
#include "CompteUtilisateur.hpp"

class CompteDepensesCommunes
{
	
public:
	/**
 * @brief Le constructeur permet de remplir les champs de la classe en fonction des paramètres passés
 *
 * @param identifiant l'identifiant du compte
 * @param compteU compte de l'utilisateur
 * @param nom le nom du compte
 * @param description description du l'utilisateur
 * @param hashMDP le hash du mot de passe de l'utilisateur
 */
	CompteDepensesCommunes(std::string identifiant, CompteUtilisateur compteU, std::string nom, std::string description, std::string dateCreation);
	/**
	 * @brief Le destructeur ne fait rien pour l'instant
	 *
	 */
};
#endif