#ifndef ARTICLE_H
#define ARTICLE_H

#include "Document.h"
#include <string>
using namespace std;

class Article : public Document {
private:
    string revue;      // Titre de la revue
    string editeur;    // Nom de l'éditeur
    int numeroEdition; // Numéro d'édition

public:
    // Constructeur avec paramètres
    Article(string& titre, string* resume, string auteur, string revue, string editeur, int numero);

    // Constructeur de copie
    Article(Article& other);

    // Destructeur
    ~Article();

    // Méthodes
    void afficher() const;
    Article clone();

    // Getters
    string getRevue() const;
    string getEditeur() const;
    int getNumeroEdition() const;

    // Setters
    void setRevue(string& nouvelleRevue);
    void setEditeur(string nouvelEditeur);
    void setNumeroEdition(int nouveauNumero);

    Article& operator=(const Article& other); // Opérateur d'affectation

};

#endif
