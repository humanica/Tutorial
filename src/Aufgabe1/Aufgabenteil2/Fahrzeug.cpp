#include <string>
#include <iostream>
#include <iomanip>
#include "Fahrzeug.h"
using namespace std;

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

void Fahrzeug::vSetsName(string sName){
    p_sName = sName;
};

double Fahrzeug::dGetvGesamtStrecke() const{
    return p_dGesamtStrecke;
};

double Fahrzeug::dGetvGesamtZeit() const{
    return p_dGesamtStrecke;
};

double Fahrzeug::dGetvZeit() const{
    return p_dZeit;
};

void Fahrzeug::vSetdMaxGeschwindigkeit(double dGeschwindigkeit){
    p_dMaxGeschwindigkeit =  dGeschwindigkeit;
}
string Fahrzeug::sGetsName() const{
    return p_sName;
};

double Fahrzeug::dGetvMaxGeschwindigkeit() const{
    return p_dMaxGeschwindigkeit;
}

ostream& Fahrzeug::ostreamAusgabe(ostream &output) const{
    output << setw(12) << p_iID <<setw(12) << p_sName << setw(12) << ":" << setw(18) << 
    p_dMaxGeschwindigkeit << setw(18) << p_dGesamtStrecke << setw(16);
    return output;
};
 
void Fahrzeug::vAusgabe() const{
    cout << setw(12) << p_iID <<setw(12) << p_sName << setw(12) << ":" << setw(18) << 
    p_dMaxGeschwindigkeit << setw(18) << p_dGesamtStrecke << setw(16) << endl;
};
   
void Fahrzeug::vAbfertigung(){
    if(p_dZeit < dGlobaleZeit){ 
        p_dGesamtStrecke += (dGlobaleZeit - p_dZeit) * Fahrzeug::dGeschwindigkeit();
        p_dGesamtZeit += (dGlobaleZeit - p_dZeit);
        p_dZeit = dGlobaleZeit;
    }
};

double Fahrzeug::dGeschwindigkeit(){return 0.0;};

double Fahrzeug::dTanken(){return 0.0;};

double Fahrzeug::dTanken(double dAuftanken){return 0.0;};

void Fahrzeug::vInitialisierung(){
    p_iMaxID++;
    p_iID = p_iMaxID;
    p_dGesamtStrecke = 0.0;
    p_dGesamtZeit = 0.0;
    p_dZeit = 0.0;
};







