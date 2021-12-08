#include "GestionnaireSauvegardeFichier.hpp"
#include "comptes/CompteUtilisateur.hpp"

GestionnaireSauvegardeFichier::GestionnaireSauvegardeFichier()
{
}

void GestionnaireSauvegardeFichier::sauvegarderCompteUtilisateur(const CompteUtilisateur &compteU)
{
	QDomDocument dom;
	QFile doc_xml(this->chemin_comptes_utilisateur.c_str());
	// On récupère la structure du xml s'il existe
	QDomElement root;
	if (doc_xml.exists() && doc_xml.size() > 0)
	{
		if (!doc_xml.open(QIODevice::ReadOnly)) // Si le fichier n'est pas ouvert on lance une exception de sauvegarde de compte
		{
			throw ExceptionSauvegardeCompteUtilisateur("Impossible d'ouvrir le fichier xml");
		}
		if (!dom.setContent(&doc_xml)) // Si on arrive pas à associer le fichier XML à l'objet DOM
		{
			doc_xml.close();
			throw ExceptionSauvegardeCompteUtilisateur("Impossible d'associer le fichier xml à l'objet DOM");
		}
		doc_xml.close();
		root = dom.firstChildElement("comptes");
	}
	else // dans le cas où il n'existe pas on le crée
	{
		root = dom.createElement("comptes");
		root.setAttribute("type", "utilisateur");
		dom.appendChild(root);
	}

	std::cout << dom.toString().toStdString() << std::endl;

	QDomElement compte = root.firstChildElement(QString("compte"));
	bool modifie = false; // lorsqu'on aura modifié le compte correspondant s'il existe déjà
	while (!compte.isNull() && !modifie)
	{
		QDomAttr pseudo = compte.attributeNode("pseudo");
		if (pseudo.value().toStdString() == compteU.getPseudo())
		{
			compte.setAttribute("prenom", compteU.getPrenom().c_str());
			modifie = true;
		}
		compte = compte.nextSibling().toElement();
	}
	// On sauvegarde les modifications
	if (!doc_xml.open(QIODevice::WriteOnly)) // Si le fichier n'est pas ouvert on lance une exception de sauvegarde de compte
	{
		throw ExceptionSauvegardeCompteUtilisateur("Impossible d'écrire sur le fichier xml");
	}
	QTextStream stream(&doc_xml);
	stream << dom.toString();
	doc_xml.close();

	//    QString tag_compte_u = QString("CompteUtilisateur");
	//    // On met à jour le noeud s'il y'a déjà un node avec le même id
	//    QDomElement element = root.firstChildElement(tag_compte_u);
	//    while (!element.isNull()) {
	//        std::cout << element.attribute(QString("Nom")).toStdString();
	//        element = element.nextSiblingElement(tag_compte_u);
	//    }
	//    // On sauvegarde et ferme le document xml
	//    QTextStream stream(&doc_xml);
	//    dom.save(stream,0);
}
