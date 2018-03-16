#include <string>
#include <iostream>
#include <iomanip>
#include "Fahrzeug.h"
using namespace std;
extern double dGlobaleZeit;

// Standart Konstruktor
Fahrzeug::Fahrzeug(){
    vInitialisierung();
    p_sName = "";
    p_dMaxGeschwindigkeit = 0;
};

Fahrzeug::Fahrzeug(string sName) : p_sName(sName) {
    vInitialisierung();
    p_dMaxGeschwindigkeit = 0;
};

Fahrzeug::Fahrzeug(string sName, double dMaxGeschwindigkeit) : 
                   p_sName(sName), p_dMaxGeschwindigkeit (dMaxGeschwindigkeit) {
    vInitialisierung();
};

Fahrzeug::~Fahrzeug(){
};

void Fahrzeug::vInitialisierung(){
    p_iMaxID++;
    p_iID = p_iMaxID;
    p_dGesamtStrecke = 0.0;
    p_dGesamtZeit = 0.0;
    p_dZeit = 0.0;
};

void Fahrzeug::vSetsName(string sName){
    p_sName = sName;
};

string Fahrzeug::sGetsName() const{
    return p_sName;
};

void Fahrzeug::vSetdMaxGeschwindigkeit(int dMaxGeschwindigkeit){
    p_dMaxGeschwindigkeit = dMaxGeschwindigkeit;
};

ostream& Fahrzeug::vAusgabe(ostream &output) const{
    output << setw(12) << p_iID <<setw(12) << p_sName << setw(12) << ":" << setw(12) << 
    p_dMaxGeschwindigkeit << setw(16) << p_dGesamtStrecke << setw(16);
    return output;
};
   
void Fahrzeug::vAbfertigung(){
    if(p_dZeit < dGlobaleZeit){ 
        p_dGesamtStrecke += (dGlobaleZeit - p_dZeit) * p_dMaxGeschwindigkeit;
        p_dGesamtZeit += (dGlobaleZeit - p_dZeit);
        p_dZeit = dGlobaleZeit;
    }
};

double Fahrzeug::dTanken(){return 0.0;};

double Fahrzeug::dTanken(double dAuftanken){return 0.0;};







