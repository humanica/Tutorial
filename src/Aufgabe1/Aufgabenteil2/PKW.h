#ifndef PKW_H_
#define PKW_H_
#include "Fahrzeug.h"
#include <string>
using namespace std;

class PKW: public Fahrzeug{
    public:
    
    private:
    double p_dVerbrauch;
    double p_dTankinhalt;
    double p_dTankvolumen;
    double p_dGesamtVerbrauch;

    protected:
   


    public:
    PKW(string,double,double,double,double);
    PKW(string,double,double,double);
    PKW(string,double,double);
    virtual ~PKW();
    virtual double dTanken();
    virtual double dTanken(double);
    virtual void vAusgabe() const;
    virtual void vAbfertigung(); 

    private:
    double dVerbrauch();
};


#endif

