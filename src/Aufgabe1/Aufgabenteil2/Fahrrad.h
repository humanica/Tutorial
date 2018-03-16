#ifndef FAHRRAD_H_
#define FAHRRAD_H_
#include <string>

class Fahrrad: public Fahrzeug{
    
    public:
    Fahrrad(std::string, double);
    virtual ~Fahrrad();
    virtual double dTanken();
    virtual double dTanken(double);

};

#endif