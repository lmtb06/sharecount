#include "gestionnaires/GestionnaireSauvegardeFichier.hpp"
#include "comptes/CompteUtilisateur.hpp"
#include "comptes/CompteDepensesCommunes.hpp"

GestionnaireSauvegardeFichier::GestionnaireSauvegardeFichier()
{
}

void GestionnaireSauvegardeFichier::sauvegarderCompteUtilisateur(const CompteUtilisateur &compteU)
{
	QDomDocument dom;
	QFile doc_xml(this->chemin_comptes_utilisateur.c_str());
	// On récupère la structure du xml si elle existe
	QDomElement root;
	if (doc_xml.exists() && doc_xml.size() > 0)
	{
		if (!doc_xml.open(QIODevice::ReadOnly)) // Si le fichier n'est pas ouvert alors qu'il existe on lance une exception de sauvegarde de compte
		{
			throw ExceptionSauvegardeCompteUtilisateur("Impossible d'ouvrir le fichier xml");
		}

		dom.setContent(&doc_xml); // on recupere l'ancien contenu du xml s'il y'en a
		doc_xml.close();
		root = dom.firstChildElement("comptes");
	}
	bool trouve = false; // Vrai si on a trouvé la liste des comptes d'utilisateurs
	while (!root.isNull() && !trouve)
	{
		if (root.attribute("type", "NULL") == "utilisateur")
		{
			trouve = true;
		}
		else
		{
			root = root.nextSiblingElement("comptes");
		}
	}
	if (!trouve) // dans le cas où elle n'existe pas on la crée
	{
		root = dom.createElement("comptes");
		root.setAttribute("type", "utilisateur");
		dom.appendChild(root);
	}

	QDomElement compte = root.firstChildElement(QString("compte"));
	trouve = false;											// booleen pou dire si on a ou non trouvé le compte correspondant
	while (!compte.isNull() && !trouve) // On cherche le compte dans la liste de compte déjà présent
	{
		QDomAttr pseudo = compte.attributeNode("pseudo");
		if (pseudo.value().toStdString() == compteU.getPseudo())
		{
			trouve = true;
		}
		else
		{
			compte = compte.nextSiblingElement("compte");
		}
	}

	if (!trouve) // Si on n'a pas trouvé le compte c'est qu'il n'existe pas encore donc on le créé
	{
		compte = dom.createElement("compte");
		compte.setAttribute("pseudo", compteU.getPseudo().c_str());
		root.appendChild(compte);
	}
	// On met à jour les champs du compte
	compte.setAttribute("prenom", compteU.getPrenom().c_str());
	compte.setAttribute("nom", compteU.getNom().c_str());
	compte.setAttribute("email", compteU.getEmail().c_str());
	compte.setAttribute("hashMotDePasse", compteU.getHashMotDePasse().c_str());

	// On met à jour les comptes de depenses communes
	// D'abord on supprime les anciens comptes de depenses
	QDomNodeList anciensCDC = compte.elementsByTagName("compteDepense");
	while (!anciensCDC.isEmpty())
	{
		QDomNode node = anciensCDC.at(0);
		node.parentNode().removeChild(node);
	}

	// Puis on rajoute les nouveaux comptes de depenses
	std::vector<CompteDepensesCommunes> comptesDepenses = compteU.getComptesDepensesCommunes();
	for (int i = 0; i < (int)comptesDepenses.size(); i++)
	{
		QDomElement compteDepense = dom.createElement("compteDepense");
		compteDepense.setAttribute("identifiant", comptesDepenses[i].getIdentifiant().c_str());
		compte.appendChild(compteDepense);
	}

	// On sauvegarde les modifications
	if (!doc_xml.open(QIODevice::WriteOnly)) // Si le fichier n'est pas ouvert on lance une exception de sauvegarde de compte
	{
		throw ExceptionSauvegardeCompteUtilisateur("Impossible d'écrire sur le fichier xml");
	}
	QTextStream stream(&doc_xml);
	stream << dom.toString();
	doc_xml.close();
}

bool GestionnaireSauvegardeFichier::compteExiste(const std::string &pseudo, const std::string &hashMDP)
{
	return false;
}

bool GestionnaireSauvegardeFichier::pseudoExiste(const std::string &pseudo)
{
	return false;
}
