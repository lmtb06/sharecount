#include "ExceptionSauvegardeCompteUtilisateur.hpp"

ExceptionSauvegardeCompteUtilisateur::ExceptionSauvegardeCompteUtilisateur() : ExceptionSC("Erreur lors de la sauvegarde du compte")
{
}

const char *ExceptionSauvegardeCompteUtilisateur::what() const throw()
{
	return ExceptionSC::what();
}