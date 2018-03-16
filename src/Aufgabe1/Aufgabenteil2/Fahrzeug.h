#ifndef FAHRZEUG_H_
#define FAHRZEUG_H_
#include <string>
#include <iostream>

class Fahrzeug{
    public:

    protected: 
    double p_dGesamtStrecke;
    // p_dGesamtZeit: Die Zeit die das Fahrzeug schon gefahren ist
    double p_dGesamtZeit;
    // p_dZeit: Die Zeit zu dem das Fahrzeug zu letzten mal abgefertigt wurde
    double p_dZeit;
    std::string p_sName;
    double p_dMaxGeschwindigkeit;
    int p_iID;
    
    private:
    static int p_iMaxID;


    public:
    Fahrzeug();
    Fahrzeug(std::string);
    Fahrzeug(std::string, double);
    virtual ~Fahrzeug();
    void vSetsName(std::string);
    std::string sGetsName() const;
    void vSetdMaxGeschwindigkeit(int);
    virtual std::ostream& vAusgabe(std::ostream&) const;
    virtual void vAbfertigung();
    virtual double dTanken();
    virtual double dTanken(double);
    virtual double dGeschwindigkeit();
    protected:

    private:
    void vInitialisierung();
};

#endif

