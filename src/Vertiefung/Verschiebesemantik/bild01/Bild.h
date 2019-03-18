#pragma once
#include <iostream>
#include <string>

class Bild {
private:
	unsigned int b;
	unsigned int h;
	int* p;
	std::string name;
public:
	Bild(unsigned int breite, unsigned int hoehe, const std::string& name); 
	Bild(const Bild&);
	Bild(Bild&&);
	virtual ~Bild();
	Bild& operator=(const Bild&);
	Bild& operator=(Bild&&);
	void setzePixel(unsigned int x, unsigned int y, int farbwert);
	friend std::ostream& operator<<(std::ostream&, const Bild&);
};
