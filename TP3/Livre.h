#ifndef LIVRE_H
#define LIVRE_H

#include "Document.h"

class Livre : public Document {
private:
    string editeur;
    int anneeParution;

public:
    // Constructeur
    Livre(string& titre, string* resume, string auteur, string editeur, int annee);

    // Constructeur de copie
    Livre(Livre& other);

    ~Livre();
    void  afficher() const;
    Livre clone();


};

#endif
