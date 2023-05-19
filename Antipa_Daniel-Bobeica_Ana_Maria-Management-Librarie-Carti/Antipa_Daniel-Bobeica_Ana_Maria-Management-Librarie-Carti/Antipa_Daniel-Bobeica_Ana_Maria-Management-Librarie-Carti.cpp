#include "pch.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <conio.h>
#include <Windows.h>

using namespace std;

//cream clasa Biblioteca
class Biblioteca {

    //initiem variabilele private (care vor fi folosite doar in aceasta clasa)
    //folosim pentru aceat proiect principiul de "Encapsulation" - si anume ca nu facem publice variabile clasei
    //si o sa le folosim doar prin functii (metode ale clasei), care vor fi publice
private:
    string NumeCarte;
    string Autor;
    string AnAparitie;
    bool Imprumutata;

    //initiem contorul de masurare a ratiei unei carti
    float Rating;
    int RatingContor;
    string IdCarte;

public:
    //Cream Constructor-ul pentru aceasta clasa
    //Constructorul trebuie sa aiba cateva regului de baza:
                // 1 - sa aiba aceeasi denumire ca si clasa;
                // 2 - sa nu aiba return type
                // 3 - va fi intotdeauna definit in zona Publica a clasei
    

    //cream un constructor default
    Biblioteca() {
        RatingContor = 5;
    };


    //Am creat un constructor specializat, dar nu functioneaza cu array de obiecte;
    /*Biblioteca (int idCarte, string numeCarte, string autor, string anAparitie, bool imprumutata) {
        IdCarte = idCarte;
        NumeCarte = numeCarte;
        Autor = autor;
        AnAparitie = anAparitie;
        Imprumutata = imprumutata;

 
    }*/


    //initiem functiile publice (care vor putea fi folosite in afara acestei clase)

    //functii publice de returnare valori din obiectele clasei
    string getIdCarte() { return IdCarte; };
    string getNumeCarte() { return NumeCarte; };
    string getAutor() { return Autor; };
    string getAnAparitie() { return AnAparitie; };
    bool getImprumutata() { return Imprumutata; };
    float getRating() { return Rating; };

    //functii publice de initializare valori in obiectele clasei
    void setIdCarte(string idCarte) { IdCarte = idCarte; }
    void setNumeCarte(string numeCarte) { NumeCarte = numeCarte; }
    void setAutor(string autor) { Autor = autor; }
    void setAnAparitie(string anAparitie) { AnAparitie = anAparitie; }
    void setImprumutata(bool imprumutata) { Imprumutata = imprumutata; }
    void setRating(float rating) { Rating = rating; }


    //facem o functie friend pentru afisarea cartilor
    friend void afisareCarte(int contor);


    //initiem Destructor-ul pentru aceasta clasa
    //nu este necesar un Destructor definit daca nu avem pointeri in clasa respectiva
    //in momentul in care folosim pointeri, 
    //se foloseste un destructor pentru a elibera zona de memorie folosita
    ~Biblioteca() {
        //delete Rating;
        //Rating = nullptr;
    }
};


//initializam functiile cu contorul ca parametru
void adaugaCarte(int contor);
void afisareCarte(int contor);
void exit();

//contorul pentru tabloul (array) Biblioteca
int contor = 0;

//initializam functia de incrementare contor
void increment(int numar) {
    numar++;
    contor = numar;
}


//initializam tabloul pentru clasa Biblioteca
Biblioteca carte[5];


//corpul principal al aplicatiei (functia main)
int main()
{

    //setam culoarea fundalului si textului din consola
    //system("Color 0F");

   
    //afisam titlul aplicatiei
    cout << endl;
    cout << setw(35) << right << "    Management biblioteca   " << endl;
    cout << setw(35) << right << "============================" << endl;

    //afisam meniul
    while (true) {
        cout << endl << endl;
        cout << "Apasa [1] pentru a adauga informatii despre o carte. \n";
        cout << "Apasa [2] pentru a afisa informatiile despre carti. \n";
        cout << "Apasa [3] pentru a iesi din program. \n" << endl;

        //setam o variaba integer pentru a citi optiunea utilizatorului
        string tasta;
        cout << endl;
        cout << "Introduce-ti optiunea dumneavoastra: ";
        getline(cin,tasta);

        if (tasta == "1") {
            adaugaCarte(contor);
        }
        else if (tasta == "2") {
            afisareCarte(contor);
        }
        else if (tasta == "3") {
            exit();
        }
        else {
            main();
        }
        
    }

 
    return 0;
}



//setam o functie care adauga informatii pentru o carte
void adaugaCarte(int contor) {

    string IdCarte;
    string NumeCarte, Autor, AnAparitie;
    bool Imprumutata;
    float Rating;
    
    cout << "ADAUGATI O CARTE\n\n";

    if(contor < 5) {

        cout << endl << "Introduceti id-ul cartii: ";
        getline(cin, IdCarte);
        
        cout << "Introduceti numele cartii: ";
        getline(cin, NumeCarte);

        cout << "Introduceti autorul cartii: ";
        getline(cin, Autor);

        cout << "Introduceti anul aparitiei cartii: ";
        getline(cin, AnAparitie);

        cout << "Introduceti starea imprumutului cartii (va rugam sa introduce-ti 1 pentru umprumatata si 0 pentru neimprumutata): ";
        cin >> Imprumutata;

        cout << "Introduceti rating-ul cartii (de la 1 la 5 - 1 fiind cel mai slab rating si 5 cel mai bun): ";
        cin >> Rating;

        carte[contor].setIdCarte(IdCarte);
        carte[contor].setNumeCarte(NumeCarte);
        carte[contor].setAutor(Autor);
        carte[contor].setAnAparitie(AnAparitie);
        carte[contor].setImprumutata(Imprumutata);
        carte[contor].setRating(Rating);

        //incrementam contorul
        increment(contor);
    }
    else {
        cout << "ATI ATINS NUMARUL MAXIM DE CARTI!\n\nApasati orice tasta pentru a continua . . .";
        _getch();
        main();
    }
}


//Cream o functie pentru a afisa datele cartii
void afisareCarte(int contor) {

    //verificam daca sunt carti in baza de date
    if (contor == 0) {
        cout << endl << endl;
        cout << "NU EXISTA CARTI IN BAZA DE DATE. VA RUGAM SA INTRODUCETI DATELE CARTILOR\n\n";
    }
    else {

        //verificam daca cartea este imprumutata sau nu, ca sa afisam corect aceasta informatie;
        cout << endl << endl;
        cout << "AFISAM TOATE CARTILE\n\n";

        for (int i = 0; i < contor; i++) {

            string stareImprumut;

            if (carte[i].getImprumutata()) {
                stareImprumut = "Cartea este imprumutata";
            }
            else {
                stareImprumut = "Se poate imprumuta";
            }

            cout << setw(15) << left << "Id carte: " << carte[i].getIdCarte() << endl;
            cout << setw(15) << left << "Nume carte: " << carte[i].getNumeCarte() << endl;
            cout << setw(15) << left << "Autor: " << carte[i].getAutor() << endl;
            cout << setw(15) << left << "An aparitie: " << carte[i].getAnAparitie() << endl;
            cout << setw(15) << left << "Imprumutata: " << stareImprumut << endl;
            cout << setw(15) << left << "Rating carte: " << carte[i].getRating();
            cout << endl << endl;
        }
    }
}


//functie de iesire din aplicatie
void exit() {
    _exit(1);
}