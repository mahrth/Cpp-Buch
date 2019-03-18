#include <iostream> 
using namespace std;

struct A
{
	A(){ cout << "A::A\n"; }
	virtual ~A() { cout << "~A::A\n"; }	
	virtual void f() = 0;
};

struct B : A 
{
	B(){ cout << "B::B\n"; }
	virtual ~B(){ cout << "~B::B\n"; }
	virtual void f() override {	 cout << "B::f\n"; }
};

struct C : A 
{
	C(){	cout << "C::C\n"; }
	virtual ~C() { cout << "~C::C\n"; }
	virtual void f() override{ cout << "C::f\n"; }
};

struct D : B, C
{
	using B::f;
};

int main()
{
	D d;
	d.f();
}
