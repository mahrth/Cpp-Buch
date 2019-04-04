#include <iostream>
using namespace std;

const char* f() { 
	return "f()"; 
}
const char* f(int arg) { 
	return "f(int)"; 
}
const char* f(double arg) { 
	return "f(double)"; 
}
const char* f(int arg1, int arg2) { 
	return "f(int,int)"; 
}

int main() {
	int i=0, j=0;
	double d=0.0;
	cout << "f()    -> " << f();
	cout << "\nf(i)   -> " << f(i);
	cout << "\nf(d)   -> " << f(d);
	cout << "\nf(i,j) -> " << f(i,j);
}


