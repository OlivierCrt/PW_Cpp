#include "../Document.h"
#include "../Livre.h"
#include "../Article.h"
#include <iostream>
using namespace std;

int main() {
    // Test pour la classe Document
    cout << "===== Test de l'opérateur d'affectation : Document =====" << endl;
    string titreDoc1 = "Titre Document 1";
    string resumeDoc1 = "Résumé Document 1";
    string auteurDoc1 = "Auteur Document 1";

    Document doc1(titreDoc1, &resumeDoc1, auteurDoc1);
    Document doc2;

    cout << "Avant affectation :" << endl;
    cout << "Document 1 :" << endl;
    doc1.afficher();
    cout << "Document 2 :" << endl;
    doc2.afficher();

    doc2 = doc1; // Test de l'opérateur d'affectation

    cout << "\nAprès affectation :" << endl;
    cout << "Document 2 :" << endl;
    doc2.afficher();

    // Test pour la classe Livre
    cout << "\n===== Test de l'opérateur d'affectation : Livre =====" << endl;
    string titreLivre1 = "Titre Livre 1";
    string resumeLivre1 = "Résumé Livre 1";
    string auteurLivre1 = "Auteur Livre 1";
    string editeurLivre1 = "Éditeur Livre 1";
    int anneeLivre1 = 2000;

    Livre livre1(titreLivre1, &resumeLivre1, auteurLivre1, editeurLivre1, anneeLivre1);
    Livre livre2(titreLivre1, &resumeLivre1, auteurLivre1, "Placeholder", 1900);

    cout << "Avant affectation :" << endl;
    cout << "Livre 1 :" << endl;
    livre1.afficher();
    cout << "Livre 2 :" << endl;
    livre2.afficher();

    livre2 = livre1; // Test de l'opérateur d'affectation

    cout << "\nAprès affectation :" << endl;
    cout << "Livre 2 :" << endl;
    livre2.afficher();

    // Test pour la classe Article
    cout << "\n===== Test de l'opérateur d'affectation : Article =====" << endl;
    string titreArticle1 = "Titre Article 1";
    string resumeArticle1 = "Résumé Article 1";
    string auteurArticle1 = "Auteur Article 1";
    string revueArticle1 = "Revue Article 1";
    string editeurArticle1 = "Éditeur Article 1";
    int numeroArticle1 = 101;

    Article article1(titreArticle1, &resumeArticle1, auteurArticle1, revueArticle1, editeurArticle1, numeroArticle1);
    Article article2(titreArticle1, &resumeArticle1, auteurArticle1, "Revue Temp", "Éditeur Temp", 999);

    cout << "Avant affectation :" << endl;
    cout << "Article 1 :" << endl;
    article1.afficher();
    cout << "Article 2 :" << endl;
    article2.afficher();

    article2 = article1; // Test de l'opérateur d'affectation

    cout << "\nAprès affectation :" << endl;
    cout << "Article 2 :" << endl;
    article2.afficher();

    return 0;
}
