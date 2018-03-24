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
void makeheader();
ostream& operator << (ostream &output,const PKW &cPKW){ 
    return cPKW.ostreamAusgabe(output);
};




int main(int argc, char *argv[]) {
    vAufgabe_1();
}

void vAufgabe_1(){
    Fahrzeug BMW;
    BMW.vSetsName("BMW");
    Fahrzeug Audi("Audi",100.0);
    Fahrzeug *VW = new Fahrzeug("VW");
    Fahrzeug *Porsche = new Fahrzeug;
    Porsche->vSetsName("Porsche");
    Porsche->vSetdMaxGeschwindigkeit(80.0);
    cout << BMW.sGetsName() << endl;
    cout << Audi.sGetsName() << endl;
    cout << VW->sGetsName() << endl;
    cout << Porsche->sGetsName() << endl;

    while(dGlobaleZeit <= 1.0){
        makeheader();
        BMW.vAusgabe(); 
        Audi.vAusgabe();
        VW->vAusgabe();
        Porsche->vAusgabe();
        BMW.vAbfertigung();
        Audi.vAbfertigung();
        VW->vAbfertigung();
        Porsche->vAbfertigung();
        dGlobaleZeit += 1.f/10.f;
        cout << "\n\n\n";
        }
    }

void vAufgabe_2(){
  
}

void makeheader(){
    cout<<resetiosflags(ios::right) <<setiosflags(ios::left);
    cout << setw(12) << "ID" <<setw(12) << "Name" << setw(12) << ":" << setw(12) << "MaxKmh" 
    << setw(18) << "Gesamtstrecke" << setw(18) << "Tankinhalt" << setw(16) << "Gesamtverbrauch"<< endl;
    cout.fill('+');
    cout << setw(99) << "" << endl;
    cout<<endl; 
    cout.fill(' ');
}