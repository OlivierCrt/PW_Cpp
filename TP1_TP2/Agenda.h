#include <iostream>
#include <string>
#include "Tableau.h"

class Agenda{
    private :
        Tableau tab_ag;
    public:
        Agenda();
        Agenda(Tableau tableau_p);
        Agenda(int taillep);
        bool ajouter(string nom, string numerophone);
        bool supprimer(string nom, string numerop);
        bool supprimer(string nom);
        void printAgenda();


        Agenda operator+(const Agenda& autre);
        Agenda& operator+=(const Agenda& autre);


        bool operator==(const Agenda& autre);   
        friend ostream& operator<<(ostream& os, const Agenda& agenda);
        bool operator/(const string& nom);
        Agenda& operator=(const Agenda& autre);
        Entree& operator[](const string& nom);
        Agenda& operator-=(const string& nom);
        void operator()(const char& letter);


};