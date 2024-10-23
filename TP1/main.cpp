#include <iostream>
#include <string>
#include "Tableau.h"

using namespace std;

int main() {
    Tableau tableau(5, 0);

    // Compteurs de tests
    int tests_reussis = 0;
    int tests_echoues = 0;

    // Tester l'ajout d'entrées
    cout << "Ajout d'entrées:" << endl;
    if (tableau.ajouter("Alice", "12345")) {
        tests_reussis++;
    } else {
        tests_echoues++;
    }
    if (tableau.ajouter("Bob", "67890")) {
        tests_reussis++;
    } else {
        tests_echoues++;
    }
    if (tableau.ajouter("Charlie", "54321")) {
        tests_reussis++;
    } else {
        tests_echoues++;
    }
    if (tableau.ajouter("Diana", "98765")) {
        tests_reussis++;
    } else {
        tests_echoues++;
    }
    if (tableau.ajouter("Eve", "11223")) {
        tests_reussis++;
    } else {
        tests_echoues++;
    }
    tableau.printTab();

    // Tentative d'ajout d'une entrée supplémentaire pour tester la gestion du tableau plein
    cout << "\nTentative d'ajout d'une entrée supplémentaire:" << endl;
    if (!tableau.ajouter("Frank", "33333")) {
        cout << "Ajout échoué : le tableau est plein." << endl;
        tests_reussis++;  // Considérer cela comme un test réussi
    } else {
        tests_echoues++;
    }

    // Tester la suppression d'entrées
    cout << "\nSuppression d'entrées:" << endl;
    if (tableau.supprimer("Alice", "12345")) {
        cout << "Alice supprimée avec succès." << endl;
        tests_reussis++;
    } else {
        cout << "Échec de la suppression d'Alice." << endl;
        tests_echoues++;
    }
    tableau.printTab();

    // Supprimer une entrée par nom uniquement
    cout << "\nTentative de suppression d'une entrée par nom:" << endl;
    if (tableau.supprimer("Bob")) {
        cout << "Bob supprimé avec succès." << endl;
        tests_reussis++;
    } else {
        cout << "Échec de la suppression de Bob." << endl;
        tests_echoues++;
    }
    tableau.printTab();

    // Supprimer une entrée non existante
    cout << "\nTentative de suppression d'une entrée non existante:" << endl;
    if (!tableau.supprimer("Frank")) {
        cout << "Frank non trouvé dans le tableau." << endl;
        tests_reussis++;  // Considérer cela comme un test réussi
    } else {
        tests_echoues++;
    }

    // Afficher l'état final du tableau
    cout << "\nÉtat final du tableau:" << endl;
    tableau.printTab();

    // Ajout d'une nouvelle entrée après la suppression
    cout << "\nAjout d'une nouvelle entrée après la suppression:" << endl;
    if (tableau.ajouter("Frank", "33333")) { // Réussir à ajouter Frank
        tests_reussis++;
    } else {
        tests_echoues++;
    }
    tableau.printTab();  // Afficher le tableau après ajout

    // Résumé des résultats de test
    cout << "\nRésultats des tests:" << endl;
    cout << "Tests réussis : " << tests_reussis << endl;
    cout << "Tests échoués : " << tests_echoues << endl;

    return 0;  // Fin du programme
}
