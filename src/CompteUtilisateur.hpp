#ifndef compte_utilisateur
#define compte_utilisateur
/**
 * @brief Classe qui représente le compte d'un utilisateur
 * @author Elhadji Moussa FAYE
 * @version 0.1
 * @since 0.1
 */
#include <string>

class CompteUtilisateur
{
	/**
	 * @brief Le pseudo de l'utilisateur
	 *
	 */
	std::string pseudo = "";
	/**
	 * @brief Le prénom de l'utilisateur
	 *
	 */
	std::string prenom = "";
	/**
	 * @brief Le nom de l'utilisateur
	 *
	 */
	std::string nom = "";
	/**
	 * @brief L'email de l'utilisateur
	 *
	 */
	std::string email = "";
	/**
	 * @brief Le hash du mot de passe de l'utilisateur
	 *
	 */
	std::string hashMotDePasse = "";

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
	/**
	 * @brief Cette méthode donne le pseudo de l'utilisateur
	 *
	 * @return le pseudo de la personne (dans une chaîne de caractère c++).
	 */
	std::string getPseudo();
	/**
	 * @brief Cette méthode donne le prénom de l'utilisateur
	 *
	 * @return le prénom de la personne (dans une chaîne de caractère c++).
	 */
	std::string getPrenom();
	/**
	 * @brief Cette méthode donne le nom de l'utilisateur
	 *
	 * @return le nom de la personne (dans une chaîne de caractère c++).
	 */
	std::string getNom();
	/**
	 * @brief Cette méthode donne l'email de l'utilisateur
	 *
	 * @return l'email de la personne (dans une chaîne de caractère c++).
	 */
	std::string getEmail();
	/**
	 * @brief Cette méthode donne le hash du mot de passe de l'utilisateur
	 *
	 * @return le nom de la personne (dans une chaîne de caractère c++).
	 */
	std::string getHashMotDePasse();
	/**
	 * @brief Cette méthode modifie le pseudo de l'utilisateur par un nouveau pseudo
	 *
	 * @param pseudo le nouveau pseudo (dans une chaîne de caractère c++)
	 */
	void setPseudo(std::string pseudo);
	/**
	 * @brief Cette méthode modifie le prenom de l'utilisateur par un nouveau prenom
	 *
	 * @param prenom le nouveau prénom (dans une chaîne de caractère c++)
	 */
	void setPrenom(std::string prenom);
	/**
	 * @brief Cette méthode modifie le nom de l'utilisateur par un nouveau nom
	 *
	 * @param nom le nouveau nom (dans une chaîne de caractère c++)
	 */
	void setNom(std::string nom);
	/**
	 * @brief Cette méthode modifie l'email de l'utilisateur par un nouvel email
	 *
	 * @param email le nouvel email (dans une chaîne de caractère c++)
	 */
	void setEmail(std::string email);
	/**
	 * @brief Cette méthode modifie le hash du mot de passe de l'utilisateur par un nouveau hash
	 *
	 * @param hashMDP le nouvel hash du mot de passe (dans une chaîne de caractère c++)
	 */
	void setHashMotDePasse(std::string hashMDP);
};
#endif