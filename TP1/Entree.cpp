#include <iostream>
#include <string>
#include "Entree.h"
using namespace std;
Entree::Entree(){
    this->nom ="";
    this->numero ="";

}
Entree::Entree(string name_p,string numero_p){
    this->nom=name_p ;
    this->numero = numero_p;
}
void Entree::printEntree(){
    cout<<"nom: "<<this->nom<<endl;
    cout<<"numero: "<<this->numero<<endl;  


}
void Entree::setNom(string nom_p){
    this->nom=nom_p;
}
void Entree::setNum(string num_p){
    this->numero = num_p;
}
string Entree::getNom(){
    return (this->nom);
}
string Entree::getNum(){
    return (this->numero);
}
