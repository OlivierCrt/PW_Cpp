#include <iostream>
#include<string>
#include "Tableau.h"

using namespace std;

Tableau::Tableau(){
    this->taille = 0;
    this->tableau = new Entree[this->taille];
    this->nb_element =0;

}

Tableau::Tableau(int taille_p,int nbe_p){
    this->taille = taille_p;
    this->tableau = new Entree[taille_p];
    this->nb_element = nbe_p ;

}

Tableau::~Tableau() {
    delete[] tableau; 
}

void Tableau::printTab(){
    cout<<"Taille "<<this->taille<<endl;
    
    for (int i=0;i<this->taille;i++){
        tableau[i].printEntree();
    }
    cout<<"Nbe: "<<this->nb_element <<endl;
}

bool Tableau::ajouter(string nom_p,string numero_tp){
    if(this->nb_element>=this->taille){
        cerr<<"Plien! "<<endl;
        return false;
    }

    this->tableau[nb_element].setNom(nom_p);
    this->tableau[nb_element].setNum(numero_tp);
    this->nb_element++;
    return true;
}
bool Tableau::supprimer(string nom_p,string numero_p){
    for (int i = 0; i < this->nb_element; i++) {
        if (tableau[i].getNom() == nom_p && tableau[i].getNum() == numero_p) {
            for (int j = i; j < this->nb_element - 1; j++) {
                tableau[j] = tableau[j + 1];
            }
            this->nb_element--;  
            return true;
        }
    }
    cerr << "Erreur: Entrée non trouvée." << endl;
    return false;
    
}

bool Tableau::supprimer(string nom_p){
    for (int i = 0; i < this->nb_element; i++) {

        if (tableau[i].getNom() == nom_p) {

            for (int j = i; j < this->nb_element - 1; j++) {
                tableau[j] = tableau[j + 1];
            }
            this->nb_element--;  
            return true;
        }
    }
    cerr << "Erreur: Entrée non trouvée." << endl;
    return false;
    
}







int Tableau::getNb(){
    return (this->nb_element);
}
int Tableau::getTaille(){
    return (this->taille);
}
