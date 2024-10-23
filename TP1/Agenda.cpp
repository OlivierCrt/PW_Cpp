#include <iostream>
#include <string>
#include "Agenda.h"

using namespace std;

Agenda::Agenda() : tab_ag(5) { // Initialise le tableau avec une taille par défaut de 5
}

Agenda::Agenda(Tableau tab) : tab_ag(tab) {
}

Agenda::Agenda(int taillep) : tab_ag(taillep) {
}

bool Agenda::ajouter(string nom, string numerophone) {
    return tab_ag.ajouter(nom, numerophone);  
}

bool Agenda::supprimer(string nom, string numerop) {
    return tab_ag.supprimer(nom, numerop);  
}

bool Agenda::supprimer(string nom) {
    return tab_ag.supprimer(nom);  
}

void Agenda::printAgenda() {
    cout << "Agenda:" << endl;
    tab_ag.printTab(); 
}

Agenda Agenda::operator+(const Agenda& autre_agenda){
    int taille_current = this->tab_ag.getTaille();
    int taille_autre = autre_agenda.tab_ag.getTaille();

    int nbe_current = this->tab_ag.getNb();
    int nbe_autre = autre_agenda.tab_ag.getNb();

    Agenda res=Agenda(taille_autre+taille_current);

    for (int i=0;i<nbe_current;i++){
        string nom=this->tab_ag.getEntrees()[i].getNom();
        string num=this->tab_ag.getEntrees()[i].getNum();
        res.tab_ag.ajouter(nom,num);
    }
    for (int j=0;j<nbe_autre;j++){
        string nom_autre=autre_agenda.tab_ag.getEntrees()[j].getNom();
        
        string num_autre=autre_agenda.tab_ag.getEntrees()[j].getNum();
        res.tab_ag.ajouter(nom_autre,num_autre);
    }
    return res;
}

