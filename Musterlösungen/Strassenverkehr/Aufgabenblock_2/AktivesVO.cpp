#pragma once
#include <string>
#include <iostream>
#include <iomanip>

#include "AktivesVO.h"

using namespace std;

int AktivesVO::p_iMaxID = 0;
extern double dGlobaleZeit;

AktivesVO::AktivesVO()
{
	++p_iMaxID;
	p_iID = p_iMaxID;
}

void AktivesVO::vAusgabe()
{
	cout.precision(2); // Auf zwei Nachkommastellen runden und immer anzeigen. (5.00)

	cout << " " << resetiosflags(ios::right) << setiosflags(ios::right)
		 << setw(2) << p_iID << "    "
		 << resetiosflags(ios::right) << setiosflags(ios::left) // wieder linksbündig
		 << setw(15) << p_sName;
}

ostream& operator<<(ostream& Stream, AktivesVO& VO)
{
	VO.ostreamAusgabe(Stream);
	return Stream;
}

ostream& AktivesVO::ostreamAusgabe(ostream& Stream)
{
	Stream.precision(2); // Auf zwei Nachkommastellen runden und immer anzeigen. (5.00)

	Stream << " " << resetiosflags(ios::right) << setiosflags(ios::right)
		 << setw(2) << p_iID << "    "
		 << resetiosflags(ios::right) << setiosflags(ios::left) // wieder linksbündig
		 << setw(15) << p_sName;
	return Stream;
}

string AktivesVO::GetName() const
{ 
	return p_sName;
}
