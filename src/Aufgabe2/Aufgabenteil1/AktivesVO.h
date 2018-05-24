#ifndef AKTIVESVO_H_
#define AKTIVESVO_H_
#include <string>
#include <iostream>
extern double dGlobaleZeit;

//    *************  Abstract class   ***************          
class AktivesVO{
    protected:
    int p_iID;
    static int p_iMaxID;
    std::string p_sName;
    double p_dZeit;
    
    protected:
    AktivesVO();
    virtual ~AktivesVO();

    public:
    int iGetvID();
    void vSetiID();
    std::string sGetvName();
    void vSetsName();
    double dGetvZeit();
    void vSetdZeit();
    
    virtual std::ostream& ostreamAusgabe(std::ostream&) const;
    virtual void vAbfertigung() = 0;
    virtual void vAusgabe();
    }

std::ostream& operator << (std::ostream &, const Fahrzeug::Fahrzeug &);
#endif 