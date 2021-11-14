#include "CompteUtilisateur.hpp"
#include "CompteDepensesCommunes.hpp"

CompteUtilisateur::CompteUtilisateur(std::string pseudo, std::string prenom, std::string nom, std::string email, std::string hashMDP) : ComptePersonnel(pseudo, prenom, nom, email, hashMDP)
{

}
CompteUtilisateur::~CompteUtilisateur()
{

	// On appelle le destructeur de tous les comptes de dépense communes du compte
	for (int i = 0; i < (int)comptesDepensesCommunes.size(); i++)
	{
		delete comptesDepensesCommunes[i];
	}
}

bool CompteUtilisateur::sauvegarder() const
{
	return ComptePersonnel::sauvegarder();
}

void CompteUtilisateur::addCompteDepensesCommunes(CompteDepensesCommunes *compteDC)
{
	this->comptesDepensesCommunes.push_back(compteDC);
}

const std::string CompteUtilisateur::toString() const
{
	std::string resultat = ComptePersonnel::toString();
	if (0 < (int)comptesDepensesCommunes.size())
	{
		resultat += "\n------COMPTES DEPENSES COMMUNES------";
	}

	// On appelle le toString de tous les comptes de dépenses communes
	for (int i = 0; i < (int)comptesDepensesCommunes.size(); i++)
	{
		resultat += "\n" + comptesDepensesCommunes[i]->toString();
		if (i + 1 < (int)comptesDepensesCommunes.size())
		{
			resultat += "\n---------";
		}
	}
	return resultat;
}