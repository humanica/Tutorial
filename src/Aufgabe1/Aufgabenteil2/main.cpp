 #include <iostream>
#include <iomanip>
#include "Fahrzeug.h"

using namespace std;

int Fahrzeug::p_iMaxID = 0;
double dGlobaleZeit=0.0;

void vAufgabe_1(void);
void vAufgabe_1_deb(void);

int main(int argc, char *argv[]) {
//  vAufgabe_1();
//  vAufgabe_1_deb();
    return 0;
}


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
    cout << "\n\n\n" << endl;
    // setw: Breite die für das nächste Ausgabeobjekt mindestens bereitgestellt wird
    // width(): Äquivalent zu setw aber andere Syntax
    /* resetiosflags(ios::left/richt) verwenden wenn man wechseln möchte, sonst wird beides 
    gleichzeitig definiert und das Verhalten ist undefiniert */
    cout.setf(ios::left);
    cout << setw(12) << "ID" <<setw(12) << "Name" << setw(12) << ":" << setw(12) << "MaxKmh" 
    << setw(12) << "Gesamtstrecke" << endl;
    cout.fill('+');
    cout << setw(61) << "" << endl;
    cout<<endl; 
    cout.fill(' ');
    BMW.vAusgabe();
    Audi.vAusgabe();
    VW->vAusgabe();
    Porsche->vAusgabe();
    cout << "\n\n\n";

    while(dGlobaleZeit <= 1.0){
        BMW.vAbfertigung();
        Audi.vAbfertigung();
        VW->vAbfertigung();
        Porsche->vAbfertigung();
        dGlobaleZeit += 1.f/10.f;

        cout << setw(12) << "ID" <<setw(12) << "Name" << setw(12) << ":" << setw(12) 
        << "MaxKmh" << setw(12) << "Gesamtstrecke" << endl;
        cout.fill('+');
        cout << setw(61) << "" << endl;
        cout.fill(' ');

        BMW.vAusgabe();
        Audi.vAusgabe();
        VW->vAusgabe();
        Porsche->vAusgabe();
        cout << "\n\n\n";
    }

    delete VW;
    delete Porsche;
};


void vAufgabe_1_deb(){
    Fahrzeug *VW = new Fahrzeug("VW");
    Fahrzeug *Porsche = new Fahrzeug("Porsche");
    Fahrzeug *BMW = new Fahrzeug("BMW");
    Fahrzeug *Audi = new Fahrzeug("Audi");
    Fahrzeug * fahrzeugFeld[5] = {VW, Porsche, 0, BMW, Audi};
    for (int i=0;i<5;i++){
        fahrzeugFeld[i]->vAusgabe();
    }
}