using namespace std;

class Fahrzeug{
    public:

    private:
    string p_sName;
    int p_iID;
    double p_dMaxGeschwindigkeit;
    double p_dGesamtStrecke;
    double p_dGesamtZeit;
    double p_dZeit;
    static int p_iMaxID;

    public:
    Fahrzeug();
    Fahrzeug(string);
    Fahrzeug(string, double);
    ~Fahrzeug();
    void vSetsName(string);
    string sGetsName();

    private:
    void vInitialisierung();
};
