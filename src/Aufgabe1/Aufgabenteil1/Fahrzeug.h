using namespace std;

class Fahrzeug{
    public:

    private:
    string p_sName;
    int p_iID;
    double p_dMaxGeschwindigkeit;
    double p_dGesamtStrecke;
    // p_dGesamtZeit: Die Zeit die das Fahrzeug schon gefahren ist
    double p_dGesamtZeit;
    // p_dZeit: Die Zeit zu dem das Fahrzeug zu letzten mal abgefertigt wurde
    double p_dZeit;
    static int p_iMaxID;

    public:
    Fahrzeug();
    Fahrzeug(string);
    Fahrzeug(string, double);
    ~Fahrzeug();
    void vSetsName(string);
    void vSetdMaxGeschwindigkeit(int);
    string sGetsName();
    void vAusgabe();
    void vAbfertigung();

    private:
    void vInitialisierung();
};
