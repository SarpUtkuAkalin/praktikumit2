#pragma once

#include "Fahrzeug.h"

class Fahrrad : public Fahrzeug {
public:
	Fahrrad();

	Fahrrad(const std::string sName, const double dMaxGeschwindigkeit);

	virtual ~Fahrrad();

	virtual double dGeschwindigkeit() const;
};
