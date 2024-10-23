#include <iostream>
#include "Agenda.h"

using namespace std;

int main() {
    Agenda agenda(5);

    cout << "État initial de l'agenda:" << endl;
    agenda.printAgenda();

    cout << "\nAjout d'entrées à l'agenda:" << endl;
    agenda.ajouter("Alice", "123456789");
    agenda.ajouter("Bob", "987654321");
    agenda.ajouter("Charlie", "555555555");
    agenda.ajouter("Diana", "222222222");
    agenda.ajouter("Eve", "333333333");

    if (!agenda.ajouter("Frank", "444444444")) {
        cout << "Ajout échoué : le tableau est plein." << endl;
    }

    cout << "\nÉtat de l'agenda après ajout d'entrées:" << endl;
    agenda.printAgenda();

    cout << "\nSuppression d'Alice:" << endl;
    if (agenda.supprimer("Alice", "123456789")) {
        cout << "Alice a été supprimée avec succès." << endl;
    } else {
        cout << "Échec de la suppression d'Alice." << endl;
    }

    cout << "\nÉtat de l'agenda après la suppression:" << endl;
    agenda.printAgenda();

    cout << "\nTentative de suppression d'une entrée non existante (Frank):" << endl;
    if (!agenda.supprimer("Frank", "444444444")) {
        cout << "Frank non trouvé dans l'agenda." << endl;
    }

    cout << "\nSuppression de Bob:" << endl;
    if (agenda.supprimer("Bob")) {
        cout << "Bob a été supprimé avec succès." << endl;
    } else {
        cout << "Échec de la suppression de Bob." << endl;
    }

    cout << "\nÉtat final de l'agenda:" << endl;
    agenda.printAgenda();

    // Test de l'opérateur +
    cout << "\nTest de l'opérateur + (concaténation d'agendas):" << endl;

    Agenda autre_agenda(3);
    autre_agenda.ajouter("Frank", "444444444");
    autre_agenda.ajouter("Grace", "555555555");
    autre_agenda.ajouter("Henry", "666666666");

    cout << "\nÉtat de l'autre agenda avant concaténation:" << endl;
    autre_agenda.printAgenda();

    Agenda agenda_concatene = agenda + autre_agenda;

    cout << "\nÉtat de l'agenda après concaténation avec l'autre agenda:" << endl;
    agenda_concatene.printAgenda();

    return 0;
}
