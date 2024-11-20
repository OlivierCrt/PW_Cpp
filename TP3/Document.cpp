#include "Document.h"
#include <iostream>
using namespace std;

Document::Document()
    : title(*(new string("défaut"))), resume(new string("défaut")), autor("défaut") {
}

Document::Document(string& titre, string* res, string auteur)
    : title(titre), resume(res ? new string(*res) : new string("défaut")), autor(auteur) {
}

Document::Document(Document& other)
    : title(other.title), resume(new string(*(other.resume))), autor(other.autor) {
    
}


Document::~Document() {
    delete resume;  
}

void Document::afficher() const {
    cout << "Titre: " << title << endl;
    cout << "Résumé: " << *resume << endl;
    cout << "Auteur: " << autor << endl;
}

Document Document::clone() {
    return Document(*this); 
}

// Getters
string& Document::getTitre() const {
    return title;
}

string& Document::getResume() const {
    return *resume;
}

string Document::getAuteur() const {
    return autor;
}

// Setters
void Document::setResume(string& newResume) {
    *resume = newResume;
}

void Document::setAuteur(string newAuteur) {
    autor = newAuteur;
}


Document& Document::operator=(const Document& other) {
    if (this != &other) { 
        
        delete resume; 



        resume = new string(*other.resume);
        autor = other.autor;
    }
    return *this;
}
