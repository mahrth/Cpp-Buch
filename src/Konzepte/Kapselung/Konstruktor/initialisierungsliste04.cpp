#include <iostream>
using namespace std;

struct A {
	int k;
	A(int k) : k(k) {
		cout << "A(int)\n";
	}
};

struct B {
	A a;
	B(int i) : a(2*i) {}
};

int main() {
	B b{3};
}

