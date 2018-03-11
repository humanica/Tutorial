#include <iostream>
#include <iomanip>
#include "Fahrzeug.h"
using namespace std;

double dGlobaleZeit=0.0;
void vAufgabe_1();

int main(int argc, char *argv[]) {
    vAufgabe_1();
}

int Fahrzeug::p_iMaxID = 0;

void vAufgabe_1(){
    Fahrzeug BMW;
    BMW.vSetsName("BMW");
    Fahrzeug Audi("Audi",100);
    Fahrzeug *VW = new Fahrzeug("VW");
    Fahrzeug *Porsche = new Fahrzeug;
    Porsche->vSetsName("Porsche");
    Porsche->vSetdMaxGeschwindigkeit(80);
    cout << BMW.sGetsName() << endl;
    cout << Audi.sGetsName() << endl;
    cout << VW->sGetsName() << endl;
    cout << Porsche->sGetsName() << endl;
    // setw: Breite die für das nächste Ausgabeobjekt mindestens bereitgestellt wird
    // width(): Äquivalent zu setw aber andere Syntax
    /* resetiosflags(ios::left/richt) verwenden wenn man wechseln möchte, sonst wird beides 
    gleichzeitig definiert und das Verhalten ist undefiniert */
    cout.setf(ios::left);
    cout << setw(12) << "ID" <<setw(12) << "Name" << setw(12) << ":" << setw(12) << "MaxKmh" 
    << setw(12) << "Gesamtstrecke" << setw(12) << endl;
    cout.fill('+');
    cout << setw(61) << "" << endl;
    cout<<endl; 
    cout.fill(' ');
    BMW.vAusgabe();
    Audi.vAusgabe();
    VW->vAusgabe();
    Porsche->vAusgabe();

    while(dGlobaleZeit < 1.0){
        BMW.vAbfertigung();
        Audi.vAbfertigung();
        VW->vAbfertigung();
        Porsche->vAbfertigung();
        dGlobaleZeit+=1/10;

        cout.setf(ios::left);
        cout << setw(12) << "ID" <<setw(12) << "Name" << setw(12) << ":" << setw(12) 
        << "MaxKmh" << setw(12) << "Gesamtstrecke" << setw(12) << endl;
        cout.fill('+');
        cout << setw(61) << "" << endl;
        cout.fill(' ');

        BMW.vAusgabe();
        Audi.vAusgabe();
        VW->vAusgabe();
        Porsche->vAusgabe();
        cout << endl;
    }

    delete VW;
    delete Porsche;
};