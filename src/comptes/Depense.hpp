#ifndef DEPENSE_HPP
#define DEPENSE_HPP

#include <string>
#include <ctime>
#include "CompteUtilisateur.hpp"

/**
 * @brief Cette classe représente une depense
 * @author Didier MANZI
 * @version 0.7
 * @since 0.7
 */
class Depense
{

    /**
     * @brief référence à l'utilisateur endetté
     *
     */
    CompteUtilisateur &endette;
    /**
     * @brief référence à l'utilisateur à qui on doit la dette
     *
     */
    CompteUtilisateur &receveur;
    /**
     * @brief date de création de la dépense
     *
     */
    std::time_t dateCreation;
    /**
     * @brief dernière date à laquelle la dépense a été mise à jour
     *
     */
    std::time_t dateModification;
    /**
     * @brief montant de la dette
     *
     */
    int montant;
    /**
     * @brief description de la dette
     *
     */
    std::string &desc;

public:

    /**
 * @brief Le constructeur utilise les paramètres passés pour créer une dépense
 * @param endette Compte de l'utilisateur endetté
 * @param receveur Compte de l'utilisateur receveur
 * @param dateCreation Date de la création de la dette
 * @param montant montant de la dette
 * @param d description de la dette
 */
    Depense(CompteUtilisateur &endette, CompteUtilisateur &receveur, const std::time_t &dateCreation, int montant, const std::string &desc);

};
#endif // DEPENSE_HPP
