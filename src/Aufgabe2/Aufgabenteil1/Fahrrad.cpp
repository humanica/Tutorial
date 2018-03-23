#include "Fahrzeug.h"
#include "Fahrrad.h"
using namespace std;

Fahrrad::Fahrrad(string sName,double dMaxGeschwindigkeit)
                :Fahrzeug(sName,dMaxGeschwindigkeit){
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
    double Geschwindigkeit = p_dMaxGeschwindigkeit *(1 - (double)((int) (p_dGesamtStrecke/20)/10));
    if(Geschwindigkeit<12.0){Geschwindigkeit=12;};
    return Geschwindigkeit;
}

void Fahrrad::vAbfertigung() {
    if(p_dZeit < dGlobaleZeit){ 
        p_dGesamtStrecke += (dGlobaleZeit - p_dZeit) * Fahrrad::dGeschwindigkeit();
        p_dGesamtZeit += (dGlobaleZeit - p_dZeit);
        p_dZeit = dGlobaleZeit;
    }
} 