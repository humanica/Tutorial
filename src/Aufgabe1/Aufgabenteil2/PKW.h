#ifndef PKW_H_
#define PKW_H_
#include <string>

class PKW: public Fahrzeug{
    public:
    
    private:
    double p_dVerbrauch;
    double p_dTankinhalt;
    double p_dTankvolumen;
    double p_dGesamtVerbrauch;

    public:
    PKW(std::string,double,double,double,double);
    PKW(std::string,double,double,double);
    PKW(std::string,double,double);
    virtual ~PKW();
    virtual double dTanken();
    virtual double dTanken(double);
    virtual std::ostream& vAusgabe(std::ostream&) const;
    virtual void vAbfertigung(); 

    private:
    double dVerbrauch();
};

#endif

