#include "../Livre.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
    // Créer un objet Livre
    string titre = "Les Misérables";
    string resume = "Un roman sur la misère et la rédemption.";
    string auteur = "Victor Hugo";
    string editeur = "Gallimard";
    int annee = 1862;

    Liv0re livre1(titre, &resume, auteur, editeur, annee);

    cout << "Détails du premier livre:" << endl;
    livre1.afficher();
    cout << endl;

    Livre livre2(livre1);

    cout << "Détails du livre copié (via constructeur par copie):" << endl;
    livre2.afficher();
    cout << endl;

    Livre livre3 = livre1.clone();

    cout << "Détails du livre cloné (via méthode clone):" << endl;
    livre3.afficher();
    cout << endl;

    return 0;
}
