#ifndef gestionnaire_sauvegarde_fichier
#define gestionnaire_sauvegarde_fichier
#include <string>
#include "GestionnaireSauvegarde.hpp"

/**
 * @brief Classe qui est utilisée pour la sauvegarde persistante des informations des différents objets de l'application dans un fichier
 *
 * @author Elhadji Moussa FAYE
 * @version 0.5
 * @since 0.5
 */
class GestionnaireSauvegardeFichier
{
protected:
	std::string chemin_comptes_utilisateur = "ccu.txt";
	std::string chemin_comptes_depenses = "ccd.txt";
	/**
	 * @brief Sauvegarde les données d'un compte utilisateur
	 *
	 * @param compteU le compte à sauvegarder
	 */
	virtual void sauvegarderCompteUtilisateur(const CompteUtilisateur &compteU);
};

#endif