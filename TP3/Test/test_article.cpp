#include "../Article.h"
#include "../Livre.h"
#include <iostream>
using namespace std;

int main() {
    string titre = "L'importance d un algo";
    string resume = "Une analyse";
    string auteur = "Jean";
    string revue = "Revue ";
    string editeur = "Sciences Press";
    int numero = 42;

    // Création d'un article
    Article article(titre, &resume, auteur, revue, editeur, numero);

    // Affichage des informations de l'article
    cout << "Affichage de l'article :" << endl;
    article.afficher();

    // Clone de l'article
    Article articleClone = article.clone();

    // Modification du clone
    string nouvelleRevue = "zzzzzzzzzzzzzzzzzzzzzzzzzzz";
    articleClone.setRevue(nouvelleRevue);

    cout << "\nAffichage du clone modifié :" << endl;
    articleClone.afficher();
    cout<< "\n"<< endl;
    article.afficher();

    return 0;
}
