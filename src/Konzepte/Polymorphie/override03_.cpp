#include <iostream>
using namespace std;

struct A {
	virtual void funktion() { 
		cout << "A\n"; 
	}
};

struct B : A {
	virtual void funktion() override { 
		cout << "B\n"; 
	}
};

int main() {
	B b;
	A* z = &b;
	z->funktion();
}
