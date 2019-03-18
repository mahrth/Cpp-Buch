#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

struct Komplex {
	double re, im;
	explicit Komplex(double re=0, double im=0) : re(re), im(im) {
		cout << "Konstruktor Komplex\n";
	}
	string text() const;
};

struct Vektor {
	vector<double> daten;
	explicit Vektor(const Komplex& k) {
		cout << "Konstruktor Vektor\n";
		daten.push_back(k.re);
		daten.push_back(k.im);
	}
	string text() const;
};

int main() {
	Komplex k = Komplex{1.0};
	cout << "k = " << k.text() << endl;
	Vektor v1 = Vektor{k};
	cout << "v1 = " << v1.text() << endl;
	Vektor v2 = (Vektor)k;
	cout << "v2 = " << v2.text() << endl;
	Vektor v3 = Vektor{Komplex{2.0}};
	cout << "v3 = " << v3.text() << endl;
}

string Komplex::text() const {
	stringstream s;
	s << re << " + " << im << "i";
	return s.str();
}

string Vektor::text() const {
	stringstream s;
	s << "[ ";
	for(auto e : daten) {
		s << e << " ";
	}
	s << "]";
	return s.str();
}
