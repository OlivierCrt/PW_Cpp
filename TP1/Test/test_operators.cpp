#include <iostream>
#include "../Agenda.h"


int main() {
    // Création de deux agendas
    Agenda agenda1(10);
    Agenda agenda2(10);

    // Ajout d'entrées dans le premier agenda
    agenda1.ajouter("Didier", "123");
    agenda1.ajouter("Simon", "456");
    agenda1.ajouter("Alice", "789");

    // Afficher le premier agenda
    cout << "Contenu de l'agenda 1:" << endl;
    agenda1.printAgenda();

    // Ajout d'entrées dans le deuxième agenda
    agenda2.ajouter("Bob", "321");
    agenda2.ajouter("Charlie", "654");

    // Afficher le deuxième agenda
    cout << "Contenu de l'agenda 2:" << endl;
    agenda2.printAgenda();

    // Utiliser l'opérateur +
    Agenda agenda3 = agenda1 + agenda2;
    cout << "Contenu de l'agenda 3 (agenda1 + agenda2):" << endl;
    agenda3.printAgenda();

    // Utiliser l'opérateur +=
    agenda1 += agenda2;
    cout << "Contenu de l'agenda 1 après ajout d'agenda 2 avec +=:" << endl;
    agenda1.printAgenda();

    // Tester l'égalité
    if (agenda1 == agenda3) {
        cout << "agenda1 est égal à agenda3." << endl;
    } else {
        cout << "agenda1 n'est pas égal à agenda3." << endl;
    }

    // Supprimer une entrée
    agenda1 -= "Didier";
    cout << "Contenu de l'agenda 1 après suppression de Didier:" << endl;
    agenda1.printAgenda();

    // Vérifier si un nom est présent
    string nom = "Simon";
    if (agenda1 / nom) {
        cout << nom << " est dans l'agenda." << endl;
    } else {
        cout << nom << " n'est pas dans l'agenda." << endl;
    }

    // Tester l'accès par l'opérateur []
    try {
        Entree& entree = agenda1["Simon"];
        cout << "Numéro de Simon: " << entree.getNum() << endl;
    } catch (const runtime_error& e) {
        cout << e.what() << endl;
    }

    return 0;
}