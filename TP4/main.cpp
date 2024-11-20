#include "Biblio.h"
#include "Livre.h"
#include "Article.h"
#include <iostream>

using namespace std;

int main() {
    Biblio biblio;

    string resume1 = "Exploration of Quantum Computing";
    string titre1 = "Mastering Quantum Algorithms";
    Livre* livre1 = new Livre(titre1, &resume1, "Alex", "Jordan", 2022, 8);

    string resume2 = "Understanding Data Structures";
    string titre2 = "The World of Trees and Graphs";
    Article* article1 = new Article(titre2, "Taylor", &resume2, "Tech Innovations", "Williams", 4, 6);

    biblio.ajouterDocument(livre1);
    biblio.ajouterDocument(article1);

    cout << "\nTHE COLLECTION IS FILLED WITH THESE ITEMS" << endl;
    cout << "------------------" << endl;
    biblio.afficherBibliotheque();

    return 0;
}
