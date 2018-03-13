#ifndef FAHRZEUG_H_
#define FAHRZEUG_H_
using namespace std;
#include <string>


class Fahrzeug{
    public:

    protected: 
    double p_dGesamtStrecke;
    // p_dGesamtZeit: Die Zeit die das Fahrzeug schon gefahren ist
    double p_dGesamtZeit;
    // p_dZeit: Die Zeit zu dem das Fahrzeug zu letzten mal abgefertigt wurde
    double p_dZeit;
    string p_sName;
    double p_dMaxGeschwindigkeit;
    int p_iID;
    
    private:
    static int p_iMaxID;


    public:
    Fahrzeug();
    Fahrzeug(string);
    Fahrzeug(string, double);
    virtual ~Fahrzeug();
    void vSetsName(string);
    string sGetsName() const;
    void vSetdMaxGeschwindigkeit(int);
    virtual void vAusgabe() const;
    virtual void vAbfertigung();
    virtual double dTanken();
    virtual double dTanken(double);

    protected:

    private:
    void vInitialisierung();
};

#endif

