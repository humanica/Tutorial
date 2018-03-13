#include "Fahrrad.h"


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