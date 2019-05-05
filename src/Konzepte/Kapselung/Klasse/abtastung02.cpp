#include <cmath>
#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

class Komplex {
private:
	double re=0, im=0, betragswert=0;
	bool betragGueltig=true;
public:
	string text();
	void wert(double r, double i);
	double real() {	return re; }
	double imag() {	return im; }
	Komplex mul(const Komplex& z);
	double betrag();
};

struct Abtastwert {	
	double t;	
	Komplex amp; 	
	string text();
};

class Signal {
private:
	vector<Abtastwert> werte;
	const double PI = 3.14159265359;
public:
	unsigned int laenge() const {
		return werte.size(); 
	}
	Abtastwert wert(const int pos) const {
		return werte[pos];
	}
	void generieren(const unsigned int N, const double f) {
		werte.clear();
		for(unsigned int n=0; n<N; n++) {
			Abtastwert a;
			a.t = n;
			double arg = 2*PI*f*n/N;
			a.amp.wert(cos(arg), sin(arg));
			werte.push_back(a);
		}
	}
	string text() {
		stringstream s;
		for(auto a : werte) {
			s << a.text() << endl;
		}
		return s.str();
	}	
};

int main() {
	Signal signal;
	signal.generieren(3,2.0);
	cout << signal.text() << endl;
}

string Komplex::text() {
	stringstream s;
	s << re << " + " << im << "i";
	return s.str();
}

Komplex Komplex::mul(const Komplex& z) {
	Komplex s;
	s.re = re*z.re - im*z.im;
	s.im = re*z.im + im*z.re;
	return s;
}

double Komplex::betrag() {
	if(betragGueltig==false) {
		cout << "Betrag neu berechnen";
		betragswert = sqrt(re*re+im*im);
		betragGueltig = true;
	}
	return betragswert;
}

void Komplex::wert(double r,  double i) { 
	re = r;
	im = i;
	betragGueltig = false;
}

string Abtastwert::text() {
	stringstream s;
	s << t << ": " << amp.text();
	return s.str();
}
