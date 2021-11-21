#ifndef gestionnaire_sauvegarde
#define gestionnaire_sauvegarde
#include <string>
#include "../comptes/CompteUtilisateur.hpp"

/**
 * @brief Interface qui est utilisée pour la sauvegarde persistante des informations des différents objets de l'application
 *
 * @author Elhadji Moussa FAYE
 * @version 0.4
 * @since 0.4
 */
class GestionnaireSauvegarde
{
	// virtual void creerCompteDepensesCommunes(const CompteUtilisateur& createur, const std::string& nom, const std::string& description) = 0;
	// virtual void getDepenses(const CompteDepensesCommunes& compteDC) = 0;
	// virtual void getComptesDepensesCommunes(const CompteUtilisateur& compteU) = 0;
	// virtual void getCompte(const std::string& pseudo) = 0;
	/**
	 * @brief
	 *
	 * @param compteU
	 */
	virtual void sauvegarderCompteUtilisateur(const CompteUtilisateur& compteU) const = 0;
	// virtual bool compteExiste(const std::string& pseudo, const std::string& hashMDP) = 0;
	// virtual bool pseudoExiste(const std::string& pseudo) = 0;
};

#endif