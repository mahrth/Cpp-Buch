#include <iostream>
using namespace std;

struct A {
	~A() { cout << "Destruktor\n"; }/*§dtor1A§*/
};

int main() {
	A* z = new A;
	delete[] z;
}