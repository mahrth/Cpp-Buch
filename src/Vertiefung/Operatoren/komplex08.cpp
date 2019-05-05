#include <cmath>
#include <iostream>
using namespace std;

struct  Komplex {
	double re, im;
	explicit Komplex(double re=0, double im=0) : re(re), im(im) {}
	operator double() const {
		cout << "operator double()\n";
		return sqrt(re*re+im*im);
	}
	operator string() const { 
		cout << "operator string()\n";
		return to_string(re) + " + " + to_string(im) + "i"; 
	}
};

ostream& operator<<(ostream&, const Komplex&);

int main() {
	Komplex k{3,4};
	cout << "k = " << k << endl;
	double d = (double)k;
	cout << "|k| = " << d << endl;
	d = double(k);
	d = k;
	int i = k;
	string s = k;
	cout << "s = " << s << endl;
}

ostream& operator<<(ostream& os, const Komplex& k) {
	os << k.re << " + " << k.im << "i";
	return os;
}
