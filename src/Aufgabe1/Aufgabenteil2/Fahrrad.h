#ifndef FAHRRAD_H_
#define FAHRRAD_H_

class Fahrrad: public Fahrzeug{
    
    public:
    Fahrrad(string, double);
    virtual ~Fahrrad();
    virtual double dTanken();
    virtual double dTanken(double);

};

#endif