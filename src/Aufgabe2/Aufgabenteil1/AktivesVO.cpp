#include "AktivesVO.h"
#include "Fahrzeug.h"

AktivesVO::AktivesVO(){};

AktivesVO::~AktivesVO(){};

ostream& AktivesVO::ostreamAusgabe(ostream &output, const Fahrzeug::Fahrzeug &) const{
    setiosflags(ios::fixed);
    output << setw(20) << this->iGetvID() << setw(20) << this->sGetvName();
    return output;
};

void AktivesVO::vAusgabe(){
    setiosflags(ios::fixed);
    cout.precision(3);
    cout << setw(20) << p_iID <<setw(20) << p_sName << endl;
    return  
};

double AktivesVO::iGetvID(){
    return p_iID;
};

void AktivesVO::vSetiID(int ID){
    p_iID = ID;
};

void AktivesVO::sGetvName(){
    return p_sName;
};

std::string AktivesVO::vSetsName(Name){
    p_sName = Name;
};

double AktivesVO::dGetvZeit(){
    return p_dZeit;
};

void AktivesVO::vSetdZeit(Zeit){
    p_dZeit = Zeit; 
};

ostream& operator << (ostream &output,const Fahrzeug &cFahrzeug){ 
    cFahrzeug.ostreamAusgabe(output);
    return output;
}



