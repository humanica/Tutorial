using namespace std;
#ifndef STRING
#define STRING

class Fahrzeug{
    public:

    protected: 
    double p_dGesamtStrecke;
    // p_dGesamtZeit: Die Zeit die das Fahrzeug schon gefahren ist
    double p_dGesamtZeit;
    // p_dZeit: Die Zeit zu dem das Fahrzeug zu letzten mal abgefertigt wurde
    double p_dZeit;

    private:
    string p_sName;
    double p_dMaxGeschwindigkeit;
    int p_iID;
    
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

    protected:

    private:
    void vInitialisierung();
};

#endif
