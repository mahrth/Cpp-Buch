#include <iostream> 

struct A
{
	void f()
	{ 
		std::cout << "A::f\n";
	}
};

struct B
{
	void g()
	{
		std::cout << "B::g\n";
	}
};

struct C : A, B
{
};

int main()
{
	C c;
	c.f();
	c.g();
}
