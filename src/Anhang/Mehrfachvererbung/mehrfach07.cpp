#include <iostream> 
using namespace std;

struct A
{
	A(){ cout << "A::A\n"; }
	virtual ~A() { cout << "~A::A\n"; }	
	virtual void f(){ cout << "A::f\n"; }
};

struct B
{
	B(){ cout << "B::B\n"; }
	virtual ~B(){ cout << "~B::B\n"; }
	virtual void f() {	 cout << "B::f\n"; }
};

struct C : A, B
{
	C(){	cout << "C::C\n"; }
	virtual ~C() { cout << "~C::C\n"; }
};

int main()
{
	C* c = new C;
	c->A::f();
	
	A* a = c;
	a->f();

	B* b = c;
	b->f();

	delete a;
}
