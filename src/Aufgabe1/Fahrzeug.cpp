#include <string>
#include "Fahrzeug.h"
#include <iostream>
using namespace std;

// Standart Konstruktor
Fahrzeug::Fahrzeug(){
    vInitialisierung();
    p_sName = "";
    p_dMaxGeschwindigkeit = 0;
};

// Konstruktor mit Initialisierungsliste, dynamische Variablen dürfen hier nicht rein!
Fahrzeug::Fahrzeug(string sName) : p_sName(sName) {
    vInitialisierung();
    p_dMaxGeschwindigkeit = 0;
};

Fahrzeug::Fahrzeug(string sName, double dMaxGeschwindigkeit) : p_sName(sName), 
                                                               p_dMaxGeschwindigkeit (dMaxGeschwindigkeit) {
    vInitialisierung();
};

/* Es gibt noch die Möglichkeit einen Individuellen Copykonstruktor zu erstellen. Das kann Sinn machen, denn
der Copyconstruktor ist implizit vorhanden, was zb bei dynamischen Elementen problematisch ist. */

// Destruktor, hier müssen innerhalb der Klasse definierte dynamische Variablen wieder freigegeben werden.
Fahrzeug::~Fahrzeug(){
};

void Fahrzeug::vInitialisierung(){
    p_iMaxID++;
    p_iID = p_iMaxID;
    p_dGesamtStrecke = 0;
    p_dGesamtZeit = 0;
    p_dZeit = 0;
};

void Fahrzeug::vSetsName(string sName){
    p_sName=sName;
};

string Fahrzeug::sGetsName(){
    return p_sName;
}

   
