#include <iostream> 
using namespace std;

void f1(int i) {/*§wert1§*/  
	cout << "f1(int):  i=" << i << ", Adresse des Wertes: " << &i << endl;
}

void f2(int* z) {/*§zeiger1§*/ 
	cout << "f2(int*): *z=" << *z << ", Wert des Zeigers: " << z << endl;
}

void f3(int& r) {/*§referenz1§*/ 
	cout << "f3(int&): r" << r << ", Adresse der Referenz: " << &r << endl;
}

int main() {
	int i = 12;
	cout << "Wert von i: " << i << ", Adresse von i: " << &i << endl;
	f1(i);/*§wert2§*/ 
	f2(&i);/*§zeiger2§*/ 
	f3(i);/*§referenz2§*/ 
}
