#include <iostream>
#include <memory>
#include <vector>
#include "Fahrzeug.h"
#include "Fahrrad.h"

void vAufgabe1() {
	//statische Fahrzeuge
	Fahrzeug f1("Auto1", 120.0);
	Fahrzeug f2;

	//Dynamische Fahrzeuge
	Fahrzeug* f3 = new
	Fahrzeug("Auto2", 130.0);
	Fahrzeug* f4 = new Fahrzeug();

	//Ausgabe der Kopfzeile
	Fahrzeug::vKopf();

	//Ausgabe der statischen Fahrzeuge
	f1.vAusgeben();
	f2.vAusgeben();

	//Ausgabe der dynamischen Fahrzeuge
	f3->vAusgeben();
	f4->vAusgeben();

	//Löschen der dynamischen Objekte
	delete f3;
	delete f4;
}

void vAufgabeSmartPointer() {
	//Smartpointer verwenden
	auto sp1 = std::make_shared<Fahrzeug>("SharedCar1", 100.0);
	auto sp2 = std::make_shared<Fahrzeug>("SharedCar2", 110.0);

	//Kopie eines shared_ptr
	std::shared_ptr<Fahrzeug> sp3 = sp1;

	//Ausgabe der Referenzanzahl
	std::cout << "use_count vor Zuweisung: " << sp1.use_count() << std::endl;
	std::cout << "use_count nach Zuweisung: " << sp3.use_count() << std::endl;

	//unique_ptr Fahrzeuge
	auto up1 = std::make_unique<Fahrzeug>("UniqueCar1", 140.0);
	auto up2 = std::make_unique<Fahrzeug>("UniqueCar2", 150.0);

	//unique_ptr in einem Vektor speichern
	std::vector<std::unique_ptr<Fahrzeug>> vec;
	vec.push_back(std::move(up1));
	vec.push_back(std::move(up2));

	//Ausgabe der Fahrzeuge aus dem Vektor
	Fahrzeug::vKopf();
	for (const auto& f : vec) {
		f->vAusgeben();
	}

	//Löschen des Vektors
	vec.clear(); //Hier werden die Fahrzeuge gelöscht
}

int main() {
	vAufgabe1();
	vAufgabeSmartPointer();

	return 0;
}
