#pragma once
#include "Fahrzeug.h"

class PKW : public Fahrzeug {
public:
	//Erstellt ein neuen PKW mit eindeutiger ID
	PKW();

	//Kopierkonstruktor. Erstellt ein neuen PKW nach Vorlage der rhs.
	PKW(const PKW& rhs);

	//Erstellt ein neuen PKW mit eindeuitiger ID, maximaler Geschwindigkeit und Verbrauch.
	PKW(const std::string sName, const double dMaxGeschwindigkeit, const double dVerbrauch);

	//Erstellt ein neuen PKW mit eindeutiger ID, maximaler Geschwindigkeit, Verbrauch und Tankvolumen.
	PKW(const std::string sName, const double dMaxGeschwindigkeit, const double dVerbrauch, const double Tankvolumen);

	//Standard-Destruktor
	virtual ~PKW();

	//Diese Funktion gibt alle wichtigen Daten des PKW auf cout aus.
	virtual void vAusgabe() const;

	//Diese Funktion lässt den PKW fahren, sofern genügend Kraftstoff vorhanden ist.
	virtual void vAbfertigung();

	//Ermittelt den bisherigen Gesamtverbrauch an Kraftstoff.
	double dVerbrauch() const;

	//Diese Funktion betankt ein PKW mit der gewünschten Menge und gibt die tatsächlich getankte Menge zurück.
	//Ohne Parameterangabe (default -1.0) wird vollgetankt.
	virtual double dTanken(double dMenge = -1.0);

	//Diese Operatorüberladung ermöglicht das direkte Zuweisen eines PKW.
	PKW& operator = (const PKW& rhs);

private:
	//Kraftstoffverbrauch in Liter/100km
	double p_dVerbrauch;

	//Aktueller Inhalt des Tanks in Litern.
	double p_dTankinhlat;

	//Gesamtvolumen des Tanks
	double p_dTankvolumen;
};
