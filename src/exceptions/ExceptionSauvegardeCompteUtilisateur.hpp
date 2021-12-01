#include "ExceptionSC.hpp"

/**
 * @brief Exception déclenchée lors d'une erreur de sauvegarde d'un compte utilisateur
 *
 */
class ExceptionSauvegardeCompteUtilisateur : ExceptionSC
{
public:
	/**
 * @brief Construit une nouvelle exception de sauvegarde de compte
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