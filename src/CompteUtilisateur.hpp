#ifndef compte_utilisateur
#define compte_utilisateur
#include <string>
#include <vector>
#include "CompteDepensesCommunes.hpp"
#include "ComptePersonnel.hpp"

/**
 * @brief Classe qui représente le compte d'un utilisateur
 * @author Elhadji Moussa FAYE
 * @version 0.2
 * @since 0.1
 */
class CompteUtilisateur : public ComptePersonnel
{
	/**
	 * @brief Liste des comptes de dépenses de l'utilisateur
	 * On utilise des pointeurs car vector ne peut pas fonctionner avec des références
	 *
	 */
	std::vector<CompteDepensesCommunes*> comptesDepensesCommunes;
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
	 *	TODO destructeur supprimer les comptes dépenses communes
	 */
	~CompteUtilisateur();

	/**
	 * @brief Ne fait tien pour l'instant
	 *	TODO sauvegarde les données du compte
	 * @return true
	 * @return false
	 */
	bool sauvegarder() const;
};
#endif