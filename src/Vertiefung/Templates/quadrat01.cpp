#include <iostream>
using namespace std;

#define COUT(x) (cout << #x " = " << (x) << '\n')

template <typename T> T quadrat(const T& x) 
{
	return x * x;
}

int main()
{
	COUT(quadrat<int>(8)); 
	COUT(quadrat<double>(8)); 

	COUT(quadrat(8));
	COUT(quadrat(1.5));
}
