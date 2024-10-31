#include <iostream>
#include <string>
#include "Agenda.h"

using namespace std;

Agenda::Agenda() : tab_ag(5) { 
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


Agenda& Agenda::operator+=(const Agenda& autre){
    int taille_this= this->tab_ag.getTaille();
    int nbe_this= this->tab_ag.getNb();
    int nbe_autre= autre.tab_ag.getNb();

    if (taille_this <(nbe_autre+nbe_this)){
        cerr<<"Erreur l'agenda cible n'as pas la taille nécessaire, l'action n est pas effectuée.\n Taille: "<<taille_this<<"\nNbe total: "<<(nbe_autre+nbe_this);
        return *this;
    }
    for (int index=0;index<nbe_autre;index++){
        string name_entree_i=autre.tab_ag.getEntrees()[index].getNom();
        string num_entree_i= autre.tab_ag.getEntrees()[index].getNum();
        this->tab_ag.ajouter(name_entree_i,num_entree_i);

    }
    return *this;






    


}


bool Agenda::operator==(const Agenda& autre){

    if ( this->tab_ag.getNb() != autre.tab_ag.getNb()){
        return false;
    }
    else if (this->tab_ag.getTaille() != autre.tab_ag.getTaille()){
        return false;
    }
    for (int i=0;i<this->tab_ag.getNb();i++) {

        string name_this= this->tab_ag.getEntrees()[i].getNom();
        string num_this= this->tab_ag.getEntrees()[i].getNum();

        string name_autre=autre.tab_ag.getEntrees()[i].getNom();
        string num_autre = autre.tab_ag.getEntrees()[i].getNum();

        if ((name_this!=name_autre) || (num_autre != num_this)){
            return false;
        }
        


    
    }
    return true;
}

ostream& operator<<(ostream& os, const Agenda& agenda) {
    os << "Agenda:" << endl;
    int nbEntries = agenda.tab_ag.getNb();  

    for (int i = 0; i < nbEntries; ++i) {
        string nom = agenda.tab_ag.getEntrees()[i].getNom();
        string num = agenda.tab_ag.getEntrees()[i].getNum();
        os << nom << ": " << num << endl;  
    }
    
    return os;
}


bool Agenda::operator/(const string& name){
    for (int i=0;i<this->tab_ag.getNb();i++){
        if (this->tab_ag.getEntrees()[i].getNom()==name){
            return true;

        }
    }
    return false;

}

Agenda& Agenda::operator=(const Agenda& autre) {
    if (this != &autre) {
        this->tab_ag = autre.tab_ag;  
    }
    return *this;
}




Entree& Agenda::operator[](const string& nom){
    for (int i=0;i<this->tab_ag.getNb();i++){
        if(this->tab_ag.getEntrees()[i].getNom()==nom){
            return (this->tab_ag.getEntrees()[i]);
        }
    }
    throw std::runtime_error("Entree non trouvée");
    
}


Agenda& Agenda::operator-=(const string& nom){
    for (int i=0;i<this->tab_ag.getNb();i++){
        if(this->tab_ag.getEntrees()[i].getNom()==nom){
            this->tab_ag.supprimer(nom);
        }
    }
    return *this;
    
}

void Agenda::operator()(const char& letter){
    for (int i=0;i<this->tab_ag.getNb();i++){
        if(this->tab_ag.getEntrees()[i].getNom()[0]==letter){
            cout<<this->tab_ag.getEntrees()[i].getNom()<<endl;
        }

    }
}