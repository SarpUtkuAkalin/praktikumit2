#pragma once
#include <iostream>
#include <iomanip>
#include <string>

class Fahrzeug {
private:
	std::string sName;
	const int iID;
	static int iMaxID;
	double p_dMaxGeschwindigkeit;
	double p_dGesamtStrecke;
	double p_dGesamtZeit;
	double p_dZeit;

public:
	//Standardkonstruktor
	Fahrzeug() : sName(""), iID(+ iMaxID), p_dMaxGeschwindigkeit(0.0), p_dGesamtStrecke(0.0), p_dGesamtZeit(0.0), p_dZeit(0.0) {
		std::cout << "Fahrzeug erstellt: ID = " << iID << ", Name = " << sName << std::endl;
	}
	//Konstruktor mit Name
	Fahrzeug(const std::string& name, double maxGeschwindigkeit =0.0) : sName(name), iID(+ +iMaxID), p_dMaxGeschwindigkeit(maxGeschwindigkeit > 0 ? maxGeschwindigkeit : 0.0), p_dGesamtStrecke(0.0), p_dGesamtZeit(0.0), p_dZeit(0.0) {
		std::cout << "Fahrzeug erstellt: " << iID << ", Name = " << sName << std::endl;
	}
	//Destruktor
	virtual ~Fahrzeug(){
		std::cout << "Fahrzeug gelöscht: ID = " << iID << ", Name = " << sName << std::endl;
	}
	//Kopffunktion für tabellarische Ausgabe
	static void vKopf() {
		std::cout << std::setw(5) << "ID" << std::setw(15) << "Name" << std::setw(20) << "MaxGeschwindigkeit" << std::setw(20) << "Gesamtstrecke" << std::endl;
		std::cout << "---------------------------------------" << std::endl;
	}
	//Ausgabe der Fahrzeugdaten
	virtual void vAusgeben() const {
		std::cout << std::setw(5) << iID << std::setw(15) << sName << std::setw(20) << std::fixed << std::setprecision(2) << p_dMaxGeschwindigkeit << std::setw(20) << p_dGesamtStrecke << std::endl;
	}
	//Simulationsfunktion (Sonra tekrar bak)
	virtual void vSimulieren() {
		//Simülasyon mantýðýný sonra yazmak lazým
	}
};
