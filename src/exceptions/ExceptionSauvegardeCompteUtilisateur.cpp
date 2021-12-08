#include "ExceptionSauvegardeCompteUtilisateur.hpp"

ExceptionSauvegardeCompteUtilisateur::ExceptionSauvegardeCompteUtilisateur() : ExceptionSC("Erreur lors de la sauvegarde du compte")
{
}

ExceptionSauvegardeCompteUtilisateur::ExceptionSauvegardeCompteUtilisateur(const std::string &precision) : ExceptionSC("Erreur lors de la sauvegarde du compte : " + precision)
{
}

const char *ExceptionSauvegardeCompteUtilisateur::what() const throw()
{
	return ExceptionSC::what();
}
