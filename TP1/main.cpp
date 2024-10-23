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

    return 0;  
}


/*Question 5
-1 Modifier attribut de agenda et mettre un Tableau*(pointeur)
-2 Maj des constructeur avec des new
-3 Ajout destructeur dans Agenda
-4 Maj du main()
*/
