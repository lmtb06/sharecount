#include "CompteUtilisateur.hpp"
#include "CompteDepensesCommunes.hpp"

CompteUtilisateur::CompteUtilisateur(const std::string &pseudo, const std::string &prenom, const std::string &nom, const std::string &email, const std::string &hashMDP) : ComptePersonnel(pseudo, prenom, nom, email, hashMDP)
{
}

CompteUtilisateur::~CompteUtilisateur()
{
	// on ne libére pas le vector car on utilise plus de new
}

void CompteUtilisateur::sauvegarder(GestionnaireSauvegarde &gs) const
{
	// Pattern visiteur
	gs.sauvegarderCompteUtilisateur(*this);
}

void CompteUtilisateur::addCompteDepensesCommunes(const CompteDepensesCommunes &compteDC)
{
	this->comptesDepensesCommunes.push_back(compteDC);
}

std::string CompteUtilisateur::toString() const
{
	std::string resultat = ComptePersonnel::toString();
	if (0 < (int)comptesDepensesCommunes.size())
	{
		resultat += "\n------COMPTES DEPENSES COMMUNES------";
	}

	// On appelle le toString de tous les comptes de dépenses communes
	for (int i = 0; i < (int)comptesDepensesCommunes.size(); i++)
	{
		resultat += "\n" + comptesDepensesCommunes[i].toString();
		if (i + 1 < (int)comptesDepensesCommunes.size())
		{
			resultat += "\n---------";
		}
	}
	return resultat;
}

std::vector<CompteDepensesCommunes> CompteUtilisateur::getComptesDepensesCommunes() const
{
	return this->comptesDepensesCommunes;
}
