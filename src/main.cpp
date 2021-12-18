#include <iostream>
#include "comptes/CompteDepensesCommunes.hpp"
#include "comptes/CompteUtilisateur.hpp"
#include "comptes/ComptePersonnel.hpp"
#include "gestionnaires/GestionnaireDialogue.hpp"
#include "gestionnaires/GestionnaireSauvegardeFichier.hpp"

/**
 * @brief Test de la classe CompteUtilisateur
 * utiliser la commande make pour creer l'executable (il s'execute automatiquement la première fois)
 *
 * @version 0.3
 *
 * @author Elhadji Moussa FAYE
 */

int main()
{
    GestionnaireDialogue gd = GestionnaireDialogue();
    gd.afficherMenu();

	return 0;
}
