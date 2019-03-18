#pragma once
#include "Himmelskoerper.h"
#include <string>

class Stern : public Himmelskoerper {
private:
	const double _fusionsleistung;
public:
	Stern(const std::string& name, double masse, double umlaufradius, double dichte, double durchmesser, double fusionsleistung) : Himmelskoerper(name, masse, umlaufradius, dichte, durchmesser), _fusionsleistung(fusionsleistung) {}
	double fusionsleistung() const { return _fusionsleistung ; }
	std::string text() const; 
};
