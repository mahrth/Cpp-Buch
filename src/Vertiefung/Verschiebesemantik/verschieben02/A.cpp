#include "A.h"
using namespace std;

A::A(const A& a) : v(a.v) { 
	cout << "A(const A&)\n"; 
}

A::A(A&& a) : v(a.v) {
	cout << "A(A&&)\n";	
}

A& A::operator=(const A& a) {
	cout << "operator=(const A&)\n";
	v = a.v;
	return *this;
}

A& A::operator=(A&& a) {
	cout << "operator=(A&&)\n";
	v = a.v;
	return *this;
}

void A::tauschePerKopie(A& a, A& b) {
	cout << "Betrete tauschePerKopie\n";
	A tmp(a);
	a = b;
	b = tmp;
	cout << "Verlasse tauschePerKopie\n";
}

void A::tauschePerVerschiebung(A& a, A& b) {
	cout << "Betrete tauschePerVerschiebung\n";
	A tmp(move(a));
	a = move(b);
	b = move(tmp);
	cout << "Verlasse tauschePerVerschiebung\n";
}

ostream& operator<<(ostream& os, const A& a) {
	os << "[ ";
	for(auto e : a.v) { os << e << " "; }
	os << "]";
	return os;
}

