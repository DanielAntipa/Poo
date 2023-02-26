#include "pch.h"
#include <iostream>

using namespace System;
using namespace std;

struct Persoana
{
    char nume[20];
    int varsta;
};

public class Pers
{
public:
    char nume[20];
    int varsta;

};


int main()
{
    int nr_persoane;
    cout << "Introduceti nr. de persoane (1 - 5): ";
    cin >> nr_persoane;

    int i;
    Pers Persoane[5];

    if (nr_persoane <= 5) {

        for (i = 0; i < nr_persoane; i++) {
            cout << endl;
            cout << "Numele persoanei " << i+1 << " este: ";
            cin >> Persoane[i].nume;
            cout << "Varsta persoanei " << i+1 << " este: ";
            cin >> Persoane[i].varsta;
            cout << endl;
        }

        for (i = 0; i < nr_persoane; i++) {
            //Persoane.afiseaza();
            cout << "Numele persoanei " << i+1 << " este " << Persoane[i].nume << ", in varsta de " << Persoane[i].varsta << " ani." << endl << endl;
        }
    }
    else {
        cout << "Nr. de persoane selectat este prea mare. Alegeti intre 1 si 5.";
    }

    return 0;
}
