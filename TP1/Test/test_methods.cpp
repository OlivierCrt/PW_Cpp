#include <iostream>
#include "../Agenda.h"

using namespace std;

void testAjouterEtAfficher(Agenda& agenda) {
    cout << "\n=== Test d'ajout d'entrées ===" << endl;
    agenda.ajouter("Alice", "123456789");
    agenda.ajouter("Bob", "987654321");
    agenda.ajouter("Charlie", "555555555");
    
    cout << "État de l'agenda après ajout:" << endl;
    agenda.printAgenda();
}

void testSupprimer(Agenda& agenda) {
    cout << "\n=== Test de suppression ===" << endl;
    if (agenda.supprimer("Alice", "123456789")) {
        cout << "Alice a été supprimée avec succès." << endl;
    } else {
        cout << "Échec de la suppression d'Alice." << endl;
    }

    cout << "État de l'agenda après suppression:" << endl;
    agenda.printAgenda();
    
    // Suppression d'une entrée non existante
    if (!agenda.supprimer("Frank", "444444444")) {
        cout << "Frank non trouvé dans l'agenda." << endl;
    }
}

void testSupprimerParNom(Agenda& agenda) {
    cout << "\n=== Test de suppression par nom ===" << endl;
    agenda.ajouter("Diana", "222222222");
    agenda.ajouter("Eve", "333333333");
    
    cout << "État de l'agenda avant suppression de Diana:" << endl;
    agenda.printAgenda();
    
    if (agenda.supprimer("Diana")) {
        cout << "Diana a été supprimée avec succès." << endl;
    } else {
        cout << "Échec de la suppression de Diana." << endl;
    }
    
    cout << "État de l'agenda après suppression de Diana:" << endl;
    agenda.printAgenda();
}

int main() {
    Agenda agenda(10); // Crée un agenda avec une capacité de 10

    // Test des ajouts et affichage
    testAjouterEtAfficher(agenda);

    // Test de suppression avec numéro
    testSupprimer(agenda);

    // Test de suppression par nom
    testSupprimerParNom(agenda);

    cout << "\n=== Test complet de l'agenda terminé ===" << endl;

    return 0;
}
