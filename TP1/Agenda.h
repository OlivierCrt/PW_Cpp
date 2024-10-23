#include <iostream>
#include <string>
#include "Tableau.h"

class Agenda{
    private :
        Tableau tableau;
    public:
        Agenda();
        Agenda(Tableau tableau_p);
        Agenda(int taillep);
        bool ajouter(string nom, string numerophone);
        bool supprimer(string nom, string numerop);
        bool supprimer(string nom);
        void printAgenda();

        Agenda operator+(const Agenda& autre);

};