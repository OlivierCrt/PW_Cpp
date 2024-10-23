#include <iostream>
#include <string>
#include "Agenda.h"

using namespace std;

Agenda::Agenda() : tableau(5) { // Initialise le tableau avec une taille par défaut de 5
}

Agenda::Agenda(Tableau tab) : tableau(tab) {
}

Agenda::Agenda(int taillep) : tableau(taillep) {
}

bool Agenda::ajouter(string nom, string numerophone) {
    return tableau.ajouter(nom, numerophone);  
}

bool Agenda::supprimer(string nom, string numerop) {
    return tableau.supprimer(nom, numerop);  
}

bool Agenda::supprimer(string nom) {
    return tableau.supprimer(nom);  
}

void Agenda::printAgenda() {
    cout << "Agenda:" << endl;
    tableau.printTab(); 
}
