#include <iostream>
using namespace std;

//const char* f(int* const i) { return "f(int* const)"; }
const char* f(int const* const i) { return "f(int const* const)"; }

int main() {
	int i;
	int* z = &i;
	int const* zc = &i;
	int* const cz = &i;
	int const* const czc = &i;
	cout << "int*             -> " << f(z);
	cout << "\nint const*       -> " << f(zc);
	cout << "\nint* const       -> " << f(cz);
	cout << "\nint const* const -> " << f(czc);
}


