#include <iostream>
#include <string>
using namespace std;

class Document{
    private:
        string& title;
        string* resume;
        string autor ;
    public: 
    Document();
    Document(string& titre, string* resume,string auteur);
    Document(Document& other);
    ~Document();
    void afficher() const;
    Document clone() ;

    // Getters
    string& getTitre() const;
    string& getResume() const;
    string getAuteur() const;

    // Setters 
    void setResume(string& newResume);
    void setAuteur(string newAuteur);

};