#ifndef TABLEAU_H
#define TABLEAU_H

#include <iostream>
#include <string>
#include "Entree.h"

class Tableau {
private:
    int taille;
    Entree* tableau;
    int nb_element;

public:
    Tableau();
    Tableau(int taille_p);
    ~Tableau();
    void printTab();
    bool ajouter(std::string nom, std::string numero);
    bool supprimer(std::string nom, std::string numero);
    bool supprimer(std::string nom);
    int getNb()const;
    int getTaille()const;

    Agenda operator+(const Agenda& autre) const;
};

#endif 
