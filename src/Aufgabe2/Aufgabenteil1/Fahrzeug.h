#ifndef FAHRZEUG_H_
#define FAHRZEUG_H_
#include "AktivesVO.h"
#include <string>
#include <iostream>
extern double dGlobaleZeit;


class Fahrzeug : public AktivesVO {
    protected: 
    double p_dGesamtStrecke;
    double p_dGesamtZeit;
    double p_dGeschwindigkeit;
    double p_dMaxGeschwindigkeit;
    
    private:
    static int p_iMaxID;

    public:
    Fahrzeug();
    Fahrzeug(std::string);
    Fahrzeug(std::string, double);
    Fahrzeug(Fahrzeug &);
    virtual ~Fahrzeug();
    void vSetsName(std::string);
    double dGetvGesamtStrecke() const;
    double dGetvGesamtZeit() const;
    double dGetvZeit() const;
    double dGetvGeschwindigkeit() const;
    void vSetdGeschwindigkeit(double);
    void vSetdMaxGeschwindigkeit(double);
    std::string sGetsName() const;
    double dGetvMaxGeschwindigkeit() const;
    virtual bool operator < (const Fahrzeug &);
    virtual void operator = (Fahrzeug &);
    virtual std::ostream& ostreamAusgabe(std::ostream&) const;
    virtual void vAusgabe() const;
    virtual void vAbfertigung();
    virtual double dTanken();
    virtual double dTanken(double);
    virtual double dGeschwindigkeit();

    private:
    void vInitialisierung();
};

std::ostream& operator << (std::ostream &, const Fahrzeug &);

#endif

