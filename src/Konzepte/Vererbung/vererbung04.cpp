#include <iostream>
using namespace std;

struct A {
	int k;
	A(int k) : k(k) {}
};

struct B : A {
	int l;
	B(int k, int l) : A(k), l(l) {}
};

int main() {
	A a(1);
	B b(2,3);
	cout << "a.k=" << a.k << ", b.k=" << b.k << ", b.l=" << b.l
		<< "\nsizeof(int): " << sizeof(int)
		<< "\nsizeof(a): " << sizeof(a) 
		<< "\nsizeof(b): " << sizeof(b)
		<< "\n&b: " << &b
		<< "\n&b.k: " << &b.k
		<< "\n&b.l: " << &b.l;
}

