#include <iostream>
#include "Fahrzeug.h"
using namespace std;

void vAufgabe1();

int main(int argc, char *argv[]) {
    vAufgabe1();
}

int Fahrzeug::p_iMaxID = 0;

void vAufgabe1(){
    Fahrzeug BMW;
    BMW.vSetsName("BMW");
    Fahrzeug Audi("Audi");
    Fahrzeug *VW = new Fahrzeug("VW");
    Fahrzeug *Porsche = new Fahrzeug;
    Porsche->vSetsName("Porsche");
    cout << BMW.sGetsName() << endl;
    cout << Audi.sGetsName() << endl;
    cout << VW->sGetsName() << endl;
    cout << Porsche->sGetsName() << endl;
    delete VW;
    delete Porsche;
};