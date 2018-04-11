#include "Fahrzeug.h"
#include "Fahrrad.h"
#include "math.h"
using namespace std;

Fahrrad::Fahrrad(string sName,double dMaxGeschwindigkeit)
                :Fahrzeug(sName,dMaxGeschwindigkeit){
    Fahrzeug::vSetdGeschwindigkeit(dMaxGeschwindigkeit);
}

Fahrrad::Fahrrad(Fahrrad &revFahrrad):Fahrzeug(revFahrrad){
}

Fahrrad::~Fahrrad(){
};

double Fahrrad::dTanken(){
    return 0.0;
};

double Fahrrad::dTanken(double dAuftanken){
    return 0.0;
};

double Fahrrad::dGeschwindigkeit() {
    double Geschwindigkeit = this->dGetvMaxGeschwindigkeit() * (1- this->dGetvGesamtStrecke() / 200);
    if(Geschwindigkeit<12.0){Geschwindigkeit = 12.0;};
    this->vSetdGeschwindigkeit(Geschwindigkeit);
    this->vSetdMaxGeschwindigkeit(Geschwindigkeit);
    return Geschwindigkeit;
}

void Fahrrad::vAbfertigung() {
    if(p_dZeit < dGlobaleZeit){ 
        p_dGesamtStrecke += (dGlobaleZeit - p_dZeit) * Fahrrad::dGeschwindigkeit();
        p_dGesamtZeit += (dGlobaleZeit - p_dZeit);
        p_dZeit = dGlobaleZeit;
    }
} 

bool Fahrrad::operator <(const Fahrrad &revFahrrad){
    if(this->dGetvGesamtStrecke() < revFahrrad.dGetvGesamtStrecke())return 1;
    return 0;
}

void Fahrrad::operator = (Fahrrad &revFahrrad) {}

ostream& Fahrrad::ostreamAusgabe(ostream &output) const{
    Fahrzeug::ostreamAusgabe(output) << endl;
    return output;
};

