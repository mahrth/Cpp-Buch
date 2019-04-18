#include <iostream>
using namespace std;

struct A/*§intA§*/ {
	virtual ~A() = default;/*§dtorA§*/ 
	virtual void f() = 0;/*§fA§*/
};

struct B : A {/*§intB§*/
	virtual void g() = 0;/*§gB§*/
};

struct C : A {/*§intC§*/
	virtual void h() = 0;/*§hC§*/
};

struct D : B, C {/*§classD§*/
	void f() override { cout << "D::f()\n"; }/*§fD§*/
	void g() override { cout << "D::g()\n"; }/*§gD§*/
	void h() override { cout << "D::h()\n"; }/*§hD§*/
};

int main() {
	D d;
	B* b = &d;/*§zeigerB§*/
	C* c = &d;/*§zeigerC§*/
	b->f();/*§aufrufBf§*/
	b->g();/*§aufrufBg§*/
	//b->h();/*§fehler1§*/
	c->f();/*§aufrufCf§*/
	c->h();/*§aufrufCh§*/
	//c->g();/*§fehler2§*/
}

