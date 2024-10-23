#include "Tableau.h"
#include <iostream>

using namespace std;

Tableau::Tableau() : taille(0), nb_element(0) {
    this->tableau = nullptr; // Ne pas allouer de mémoire si taille est 0
}

Tableau::Tableau(int taille_p) : taille(taille_p), nb_element(0) {
    if (taille > 0) {
        this->tableau = new Entree[taille]; // Allouer mémoire seulement si taille > 0
    } else {
        this->tableau = nullptr; // Ne pas allouer de mémoire si taille <= 0
    }
}

Tableau::~Tableau() {
    delete[] tableau;
}

void Tableau::printTab() {
    cout << "Taille: " << this->taille << endl;

    // Parcourir jusqu'à nb_element pour éviter le dépassement
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

    // Utilisez tableau[nb_element] seulement si la mémoire est allouée
    if (this->tableau) {
        this->tableau[nb_element].setNom(nom_p);
        this->tableau[nb_element].setNum(numero_tp);
        this->nb_element++;
        return true;
    }
    return false; // Si tableau est nullptr
}

// Les autres méthodes restent inchangées...

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

int Tableau::getNb() {
    return this->nb_element;
}

int Tableau::getTaille() {
    return this->taille;
}
