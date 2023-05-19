#include "pch.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <Windows.h>

using namespace std;

//cream structura pentru clasa Biblioteca
//struct biblioteca {
//    string NumeCarte;
//    string Autor;
//    int AnAparitie;
//    bool Imprumutata;
//    int IdCarte;
//    float Rating;
//    int RatingContor;
//}carte[1000];
//int cont;

//cream clasa biblioteca
class Biblioteca {

//initiem variabilele private (care vor fi folosite doar in aceasta clasa)
//folosim pentru aceat proiect principiul de "Encapsulation" - si anume ca nu facem publice variabile clasei
//si o sa le folosim doar prin functii (metode ale clasei), care vor fi publice
private:
    string NumeCarte;
    string Autor;
    int AnAparitie;
    bool Imprumutata;

//initiem functiile publice (care vor putea fi folosite in afara acestei clase)
public:
    //initiem contorul de masurare a ratiei unei carti
    float* Rating;
    int RatingContor;
    int IdCarte;

  
    //Cream Constructor-ul pentru aceasta clasa
    //Constructorul trebuie sa aiba cateva regului de baza:
                // 1 - sa aiba aceeasi denumire ca si clasa;
                // 2 - sa nu aiba return type
                // 3 - va fi intotdeauna definit in zona Publica a clasei
 /*   Biblioteca (int idCarte, string numeCarte, string autor, int anAparitie, bool imprumutata) {
        IdCarte = idCarte;
        NumeCarte = numeCarte;
        Autor = autor;
        AnAparitie = anAparitie;
        Imprumutata = imprumutata;
        
        RatingContor = 5;
        Rating = new float[RatingContor];
        Rating[0] = 5;
        Rating[1] = 4;
        Rating[2] = 3;
        Rating[3] = 2;
        Rating[4] = 1;
    }*/


    //setam si un constructor default
    Biblioteca() {
        IdCarte = 0;
        NumeCarte = "";
        Autor = "";
        AnAparitie = 0;
        Imprumutata = false;

        RatingContor = 5;
        Rating = new float[RatingContor];
        Rating[0] = 5;
        Rating[1] = 4;
        Rating[2] = 3;
        Rating[3] = 2;
        Rating[4] = 1;
    }

    //friend void AdaugaCarte(Biblioteca);


    //setam o functie de a adauga informatii pentru o carte
    void AdaugaCarte() {

        cout << endl << "Introduceti id-ul cartii: ";
        cin >> IdCarte;

        cout << "Introduceti numele cartii: ";
        cin >> NumeCarte;

        cout << "Introduceti autorul cartii: ";
        cin >> Autor;

        cout << "Introduceti anul aparitiei cartii: ";
        cin >> AnAparitie;

        cout << "Introduceti starea imprumutului cartii (va rugam sa introduce-ti 1 pentru umprumatata si 0 pentru neimprumutata: ";
        cin >> Imprumutata;

        cout << "Introduceti rating-ul cartii (de la 1 la 5 - 1 fiind cel mai slab rating si 5 cel mai bun): ";
        cin >> *Rating;

    }

    //Cream o Metoda pentru a afisa datele cartii
    void afisareDateCarte() {
        //verificam daca cartea este imprumutata sau nu, ca sa afisam corect aceasta informatie;
        string stareImprumut;
        if (Imprumutata) {
            stareImprumut = "Cartea este imprumutata";
        }
        else {
            stareImprumut = "Se poate imprumuta";
        }

        cout << setw(15) << left << "Id carte: " << IdCarte << endl;
        cout << setw(15) << left << "Nume carte: " << NumeCarte << endl;
        cout << setw(15) << left << "Autor: " << Autor << endl;
        cout << setw(15) << left << "An aparitie: " << AnAparitie << endl;
        cout << setw(15) << left << "Imprumutata: " << stareImprumut << endl;
        cout << setw(15) << left << "Rating carte: " << *Rating;
        cout << endl << endl;
    }
    

    //initiem Destructor-ul pentru aceasta clasa
    //nu este necesar un Destructor definit daca nu avem pointeri in clasa respectiva
    //in momentul in care folosim pointeri, 
    //se foloseste un destructor pentru a elibera zona de memorie folosita
    ~Biblioteca() {
        delete[] Rating;
        Rating = nullptr;
    }
};





int main()
{

    //setam culoarea fundalului si textului din consola
    //system("Color 0F");


    //cream cele trei obiecte de tip carte
   /* Biblioteca carte1(1, "Pe aripile vantului", "Margaret Mitchell", 1936, true);
    Biblioteca carte2(2, "Cristine", "Stephen King", 1983, false);
    Biblioteca carte3(3, "Turnul intunecat", "Stephen King", 1982, true);*/

    Biblioteca carte;

    //setam rating-ul pentru carti
    /*carte1.RatingContor = 2;
    carte1.RatingContor = 2;
    carte1.RatingContor = 3;*/


    //afisam datele despre carti
    cout << setw(35) << right << "    Management biblioteca   " << endl;
    cout << setw(35) << right << "============================" << endl;

    //afisam meniul
    while (true) {
        cout << endl << endl;
        cout << "Apasa 1 pentru a adauga informatii despre o carte: \n";
        cout << "Apasa 2 pentru a afisa informatiile despre carti: \n";
        cout << "Apasa 3 pentru a iesi din program. \n" << endl;

        //setam o variaba integer pentru a citi optiunea utilizatorului
        int tasta;
        cout << "Introduce-ti optiunea dumneavoastra: ";
        cin >> tasta;

        switch (tasta) {
        case 1:
            carte.AdaugaCarte();
            break;

        case 2:
            carte.afisareDateCarte();
            break;

        case 3:
            exit(0);
            break;

        defaul:
            cout << "Optiune invalida !";
        }
    }

    //folosim Metoda afisareDateCarte() ca sa afisam datele cartilor
    /*carte1.afisareDateCarte();
    carte2.afisareDateCarte();
    carte3.afisareDateCarte();*/



    return 0;
}
