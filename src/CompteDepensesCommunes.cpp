#include "CompteDepensesCommunes.hpp"

CompteDepensesCommunes::CompteDepensesCommunes(const std::string identifiant, const std::string nom, std::string description, const std::time_t dateCreation, const CompteUtilisateur &createur) : identifiant(identifiant), nom(nom), description(description), dateCreation(dateCreation), createur(createur)
{

}

CompteDepensesCommunes::~CompteDepensesCommunes()
{
	
}