#pragma once 
#include "Mond.h"
#include "Himmelskoerper.h"
#include <string>
#include <vector>

class Planet : public Himmelskoerper {
private:
	std::vector<const Mond*> mond; 
public:
	Planet(const std::string& name, double masse, double umlaufradius, double dichte, double durchmesser) : Himmelskoerper(name, masse, umlaufradius, dichte, durchmesser) {}
	void fuegeHinzu(const Mond& m);
	std::string text() const; 
};
