struct Komplex {
	double re, im;
	explicit Komplex(double re=0, double im=0) : re(re), im(im) {}
};

Komplex operator*(const Komplex& a, const Komplex& b) {
	return Komplex{a.re*b.re - a.im*b.im, a.re*b.im + a.im*b.re};
}

Komplex operator*(const Komplex& a, double d) {
	return Komplex{a.re*d, a.im*d};
}

Komplex operator*(double d, const Komplex& a) {
	return Komplex{a.re*d, a.im*d};
}

int main() {
	Komplex a1{2,3}, a2{4,5}, a3;
	a3 = a1 * a2;
	a3 = a1 * 2.0;
	a3 = 3.0 * a2;
}


