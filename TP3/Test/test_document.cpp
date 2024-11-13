#include "../Document.h"



//mes fichier de test sont en partie fait avec l'aide de l'IA ça me permets de gagner un peu de temps et de faire tous les uses cases
int main() {
    // Test du constructeur par défaut
    Document doc1;
    cout << "Document 1 (par défaut):" << endl;
    doc1.afficher();  // Affiche les valeurs par défaut
    cout << endl;

    // Test du constructeur avec paramètres
    string titre = "Le Grand Livre";
    string resume = "Un résumé fascinant du grand livre.";
    string auteur = "John Doe";
    
    Document doc2(titre, &resume, auteur);
    cout << "Document 2 (avec paramètres):" << endl;
    doc2.afficher();  // Affiche les valeurs fournies
    cout << endl;

    // Test du constructeur de copie
    Document doc3 = doc2;  // Création d'une copie de doc2
    cout << "Document 3 (copie de doc2):" << endl;
    doc3.afficher();  // Affiche les mêmes valeurs que doc2
    cout << endl;

    // Test de la méthode clone
    Document doc4 = doc2.clone();  // Clone doc2
    cout << "Document 4 (clone de doc2):" << endl;
    doc4.afficher();  // Affiche les mêmes valeurs que doc2
    cout << endl;

    // Test des setters
    string newResume = "Un nouveau résumé pour le grand livre.";
    string newAuteur = "Jane Doe";
    doc4.setResume(newResume);
    doc4.setAuteur(newAuteur);

    cout << "Document 4 après modifications (setter):" << endl;
    doc4.afficher();  // Affiche le document modifié
    cout << endl;

    // Test des getters
    cout << "Titre de doc2: " << doc2.getTitre() << endl;
    cout << "Résumé de doc2: " << doc2.getResume() << endl;
    cout << "Auteur de doc2: " << doc2.getAuteur() << endl;

    return 0;
}