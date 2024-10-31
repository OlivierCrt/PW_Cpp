#include "Tableau.h"
#include <iostream>

using namespace std;

Tableau::Tableau() : taille(0), nb_element(0) {
    this->tableau = nullptr;
}

Tableau::Tableau(int taille_p) : taille(taille_p), nb_element(0) {
    if (taille > 0) {
        this->tableau = new Entree[taille];
    } else {
        this->tableau = nullptr; 
    }
}

Tableau::Tableau(const Tableau& autre) 
    : taille(autre.taille), nb_element(autre.nb_element) { 

    if (autre.tableau) {  
        this->tableau = new Entree[autre.taille];  
        for (int i = 0; i < autre.nb_element; ++i) {
            this->tableau[i] = autre.tableau[i];  
            
        }
    } else {
        this->tableau = nullptr;  
    }
}

Tableau::~Tableau() {
    delete[] tableau;
}





Tableau& Tableau::operator=(const Tableau& other) {
    if (this != &other) {
        delete[] this->tableau;

        this->taille = other.taille;
        this->nb_element = other.nb_element;

        if (other.tableau) {
            this->tableau = new Entree[other.taille];
            for (int i = 0; i < other.nb_element; i++) {
                this->tableau[i] = other.tableau[i];
            }
        } else {
            this->tableau = nullptr;
        }
    }
    return *this;
}



void Tableau::printTab() {
    cout << "Taille: " << this->taille << endl;

    for (int i = 0; i < this->nb_element; i++) {
        tableau[i].printEntree();
    }
    cout << "Nbe: " << this->nb_element << endl;
}

bool Tableau::ajouter(string nom_p, string numero_tp) {
    if (this->nb_element >= this->taille) {
        cerr << "Tableau plein !" << endl;
        return false;
    }

    if (this->tableau) {
        this->tableau[nb_element].setNom(nom_p);
        this->tableau[nb_element].setNum(numero_tp);
        this->nb_element++;
        return true;
    }
    return false; 
}


bool Tableau::supprimer(string nom_p, string numero_p) {
    for (int i = 0; i < this->nb_element; i++) {
        if (tableau[i].getNom() == nom_p && tableau[i].getNum() == numero_p) {
            for (int j = i; j < this->nb_element - 1; j++) {
                tableau[j] = tableau[j + 1];
            }
            this->nb_element--;
            return true;
        }
    }
    cerr << "Erreur: Entrée non trouvée." << endl;
    return false;
}

bool Tableau::supprimer(string nom_p) {
    for (int i = 0; i < this->nb_element; i++) {
        if (tableau[i].getNom() == nom_p) {
            for (int j = i; j < this->nb_element - 1; j++) {
                tableau[j] = tableau[j + 1];
            }
            this->nb_element--;
            return true;
        }
    }
    cerr << "Erreur: Entrée non trouvée." << endl;
    return false;
}

int Tableau::getNb() const{
    return this->nb_element;
}

int Tableau::getTaille()const {
    return this->taille;
}
void Tableau::setNb(int nbp){
    this->nb_element = nbp;
}
Entree* Tableau::getEntrees()const{
    return this->tableau;

}


Tableau Tableau::clone() {
    Tableau res(this->getTaille());

    res.setNb(this->getNb());

    for (int i = 0; i < this->getNb(); i++) {
        res.tableau[i] = this->tableau[i]; 
    }

    return res;
}

