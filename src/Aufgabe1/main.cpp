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
    BMW.p_sName="BMW";
    Fahrzeug Audi("Audi");
    Fahrzeug *VW = new Fahrzeug(VW);
    cout << BMW.p_sName << endl;
    cout << Audi.p_sName << endl;
    cout << VW.p_sName << endl;
};