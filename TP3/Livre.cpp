#include "Livre.h"
#include <iostream>
using namespace std;

Livre::Livre(string& titre, string* resume, string auteur, string editeur, int annee)

    : Document(titre, resume, auteur), editeur(editeur), anneeParution(annee) {}

Livre::Livre( Livre& other)

    : Document(other), editeur(other.editeur), anneeParution(other.anneeParution) {}

// Destructeur
Livre::~Livre() {}

void Livre:: afficher()const{
    Document::afficher();
    cout << "Editeur: " << editeur << endl;
    cout << "Année de parution: " << anneeParution << endl;

}
Livre Livre::clone(){
    return  Livre(*this);
}

Livre& Livre::operator=(const Livre& other) {
    if (this != &other) {
        Document::operator=(other); // Appeler l'opérateur d'affectation de la classe de base
        editeur = other.editeur;
        anneeParution = other.anneeParution;
    }
    return *this;
}






