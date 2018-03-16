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

double Fahrrad::dGeschwindigkeit(){

}

void PKW::vAbfertigung(){
    if(p_dZeit < dGlobaleZeit){ 
        p_dGesamtStrecke += (dGlobaleZeit - p_dZeit) * p_dMaxGeschwindigkeit;
        p_dGesamtZeit += (dGlobaleZeit - p_dZeit);
        
        if(p_dTankinhalt<0.0)p_dTankinhalt = 0.0;
        p_dZeit = dGlobaleZeit;
} 