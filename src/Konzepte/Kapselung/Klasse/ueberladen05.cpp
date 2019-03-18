#include <iostream>
using namespace std;

struct A {
	void f() { 
		cout << "void f()\n"; 
	}
	void f() const { 
		cout << "void f() const\n"; 
	}
};

int main() {
	A a1;
	cout << "A a1        ->  ";
	a1.f();
	
	const A a2;
	cout << "const A a2  ->  ";
	a2.f();
}
