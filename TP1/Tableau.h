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
    Tableau(const Tableau& autre);
    ~Tableau();
    void printTab();
    bool ajouter(std::string nom, std::string numero);
    bool supprimer(std::string nom, std::string numero);
    bool supprimer(std::string nom);
    Tableau clone();
    int getNb()const;
    int getTaille()const;
    void setNb(int nb);
    Entree* getEntrees()const;

    Tableau& operator=(const Tableau& autre);

};

#endif 
