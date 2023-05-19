#include "pch.h"
#include <iostream>
#include <string>



class CarteDigitala {
private:
    std::string titlu;
    std::string autor;
    std::string dimensiune;

public:
    CarteDigitala(const std::string& titlu, const std::string& autor, const std::string& dimensiune)
        : titlu(titlu), autor(autor), dimensiune(dimensiune) {}

    // Suprascrierea operatorului de atribuire (=)
    CarteDigitala& operator=(const CarteDigitala& other) {
        if (this != &other) { // Verificăm dacă nu atribuim obiectul pe sine
            titlu = other.titlu;
            autor = other.autor;
            dimensiune = other.dimensiune;
        }
        return *this;
    }

    // Funcție friend pentru afișarea informațiilor cărții digitale
    friend std::ostream& operator<<(std::ostream& os, const CarteDigitala& carte) {
        os << "Titlu: " << carte.titlu << "\n";
        os << "Autor: " << carte.autor << "\n";
        os << "Dimensiune: " << carte.dimensiune << "\n";
        return os;
    }
};

int main() {
    // Creăm două obiecte de tip CarteDigitala
    CarteDigitala carte1("Moby Dick", "Herman Melville", "2.5 MB");
    CarteDigitala carte2("Anna Karenina", "Leo Tolstoy", "3.8 MB");

    // Atribuim conținutul cărții 2 către cărții 1 utilizând operatorul de atribuire (=)
    carte1 = carte2;

    // Afișăm informațiile cărții 1
    std::cout << "Carte 1:\n";
    std::cout << carte1;

    return 0;
}