#ifndef gestionnaire_sauvegarde_fichier
#define gestionnaire_sauvegarde_fichier
#include <string>
#include <QtXml>
#include "gestionnaires/GestionnaireSauvegarde.hpp"
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
	std::string chemin_comptes_utilisateur = "/home/lmtb/shares/S5/CPOA/Projet/src/res/sauvegarde/ccu.xml";
	std::string chemin_comptes_depenses = "ccd.xml";

public:
	GestionnaireSauvegardeFichier();
	/**
     * @brief Sauvegarde les données d'un compte utilisateur
     * @see GestionnaireSauvegarde
     * @param compteU le compte à sauvegarder
     */
	void sauvegarderCompteUtilisateur(const CompteUtilisateur &compteU) override;

	virtual bool compteExiste(const std::string &pseudo, const std::string &hashMDP) override;

	virtual bool pseudoExiste(const std::string &pseudo) override;
};

#endif
