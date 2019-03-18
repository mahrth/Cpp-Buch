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
};

int main()
{
	C c;
	dynamic_cast<A&>(c).f();
	dynamic_cast<B&>(c).f();
}
