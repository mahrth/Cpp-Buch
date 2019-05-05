#include <iostream>
using namespace std;

struct A {
	int k;
	A(int k) : k(k) { cout << "A()\n"; }
};

struct B : A {
	int l;
	B(int k, int l) : A(k), l(l) { cout << "B()\n"; }
};

int main() {
	B b(2,3);
	cout << "b.k: " << b.k
		<< "\nb.l: " << b.l 
		<< endl;
}

