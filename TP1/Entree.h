#include <iostream>
#include <string>
using namespace std;

class Entree{

    private:
        string nom ;
        string numero;
    public :
        Entree();
        Entree(string name_p,string numero_p);
        void printEntree();
        void setNom(string nom);
        void setNum(string num);
        string getNom();
        string getNum();
         

};