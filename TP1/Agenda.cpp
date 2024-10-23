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

Agenda Agenda::operator+(const Agenda& autre_agenda){
    int taille_current = this->tableau.getTaille();
    int taille_autre = autre_agenda.tableau.getTaille();

    int nbe_current = this->tableau.getNb();
    int nbe_autre = autre_agenda.tableau.getNb();

    Agenda res=Agenda(taille_autre+taille_current);

    for (int i=0;i<nbe_current;i++){
        
    }



   

}
