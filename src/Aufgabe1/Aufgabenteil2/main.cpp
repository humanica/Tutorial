#include <iostream>
#include <iomanip>
#include <math.h>
#include <vector>
#include "Fahrzeug.h"
#include "PKW.h"
#include "Fahrrad.h"
using namespace std;


int Fahrzeug::p_iMaxID = 0;
double dGlobaleZeit=0.0;


void vAufgabe_1(void);
void vAufgabe_1_deb(void);
void vAufgabe_2(void);
ostream& operator << (ostream &output,const PKW &cPKW){ 
    return cPKW.ostreamAusgabe(output);
};




int main(int argc, char *argv[]) {
    cout << setw(12) << "ID" <<setw(12) << "Name" << setw(12) << ":" << setw(12) << "MaxKmh" 
    << setw(16) << "Gesamtstrecke" << setw(16) << "Tankinhalt" << setw(16) << "Gesamtverbrauch"<< endl;
    vAufgabe_2();
}

/*void vAufgabe_1(){
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
    resetiosflags(ios::left/richt) verwenden wenn man wechseln möchte, sonst wird beides 
    gleichzeitig definiert und das Verhalten ist undefiniert 
    cout.setf(ios::left);
    cout << setw(12) << "ID" <<setw(12) << "Name" << setw(12) << ":" << setw(12) << "MaxKmh" 
    << setw(12) << "Gesamtstrecke" << setw(12) << "Tankinhalt" << setw(12) << "Gesamtverbrauch"<< endl;
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
    }
}*/

void vAufgabe_2(){
  
}

