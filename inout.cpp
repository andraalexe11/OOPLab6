//
// Created by Alexe Andra on 04.04.2023.
//
#include "dreptunghi.h"
#include "inout.h"
#include <iostream>
#include <vector>
using namespace std;
void readarray(vector<Dreptunghi>& xd, int& n){
    cout << "Enter the length: ";
    cin >> n;
    xd.reserve(n);
    int x, y;
    for(int i = 0; i < n; i++){
        cout << "Dreptunghi nou" << endl;
        cout << " Dati coordonatele coltului din stanga sus: " << endl << "X: ";
        cin >> x;
        cout << endl << "Y: ";
        cin >> y;
        Point p1(x, y);
//        new_array->setCSS(p1);
        cout << endl << " Dati coordonatele coltului din dreapta jos: " << endl << "X: ";
        cin >> x;
        cout << endl << "Y: ";
        cin >> y;
        Point p2(x, y);
        Dreptunghi d(p1, p2);
//        new_array->setCDJ(p2);
        xd.push_back(d);
        cout << endl << "Dreptunghi adaugat!" << endl;
    }


}

void writearray(vector<Dreptunghi> xd, int n){
    for(int i  = 0; i < n; i++){
        cout << " Dreptunghiul " << i + 1 << endl;
        cout << "Coltul din stanga sus are coordonatele: " << endl << "X: ";
        cout << xd[i].getCSS().getX();
        cout << " si " << "Y: ";
        cout << xd[i].getCSS().getY();
        cout << endl << "Coltul din dreapta jos are coordonatele: " << endl << "X: ";
        cout << xd[i].getCDJ().getX();
        cout << " si " << "Y: ";
        cout << xd[i].getCDJ().getY();
        cout << endl << endl;

    }
}

void maximum(vector<Dreptunghi> xd, int n){
    int maxi  = 0, poz;
    for(int i  = 0; i < n; i++) {
        if(xd[i].getarie() > maxi){
            maxi = xd[i].getarie();
            poz = i;
        }
    }
    cout << "Cel mai mare dreptunghi are aria " << maxi <<" si: "<< endl;
    cout << "Coltul din stanga sus are coordonatele: " << endl << "X: ";
    cout << xd[poz].getCSS().getX();
    cout << " si " << "Y: ";
    cout << xd[poz].getCSS().getY();
    cout << endl << "Coltul din dreapta jos are coordonatele: " << endl << "X: ";
    cout << xd[poz].getCDJ().getX();
    cout << " si " << "Y: ";
    cout << xd[poz].getCDJ().getY();
    cout << endl;

}

void primulCadran(vector<Dreptunghi> v, int l){
    bool ok = false;
    for(int i  = 0; i < l; i++) {
        if(v[i].getCSS().getX() > 0 && v[i].getCSS().getY() > 0 && v[i].getCDJ().getX() > 0 && v[i].getCDJ().getY() > 0){
            ok = true;
            cout << "Coltul din stanga sus are coordonatele: " << endl << "X: ";
            cout << v[i].getCSS().getX();
            cout << " si " << "Y: ";
            cout << v[i].getCSS().getY();
            cout << endl << "Coltul din dreapta jos are coordonatele: " << endl << "X: ";
            cout << v[i].getCDJ().getX();
            cout << " si " << "Y: ";
            cout << v[i].getCDJ().getY();
            cout << endl;
        }
    }
    if(ok){
        cout << "Nu exista dreptunghiuri in cadranul intai" << endl;
    }
}

void entitati_egale(vector<Dreptunghi> v, int l, int& start, int& stop) {
    int maxim = 0, poz = 0, pozmax = 0, nr = 1;
    Dreptunghi x = v[0];
    for (int i = 1; i < l; i++) {
        if (v[i].getarie() == x.getarie() && v[i].getperimetru() == x.getperimetru()) {
            nr++;
        } else {
            if (maxim < nr) {
                maxim = nr;
                pozmax = poz;
            }
            poz = i;
            nr = 1;
            x = v[i];
        }
    }
    if (maxim == 0) {
        maxim = nr;
    }
    if (maxim < nr) {
        maxim = nr;
        pozmax = poz;
    }
    start = pozmax;
    stop = pozmax + maxim;
}

void afisareSecventa(vector<Dreptunghi> v, int l){
    int start = 0, stop = 0;
    entitati_egale(v, l, start, stop);
    cout << "Cea mai lunga secventa are lungimea " << stop - start << " si este formata din: " << endl;
    for(int i = start; i < stop; i++ ){
        cout << " Dreptunghiul " << i + 1 << endl;
        cout << "Coltul din stanga sus are coordonatele: " << endl << "X: ";
        cout << v[i].getCSS().getX();
        cout << " si " << "Y: ";
        cout << v[i].getCSS().getY();
        cout << endl << "Coltul din dreapta jos are coordonatele: " << endl << "X: ";
        cout << v[i].getCDJ().getX();
        cout << " si " << "Y: ";
        cout << v[i].getCDJ().getY();
        cout << endl << endl;
    }
}

    void options(){
    cout << " Alegeti o optiune: " << endl;
    cout << "1. Citire Dreptunghiuri" << endl;
    cout << "2. Afisare Dreptunghiuri" << endl;
    cout << "3. Cel mai mare dreptunghi" << endl;
    cout << "4. Afisati toate dreptunghiurile din cadranul intai" << endl;
    cout << "5. Afisati cea mai lunga secventa de entitati egale" << endl;
    cout << "0. Exit" << endl;

}
void run_menu(){
    int l = 0;
    vector<Dreptunghi> v;
    bool  value = true;
    while(value){
        options();
        int command;
        cout << "Optiune: ";
        cin >> command;
        switch (command) {
            case 1:
                readarray(v, l);
                break;

            case 2:
                writearray(v, l);
                break;

            case 3:
                maximum(v, l);
                break;

            case 4 :
                primulCadran(v, l);
                break;

            case 5:
                afisareSecventa(v, l);
                break;

            default: {
                cout << "La revedere!";
                value = false;
            }


        }
    }
}