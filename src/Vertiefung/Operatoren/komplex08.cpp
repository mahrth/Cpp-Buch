#include <cmath>
#include <iostream>
using namespace std;

struct  Komplex {
	double re, im;
	explicit Komplex(double re=0, double im=0) : re(re), im(im) {}
	operator double() const {
		cout << "\noperator double()";
		return sqrt(re*re+im*im);
	}
};

ostream& operator<<(ostream&, const Komplex&);

int main() {
	Komplex k{3,4};
	cout << "k = " << k;
	double d = (double)k;
	cout << "\n|k| = " << d;
	d = double(k);
	d = k;
	int i = k;
}

ostream& operator<<(ostream& os, const Komplex& k) {
	os << k.re << " + " << k.im << "i";
	return os;
}
