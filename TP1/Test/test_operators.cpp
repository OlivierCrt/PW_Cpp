#include <iostream>
#include "../Agenda.h"

using namespace std;

void testAjouterEtAfficher(Agenda& agenda) {
    cout << "\n=== Ajout d'entrées ===" << endl;
    agenda.ajouter("Alice", "123456789");
    agenda.ajouter("Bob", "987654321");
    agenda.ajouter("Charlie", "555555555");
    
    cout << "État de l'agenda après ajout:" << endl;
    agenda.printAgenda();
}

void testOperatorPlus(Agenda& agenda1, Agenda& agenda2) {
    cout << "\n=== Test de l'opérateur + (concaténation d'agendas) ===" << endl;
    
    Agenda agenda_concatene = agenda1 + agenda2;
    
    cout << "État de l'agenda 1 :" << endl;
    agenda1.printAgenda();
    
    cout << "État de l'agenda 2:" << endl;
    agenda2.printAgenda();
    
    cout << "État de l'agenda concaténé:" << endl;
    agenda_concatene.printAgenda();
}

void testOperatorPlusEquals(Agenda& agenda1, Agenda& agenda2) {
    cout << "\n=== Test de l'opérateur += (concaténation d'agendas) ===" << endl;
    
    agenda1 += agenda2;
    
    cout << "État de l'agenda 1 après ajout d'agenda 2 avec +=:" << endl;
    agenda1.printAgenda();
}

void testOperatorEquals(Agenda& agenda1, Agenda& agenda2) {
    cout << "\n=== Test de l'opérateur == (comparaison d'agendas) ===" << endl;
    
    if (agenda1 == agenda2) {
        cout << "Les agendas sont égaux." << endl;
    } else {
        cout << "Les agendas ne sont pas égaux." << endl;
    }
}

int main() {
    Agenda agenda1(10); // Crée un premier agenda avec une capacité de 10
    Agenda agenda2(10); // Crée un deuxième agenda avec une capacité de 10

    // Test des ajouts pour agenda1
    testAjouterEtAfficher(agenda1);
    
    // Ajout d'entrées à agenda2
    agenda2.ajouter("David", "111222333");
    agenda2.ajouter("Eve", "333333333");

    cout << "État de l'agenda 2 après ajout:" << endl;
    agenda2.printAgenda();

    // Test de l'opérateur +
    testOperatorPlus(agenda1, agenda2);

    // Test de l'opérateur +=
    testOperatorPlusEquals(agenda1, agenda2);

    // Test de l'opérateur ==
    testOperatorEquals(agenda1, agenda2);

    // Ajout d'une entrée à agenda2 pour vérifier l'inégalité
    agenda2.ajouter("Frank", "444444444");
    cout << "Ajout de Frank à l'agenda 2." << endl;

    // Test de l'opérateur == à nouveau
    testOperatorEquals(agenda1, agenda2);

    cout << "\n=== Test complet des opérateurs de l'agenda terminé ===" << endl;

    return 0;
}
