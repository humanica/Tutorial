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
    return cPKW.vAusgabe(output);
};




int main(int argc, char *argv[]) {
    cout << setw(12) << "ID" <<setw(12) << "Name" << setw(12) << ":" << setw(12) << "MaxKmh"
    << setw(12) << "Gesamtstrecke" << setw(15) << "dTankinhalt" << setw(15) << "Gesamtverbrauch" << endl;
    vAufgabe_2();
}

void vAufgabe_2(){
    vector <Fahrzeug*> fahrZeug;
    int anzahlPKW, anzahlFahrrad;
    anzahlPKW = 2;
    anzahlFahrrad = 2;
    fahrZeug.resize(anzahlPKW + anzahlFahrrad);
while(dGlobaleZeit <= 5.0){
    for(unsigned int i=0;i<fahrZeug.size();i++){
        cout.setf(ios::left);
        fahrZeug[i]->vAbfertigung();
        cout << setw(12) << "ID" <<setw(12) << "Name" << setw(12) << ":" << setw(12) << "MaxKmh" 
        << setw(16) << "Gesamtstrecke" << setw(16) << "Tankinhalt" << setw(16) << "Gesamtverbrauch"<< endl;
        cout.fill('+');
        cout << setw(97) << "" << endl;
        cout<<endl; 
        cout.fill(' ');
        fahrZeug[i]->vAbfertigung(); 
        cout << fahrZeug[i] << endl;
        dGlobaleZeit += 1.f/10.f;
    } 
}
}
