#include "Article.h"
#include <iostream>
using namespace std;

// Constructeur avec paramètres
Article::Article(string& titre, string* resume, string auteur, string revue, string editeur, int numero)
    : Document(titre, resume, auteur), revue(revue), editeur(editeur), numeroEdition(numero) {}

// Constructeur de copie
Article::Article(Article& other)
    : Document(other), revue(other.revue), editeur(other.editeur), numeroEdition(other.numeroEdition) {}

// Destructeur
Article::~Article() {}

// Affichage des informations d'un article
void Article::afficher() const {
    Document::afficher();
    cout << "Revue: " << revue << endl;
    cout << "Éditeur: " << editeur << endl;
    cout << "Numéro d'édition: " << numeroEdition << endl;
}

// Clone de l'article
Article Article::clone() {
    return Article(*this);
}

// Getters
string Article::getRevue() const {
    return revue;
}

string Article::getEditeur() const {
    return editeur;
}

int Article::getNumeroEdition() const {
    return numeroEdition;
}

// Setters
void Article::setRevue(string& nouvelleRevue) {
    revue = nouvelleRevue;
}

void Article::setEditeur(string nouvelEditeur) {
    editeur = nouvelEditeur;
}

void Article::setNumeroEdition(int nouveauNumero) {
    numeroEdition = nouveauNumero;
}


Article& Article::operator=(const Article& other) {
    if (this != &other) {
        Document::operator=(other); // Appeler l'opérateur d'affectation de la classe de base
        revue = other.revue;
        editeur = other.editeur;
        numeroEdition = other.numeroEdition;
    }
    return *this;
}
