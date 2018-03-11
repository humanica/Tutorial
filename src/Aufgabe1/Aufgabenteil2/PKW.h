#include "Fahrzeug.h"

class Fahrrad: public Fahrzeug{
    public:
    
    private:

    protected:
    double p_dVerbrauch;
    double p_dTankinhalt;
    double p_dTankvolumen;


    public:
    PKW::PKW(string);
    PKW::PKW(string,double);

    private:
    double dVerbrauch();
}