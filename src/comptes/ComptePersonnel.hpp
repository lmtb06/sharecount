#ifndef compte_personnel
#define compte_personnel
/**
 * @brief Classe qui représente le compte d'une personne (admin ou utilisateur)
 * @author Elhadji Moussa FAYE
 * @version 0.3
 * @since 0.2
 */
#include <string>
#include "../gestionnaires/GestionnaireSauvegarde.hpp"

class ComptePersonnel
{
protected:
	/**
	 * @brief Le pseudo de la personne
	 *
	 */
	std::string pseudo;
	/**
	 * @brief Le prénom de la personne
	 *
	 */
	std::string prenom;
	/**
	 * @brief Le nom de la personne
	 *
	 */
	std::string nom;
	/**
	 * @brief L'email de la personne
	 *
	 */
	std::string email;
	/**
	 * @brief Le hash du mot de passe de la personne
	 *
	 */
	std::string hashMotDePasse;

	/**
 * @brief Le constructeur permet de remplir les champs de la classe en fonction des paramètres passés
 * Ce constructeur reste protégé pour que la classe reste abstraite, seul les classes filles pourront être instanciés
 *
 * @param pseudo le pseudo de la personne
 * @param prenom le prenom de la personne
 * @param nom le nom de la personne
 * @param email l'email de la personne
 * @param hashMDP le hash du mot de passe de la personne
 */
	ComptePersonnel(const std::string &pseudo, const std::string &prenom, const std::string &nom, const std::string &email, const std::string &hashMDP);
	/**
	 * @brief Le destructeur ne fait rien pour l'instant
	 *
	 */
public:
	/**
	 * @brief Le destructeur ne fait rien pour l'instant
	 *
	 */
	virtual ~ComptePersonnel();
	/**
	 * @brief Cette méthode donne le pseudo de la personne
	 *
	 * @return le pseudo de la personne (dans une chaîne de caractère c++).
	 *
	 */
	std::string getPseudo() const;
	/**
	 * @brief Cette méthode donne le prénom de la personne
	 *
	 * @return le prénom de la personne (dans une chaîne de caractère c++).
	 */
	std::string getPrenom() const;
	/**
	 * @brief Cette méthode donne le nom de la personne
	 *
	 * @return le nom de la personne (dans une chaîne de caractère c++).
	 */
	std::string getNom() const;
	/**
	 * @brief Cette méthode donne l'email de la personne
	 *
	 * @return l'email de la personne (dans une chaîne de caractère c++).
	 */
	std::string getEmail() const;
	/**
	 * @brief Cette méthode donne le hash du mot de passe de la personne
	 *
	 * @return le nom de la personne (dans une chaîne de caractère c++).
	 */
	std::string getHashMotDePasse() const;
	/**
	 * @brief Cette méthode modifie le pseudo de la personne par un nouveau pseudo
	 *
	 * @param pseudo le nouveau pseudo (dans une chaîne de caractère c++)
	 */
	void setPseudo(const std::string &pseudo);
	/**
	 * @brief Cette méthode modifie le prenom de la personne par un nouveau prenom
	 *
	 * @param prenom le nouveau prénom (dans une chaîne de caractère c++)
	 */
	void setPrenom(const std::string &prenom);
	/**
	 * @brief Cette méthode modifie le nom de la personne par un nouveau nom
	 *
	 * @param nom le nouveau nom (dans une chaîne de caractère c++)
	 */
	void setNom(const std::string &nom);
	/**
	 * @brief Cette méthode modifie l'email de la personne par un nouvel email
	 *
	 * @param email le nouvel email (dans une chaîne de caractère c++)
	 */
	void setEmail(const std::string &email);
	/**
	 * @brief Cette méthode modifie le hash du mot de passe de la personne par un nouveau hash
	 *
	 * @param hashMDP le nouvel hash du mot de passe (dans une chaîne de caractère c++)
	 */
	void setHashMotDePasse(const std::string &hashMDP);

	/**
	 * @brief Sauvegarde les données du compte grâce au gestionnaire de sauvegarde
	 *
	 * @param gs le gestionnaire de sauvegarde
	 */
	virtual void sauvegarder(GestionnaireSauvegarde &gs) const = 0;
	/**
	 * @brief Cette methode donne les infos essentiels du compte personnel
	 *
	 * @return les infos du compte (dans une chaîne de caractère c++)
	 */
	virtual std::string toString() const;
};
#endif
