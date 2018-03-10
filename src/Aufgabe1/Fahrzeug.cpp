#include <Fahrzeug.h>
#include <string>


Fahrzeug::Fahrzeug(){
    p_sName = "";
    p_iMaxID++;
    p_ID=p_iMaxID;
};

Fahrzeug::Fahrzeug(string sName){
    p_sName = sName;
    cout<<"Element: "<<sName<<" angelegt"<<endl;
    p_iMaxID++;
    p_ID=p_iMaxID;
};

Fahrzeug::~Fahrzeug(){
    cout<<"Element: "<<sName<<" gelöscht"<<endl;
};

