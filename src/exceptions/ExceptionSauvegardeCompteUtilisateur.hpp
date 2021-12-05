#include "ExceptionSC.hpp"

/**
 * @brief Exception déclenchée lors d'une erreur de sauvegarde d'un compte utilisateur
 *@author Elhadji Moussa FAYE
 */
class ExceptionSauvegardeCompteUtilisateur : ExceptionSC
{
public:
	/**
 * @brief Construit une nouvelle exception de sauvegarde de compte d'utilisateur
 *
 */
	ExceptionSauvegardeCompteUtilisateur();
	/**
	 * @brief
	 * @see ExceptionSC
	 *
	 * @return const char*
	 */
	virtual const char *what() const throw();
};