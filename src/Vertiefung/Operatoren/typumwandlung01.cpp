#include <iostream>
using namespace std;

struct A {};

struct  B {
	operator A() const { 
		cout << "operator A()\n";		
		return A(); 
	}
};

int main() {
	B b;
	A a;
	a = A(b);
}
