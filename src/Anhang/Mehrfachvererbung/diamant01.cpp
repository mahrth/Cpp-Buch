#include <iostream> 
using namespace std;

struct A
{
	A(){ cout << "A::A\n"; }
	virtual ~A() { cout << "~A::A\n"; }	
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
};

int main()
{
	D d;
}
