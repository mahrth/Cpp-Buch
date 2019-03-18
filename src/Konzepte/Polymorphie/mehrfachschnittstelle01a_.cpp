#include <iostream>
using namespace std;

struct A {
	virtual ~A() {} 
	virtual void f() = 0;
};

struct B {
	virtual ~B() {} 
	virtual void g() = 0;
};

struct C : A, B {
	void f() override { cout << "C::f\n"; }
	void g() override { cout << "C::g\n"; }
	void h() { cout << "C::h\n"; }
};

int main() {
	C c;
	A* a = &c;
	B* b = &c;
	c.f();
	c.g();
	c.h();
	a->f();
	//a->g();
	//a->h();
	//b->h();
	b->g();
	//b->h();
}

