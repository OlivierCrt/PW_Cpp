#include <iostream>
#include<string>
#include "Entree.h"
using namespace std;


class Tableau{
    private :
        int taille ;
        Entree* tableau ;
        int nb_element;
    public:
        Tableau();
        Tableau(int taille_p,int nb_p);
        void printTab();
        bool ajouter(string nom, string numero);
        bool supprimer(string nom,string numero);
        bool supprimer(string nom);

        ~Tableau();
        int getNb();
        int getTaille();

};