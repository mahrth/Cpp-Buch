#include <iostream> 
using namespace std;

struct A
{
	A(){ cout << "A::A\n"; }
	virtual ~A() { cout << "~A::A\n"; }	
	virtual void f(){ cout << "A::f\n"; }
};

struct B : A 
{
	B(){ cout << "B::B\n"; }
	virtual ~B(){ cout << "~B::B\n"; }
};

struct C : A 
{
	C(){	cout << "C::C\n"; }
	virtual ~C() { cout << "~C::C\n"; }
};

struct D : B, C
{
	void f(){ B::f(); }
};

int main()
{
	D d;
	d.f();
	
	C* c = &d;
	c->f();
}
