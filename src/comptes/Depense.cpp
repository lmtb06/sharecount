#include "Depense.h"

Depense::Depense(const std::string &identifiant, const float &montant, const std::string &motif, const std::time_t &dateAjout,
                 std::vector<std::pair<std::string, std::pair<float, float>>> &repartition, const CompteUtilisateur &createur) :
    identifiant(identifiant),
    montant(montant), motif(motif), dateAjout(dateAjout),
    repartition(repartition),
    createur(createur)
{

}

Depense::~Depense(){

}

const std::string Depense::toString() const
{
    std::string repart="";
    for(const auto& value: repartition) {
        repart+=value.first + " dépensé " + std::to_string(value.second.first) + " et payé " + std::to_string(value.second.second) +"\n";
    }

    const std::string resultat = "Identifiant : " + this->identifiant +
            "; Montant : " + std::to_string(this->montant) +
            "; Motif : " + this->motif +
            "; Date d'ajout : " + ctime(&dateAjout) +
            "; Pseudo créateur : " + createur.getPseudo() +
            "\n" + repart;

    return resultat;
}

const std::vector<std::pair<std::string, std::pair<float, float>>> Depense::getRepartition() const {
    return this->repartition;
}

const std::string Depense::getCreateur() const {
    return this-> createur.getPseudo();
}

