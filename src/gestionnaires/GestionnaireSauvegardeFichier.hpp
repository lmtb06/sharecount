#ifndef gestionnaire_sauvegarde_fichier
#define gestionnaire_sauvegarde_fichier
#include <string>
#include <QtXml>
#include "GestionnaireSauvegarde.hpp"
#include <iostream>

/**
 * @brief Classe qui est utilisée pour la sauvegarde persistante des informations des différents objets de l'application dans un fichier xml
 *
 * @author Elhadji Moussa FAYE
 * @version 0.5
 * @since 0.5
 */
class GestionnaireSauvegardeFichier : public GestionnaireSauvegarde
{
protected:
	std::string chemin_comptes_utilisateur = "ccu.xml";
	std::string chemin_comptes_depenses = "ccd.xml";

public:
	GestionnaireSauvegardeFichier();
	/**
     * @brief Sauvegarde les données d'un compte utilisateur
     *
     * @param compteU le compte à sauvegarder
     */
	void sauvegarderCompteUtilisateur(const CompteUtilisateur &compteU) override;
};

#endif
