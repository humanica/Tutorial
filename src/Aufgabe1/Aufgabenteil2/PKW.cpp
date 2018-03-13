#include "PKW.h"
#include <iostream>
#include <iomanip>

using namespace std;
extern double dGlobaleZeit;

PKW::PKW(string sName, double dMaxGeschwindigkeit, double dVerbrauch, double dTankvolumen)
    : Fahrzeug(sName,dMaxGeschwindigkeit), p_dVerbrauch(dVerbrauch), p_dTankvolumen(dTankvolumen){
    p_dTankinhalt=p_dTankvolumen/2.0;
    p_dGesamtVerbrauch = 0.0;
};

PKW::PKW(string sName, double dMaxGeschwindigkeit, double dVerbrauch)
    : Fahrzeug(sName,dMaxGeschwindigkeit), p_dVerbrauch(dVerbrauch){
    p_dTankvolumen = 55;
    p_dTankinhalt = p_dTankvolumen/2.0;
    p_dGesamtVerbrauch = 0.0;
};

PKW::~PKW(){};

void PKW::vAusgabe() const{
    cout << setw(12) << p_iID <<setw(12) << p_sName << setw(12) << ":" << setw(12) << 
    p_dMaxGeschwindigkeit << setw(12) << p_dGesamtStrecke << setw(12) << p_dTankinhalt
    << setw(12) << p_dGesamtVerbrauch <<endl;
};
   
void PKW::vAbfertigung(){
    if(p_dZeit < dGlobaleZeit){ 
        p_dGesamtStrecke += (dGlobaleZeit - p_dZeit) * p_dMaxGeschwindigkeit;
        p_dGesamtZeit += (dGlobaleZeit - p_dZeit);
        p_dZeit = dGlobaleZeit;
        p_dTankinhalt = p_dTankinhalt - (((dGlobaleZeit - p_dZeit) * p_dMaxGeschwindigkeit) / 100.0) * p_dVerbrauch;
        if(p_dTankinhalt<0.0)p_dTankinhalt = 0.0;
    } 
};

double PKW::dTanken(){
    p_dTankinhalt=p_dTankvolumen;
    return p_dTankinhalt;
};

double PKW::dTanken(double dAuftanken){
    p_dTankinhalt=p_dTankvolumen + dAuftanken;
    if(p_dTankinhalt > p_dTankvolumen) p_dTankinhalt = p_dTankvolumen;
    return p_dTankinhalt;
};


