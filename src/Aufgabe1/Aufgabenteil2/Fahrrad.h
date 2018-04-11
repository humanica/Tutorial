#ifndef FAHRRAD_H_
#define FAHRRAD_H_
#include <string>

class Fahrrad: public Fahrzeug{
    
    public:
    Fahrrad(std::string, double);
    Fahrrad(Fahrrad &);
    virtual ~Fahrrad();
    virtual bool operator < (const Fahrrad &);
    virtual void operator = (Fahrrad &);
    virtual std::ostream& ostreamAusgabe(std::ostream&) const;
    virtual double dTanken();
    virtual double dTanken(double);
    virtual double dGeschwindigkeit();
    virtual void vAbfertigung();
};

#endif