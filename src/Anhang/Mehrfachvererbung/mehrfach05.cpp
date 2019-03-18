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
	void f()
	{
		std::cout << "B::f\n";
	}
};

struct C : A, B
{
	using A::f;
};

int main()
{
	C c;
	c.f();
}
