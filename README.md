
## PW1 and PW2 - Agenda Management System

### Classes

#### 1. `Entree` Class

**Variables:**
- `nom` (string): The name of the entry.
- `numero` (string): The associated phone number.

**Methods:**
- `Entree()`: Default constructor.
- `Entree(string name_p, string numero_p)`: Constructor with parameters.
- `void printEntree()`: Displays entry details.
- `void setNom(string nom)`: Sets the name.
- `void setNum(string num)`: Sets the phone number.
- `string getNom()`: Gets the name.
- `string getNum()`: Gets the phone number.

#### 2. `Tableau` Class

**Variables:**
- `int taille_totale`: Total size of the array.
- `Entree* entrees`: Pointer to an array of entries.
- `int nbelem`: Number of elements in the array.

**Methods:**
- Constructor.
- Destructor.
- Copy constructor.
- `void afficher()`: Displays array content.
- `void ajouter(string nom, string numero)`: Adds an entry.
- `void supprimer(string nom, string numero)`: Removes an entry by name and number.
- `void supprimer(string nom)`: Removes all entries with the given name.
- Accessor methods for `nbelem` and `taille_totale`.

#### 3. `Agenda` Class

**Variables:**
- `Tableau tab_ag`: An array of entries.

**Methods:**
- `Agenda()`: Default constructor.
- `Agenda(Tableau tableau_p)`: Constructor with `Tableau`.
- `Agenda(int taillep)`: Constructor with size parameter.
- `bool ajouter(string nom, string numerophone)`: Adds an entry.
- `bool supprimer(string nom, string numerop)`: Removes an entry by name and number.
- `bool supprimer(string nom)`: Removes all entries with the given name.
- `void printAgenda()`: Displays agenda content.

### Operators

- `<<`: Displays an agenda.
- `+=`: Adds a name and phone number.
- `=`: Assigns one agenda to another.
- `+`: Returns a new agenda formed by concatenating two agendas.
- `+=`: Concatenates one agenda to another.
- `[]`: Returns the first occurrence of a name.
- `-=`: Removes all occurrences of a name.
- `==`: Compares two agendas.
- `/`: Tests if a name is in the agenda.
- `()`: Displays all names starting with a given letter.

### Testing

The `test_methods.cpp` and `test_operators.cpp` files contains tests to validate the functionality of the classes. Run this file to see how the classes interact and to verify their functionalities.


## TP3

*(No content available)*

## TP4

*(No content available)*

## Execution
Execute the selected test already compiled. For more I will probably add a MakeFile.

