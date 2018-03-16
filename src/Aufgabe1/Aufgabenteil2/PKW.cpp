#include "Fahrzeug.h"
#include "PKW.h"
#include <iostream>
#include <iomanip>

using namespace std;
extern double dGlobaleZeit;

PKW::PKW(string sName, double dMaxGeschwindigkeit, double dVerbrauch, double dTankvolumen)
    :Fahrzeug(sName,dMaxGeschwindigkeit), p_dVerbrauch(dVerbrauch), p_dTankvolumen(dTankvolumen){
    p_dTankinhalt=p_dTankvolumen/2.0;
    p_dGesamtVerbrauch = 0.0;
};

PKW::PKW(string sName, double dMaxGeschwindigkeit, double dVerbrauch)
    :Fahrzeug(sName,dMaxGeschwindigkeit), p_dVerbrauch(dVerbrauch){
    p_dTankvolumen = 55;
    p_dTankinhalt = p_dTankvolumen/2.0;
    p_dGesamtVerbrauch = 0.0;
};

PKW::~PKW(){};

ostream& PKW::vAusgabe(ostream &output) const{
    Fahrzeug::vAusgabe(output) << p_dTankinhalt
    << setw(16) << p_dGesamtVerbrauch <<endl;
    return output;
};
   
void PKW::vAbfertigung(){
    if(p_dZeit < dGlobaleZeit){ 
        p_dGesamtStrecke += (dGlobaleZeit - p_dZeit) * p_dMaxGeschwindigkeit;
        p_dGesamtZeit += (dGlobaleZeit - p_dZeit);
        p_dGesamtVerbrauch += (((dGlobaleZeit - p_dZeit) * p_dMaxGeschwindigkeit) / 100.0) * p_dVerbrauch;
        p_dTankinhalt = p_dTankinhalt - (((dGlobaleZeit - p_dZeit) * p_dMaxGeschwindigkeit) / 100.0) * p_dVerbrauch;
        if(p_dTankinhalt<0.0)p_dTankinhalt = 0.0;
        p_dZeit = dGlobaleZeit;
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

double PKW::dGeschwindigkeit{
    return p_dMaxGeschwindigkeit;
}

