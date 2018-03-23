#include "FzgFahren.h"
#include "Weg.h"
#include "Fahrzeug.h"
#include "Streckenende.h"

FzgFahren::FzgFahren(Weg * ptWay):FzgVerhalten(ptWay)
{
}

//Gibt fahrbare Strecke zurück, solange nicht Ende des Wegs erreicht wurde
double FzgFahren::dStrecke(Fahrzeug * ptCar, double dZeit)
{
	double dFahrbareStrecke;
	double dGefahreneStrecke;
	double dWegLaenge;

	//Strecke, die das Fahrzeug in der Zeit fahren koennte
	dFahrbareStrecke = ptCar->dGeschwindigkeit()*dZeit;

	//Von Fahrzeug gefahrene Teilstrecke
	dGefahreneStrecke = ptCar->GetAbschnittStrecke();

	//Laenge des Wegs, auf dem Fahrzeug unterwegs ist
	dWegLaenge = p_ptWeg->GetLaenge();

	//Zum Debuggen:
	//cout << ptCar->GetName() << " : " ;
	//cout << " GS : " << dGefahreneStrecke << " FS: " << dFahrbareStrecke << " WL: " << dWegLaenge << endl;

	if((dGefahreneStrecke+dFahrbareStrecke > dWegLaenge) && (dGefahreneStrecke >= (dWegLaenge-0.001)))
	{
		//Beende, da Wegende
		throw new Streckenende(ptCar,p_ptWeg);
	}
	else if((dGefahreneStrecke+dFahrbareStrecke > dWegLaenge) && (dGefahreneStrecke < (dWegLaenge-0.001)))
	{
		//Gib Reststrecke zurueck, da keine ganze Strecke mehr fahrbar
		return (dWegLaenge-dGefahreneStrecke);
	}
	else
	{
		return dFahrbareStrecke;
	}

}