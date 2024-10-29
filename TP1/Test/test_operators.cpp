#include <iostream>
#include "../Agenda.h"

using namespace std;

int main() {
    // Test constructors and `ajouter`
    Agenda agenda1;
    agenda1.ajouter("Alice", "12345");
    agenda1.ajouter("Bob", "67890");
    agenda1.ajouter("Charlie", "54321");
    std::cout << "Agenda1 after adding entries:" << std::endl;
    agenda1.printAgenda();

    // Test `operator+=` by adding entries from another agenda
    Agenda agenda2;
    agenda2.ajouter("Dave", "11223");
    agenda2.ajouter("Eve", "44556");
    agenda1 += agenda2;
    std::cout << "Agenda1 after concatenating Agenda2:" << std::endl;
    agenda1.printAgenda();

    // Test `operator+` to concatenate agendas into a new one
    Agenda agenda3 = agenda1 + agenda2;
    std::cout << "Agenda3 (result of Agenda1 + Agenda2):" << std::endl;
    agenda3.printAgenda();

    // Test `operator==` to compare agendas
    std::cout << "Are Agenda1 and Agenda3 equal? " << (agenda1 == agenda3 ? "Yes" : "No") << std::endl;

    // Test `operator<<` to output agenda entries
    std::cout << "Agenda3 contents using << operator:" << std::endl;
    std::cout << agenda3;

    // Test `operator/` to check if a name is in the agenda
    std::cout << "Is 'Alice' in Agenda1? " << (agenda1 / "Alice" ? "Yes" : "No") << std::endl;
    std::cout << "Is 'Frank' in Agenda1? " << (agenda1 / "Frank" ? "Yes" : "No") << std::endl;

    // Test `operator[]` to access an entry by name
    try {
        Entree& entree = agenda1["Alice"];
        std::cout << "Found entry for Alice: " << entree.getNom() << ", " << entree.getNum() << std::endl;
    } catch (const std::runtime_error& e) {
        std::cout << e.what() << std::endl;
    }

    // Test `operator-=` to remove all entries with a specific name
    agenda1 -= "Alice";
    std::cout << "Agenda1 after removing all entries for 'Alice':" << std::endl;
    agenda1.printAgenda();

    // Test `operator()` to display all names starting with a specific letter
    std::cout << "Entries in Agenda1 starting with 'C':" << std::endl;
    agenda1('C');

    // Test `operator=` to assign one agenda to another
    Agenda agenda4;
    agenda4 = agenda1;
    /*
    std::cout << "Agenda4 after assigning Agenda1 to it:" << std::endl;
    agenda4.printAgenda();*/

    return 0;
}