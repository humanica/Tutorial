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
    p_dGeschwindigkeit = dMaxGeschwindigkeit;
    vInitialisierung();
};

Fahrzeug::Fahrzeug(Fahrzeug &revFahrzeug){
    this->p_sName = revFahrzeug.p_sName;
    this->p_dMaxGeschwindigkeit = revFahrzeug.p_dMaxGeschwindigkeit;
}

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

double Fahrzeug::dGetvGeschwindigkeit() const{
    return p_dGeschwindigkeit;
}

void Fahrzeug::vSetdGeschwindigkeit(double dGeschwindigkeit){
    p_dGeschwindigkeit = dGeschwindigkeit;
}

void Fahrzeug::vSetdMaxGeschwindigkeit(double dGeschwindigkeit){
    p_dMaxGeschwindigkeit =  dGeschwindigkeit;
    p_dGeschwindigkeit = dGeschwindigkeit;
}

string Fahrzeug::sGetsName() const{
    return p_sName;
};

double Fahrzeug::dGetvMaxGeschwindigkeit() const{
    return p_dMaxGeschwindigkeit;
}

bool Fahrzeug::operator < (const Fahrzeug &revFahrzeug){
    if(this->dGetvGesamtStrecke() < revFahrzeug.dGetvGesamtStrecke())return 1;
    return 0;
}

void Fahrzeug::operator = (Fahrzeug &revFahrzeug){
    revFahrzeug.p_sName = this -> p_sName;
    revFahrzeug.p_dMaxGeschwindigkeit = this -> p_dMaxGeschwindigkeit;
}

ostream& Fahrzeug::ostreamAusgabe(ostream &output) const{
    setiosflags(ios::fixed);
    output << setw(20) << p_iID << setw(20) << p_sName << setw(20) << ":" << setw(20) << 
    p_dMaxGeschwindigkeit << setw(20) << p_dGeschwindigkeit << setw(20) << p_dGesamtStrecke;
    return output;
};
 
void Fahrzeug::vAusgabe() const{
    setiosflags(ios::fixed);
    cout.precision(3);
    cout << setw(20) << p_iID <<setw(20) << p_sName << setw(20) << ":" << setw(20) << 
    p_dMaxGeschwindigkeit << setw(20) << p_dGeschwindigkeit << setw(20) << p_dGesamtStrecke;
};
   
void Fahrzeug::vAbfertigung(){
    if(p_dZeit < dGlobaleZeit){ 
        p_dGesamtStrecke += (dGlobaleZeit - p_dZeit) * Fahrzeug::dGeschwindigkeit();
        p_dGesamtZeit += (dGlobaleZeit - p_dZeit);
        p_dZeit = dGlobaleZeit;
    }
};

double Fahrzeug::dGeschwindigkeit(){
    return p_dMaxGeschwindigkeit;
};

double Fahrzeug::dTanken(){return 0.0;};

double Fahrzeug::dTanken(double dAuftanken){return 0.0;};

void Fahrzeug::vInitialisierung(){
    p_iMaxID++;
    p_iID = p_iMaxID;
    p_dGesamtStrecke = 0.0;
    p_dGesamtZeit = 0.0;
    p_dZeit = 0.0;
};

ostream& operator << (ostream &output,const Fahrzeug &cFahrzeug){ 
    cFahrzeug.ostreamAusgabe(output);
    return output;
}






