#include "CompteDepensesCommunes.hpp"

CompteDepensesCommunes::CompteDepensesCommunes(const std::string &identifiant, std::string nom, std::string description, const std::time_t &dateCreation, CompteUtilisateur &createur) : identifiant(identifiant), nom(nom), description(description), dateCreation(dateCreation), createur(createur)
{

}

CompteDepensesCommunes::~CompteDepensesCommunes()
{

}

const std::string CompteDepensesCommunes::toString() const
{
	const std::string resultat = "Identifiant : " + this->identifiant + "\nNom : " + this->nom +
															 +"\nDescription : " + this->description + "\nDate de creation : " + ctime(&dateCreation) + "Pseudo créateur : " + createur.getPseudo();
	return resultat;
}