#ifndef compte_utilisateur
#define compte_utilisateur
/**
 * @brief Classe qui représente le compte d'un utilisateur
 * @author Elhadji Moussa FAYE
 * @version 0.2
 * @since 0.1
 */
#include <string>
#include "ComptePersonnel.hpp"

class CompteUtilisateur : public ComptePersonnel
{
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
	CompteUtilisateur(std::string pseudo, std::string prenom, std::string nom, std::string email, std::string hashMDP);
	/**
	 * @brief Le destructeur ne fait rien pour l'instant
	 *
	 */
	~CompteUtilisateur();

};
#endif