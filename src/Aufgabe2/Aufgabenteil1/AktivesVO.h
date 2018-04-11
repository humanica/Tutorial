#ifndef AKTIVESVO_H_
#define AKTIVESVO_H_
#include "Fahrzeug.h"

extern double dGlobaleZeit;

class AktivesVO{
    protected:
    int p_iID;
    static int p_iMaxID;
    std::string p_sName;
    double p_dZeit;

    public:
    AktivesVO();
    virtual ~AktivesVO();
    double dGetvID();
    double dGetvZeit();
    virtual std::ostream& ostreamAusgabe(std::ostream&) const;
    virtual void vAusgabe() const;
    virtual void vAbfertigung() = 0;
    virtual double dTanken() = 0;
    virtual double dTanken(double) = 0;
    virtual double dGeschwindigkeit() = 0;
};

std::ostream& operator << (std::ostream&, const Fahrzeug::Fahrzeug &);

#endif