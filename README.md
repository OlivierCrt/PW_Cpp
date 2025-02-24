# TP1 & TP2: Agenda Management

## Methods and Operators

### Class `Entree`
- **Constructor:** Initializes name and phone number.
- **Display:** Outputs the entry details.

### Class `Tableau`
- **Constructor/Destructor:** Manages dynamic array of entries.
- **Add Entry:** Inserts a new entry by name and phone number.
- **Remove Entry:** Deletes entries by name or name and phone number.
- **Display:** Outputs all entries in the table.

### Class `Agenda`
- **Constructor/Destructor:** Manages a `Tableau` object.
- **Concatenate:** Combines two agendas into a new one.
- **Add/Remove Entry:** Adds or removes entries by name or name and phone number.
- **Display:** Outputs all entries in the agenda.

### Operators (TP2)
- **<<:** Displays the agenda.
- **+=:** Adds an entry or concatenates agendas.
- **=:** Assigns one agenda to another.
- **+:** Returns a new concatenated agenda.
- **[]:** Returns the first occurrence of a name.
- **-=:** Removes all occurrences of a name.
- **==:** Compares two agendas.
- **/:** Checks if a name exists in the agenda.
- **():** Displays names starting with a given letter.

[Subject PDF](https://github.com/OlivierCrt/PW_Cpp/tree/main/TP1_TP2/Pdf)

---

# TP3: Inheritance and Polymorphism in a Library System

## Methods

### Class `Document`
- **Constructor/Destructor:** Manages title, summary, and author.
- **Clone:** Returns a copy of the document.
- **Display:** Outputs document details.
- **calculerCoût (pure virtual):** Abstract method for cost calculation.

### Class `Livre` (inherits from `Document`)
- **Constructor/Destructor:** Adds publisher and publication year.
- **Override Display/Clone:** Custom implementations for books.
- **calculerCoût:** Implements cost calculation for books.

### Class `Article` (inherits from `Document`)
- **Constructor/Destructor:** Adds journal title, publisher, and edition number.
- **Override Display/Clone:** Custom implementations for articles.
- **calculerCoût:** Implements cost calculation for articles.

### Class `Bibliothèque`
- **Add Document:** Inserts a document into the library.
- **Search Document:** Finds a document by title.
- **Display:** Outputs all documents in the library.

[Subject PDF](https://github.com/OlivierCrt/PW_Cpp/tree/main/TP3/pdf)

---

# TP4: Virtuality and Polymorphism

## Methods

### Class `Bibliothèque`
- **Add Document:** Stores polymorphic `Document` objects.
- **Search Document:** Returns the first document matching a title.
- **Display:** Outputs all documents using dynamic binding.

### Class `Document`
- **calculerCoût (pure virtual):** Abstract method for cost calculation.

### Derived Classes (`Livre` and `Article`)
- **calculerCoût:** Implements specific cost calculations.

[Subject PDF](https://github.com/OlivierCrt/PW_Cpp/tree/main/TP4/pdf)
