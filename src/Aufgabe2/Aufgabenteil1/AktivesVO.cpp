#include "AktivesVO.h"
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

AktivesVO::AktivesVO(){};

AktivesVO::AktivesVO(string sName): p_sName(sName){
    p_iMaxID++;
    p_iID = p_iMaxID;
}

AktivesVO::~AktivesVO(){};


double AktivesVO::dGetvID(){
    return p_iID;
}

double AktivesVO::dGetvZeit(){
    return p_dZeit;
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
    output << setw(20) << p_iID << setw(20) << p_sName << setw(20) << ":";
    return output;
};
 
