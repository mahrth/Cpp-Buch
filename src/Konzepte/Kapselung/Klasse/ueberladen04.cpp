#include <iostream>
#include <string>
using namespace std;

struct A {
	string f() { return "A::f()"; }
	string f(int arg) { return "A::f(int)"; }
};
	
string f() { return "f()"; }
string f(int arg) { return "f(int)"; }

int main() {
	int i=0;
	cout << "f()    -> " << f() << endl;
	cout << "f(i)   -> " << f(i) << endl;
	A a;
	cout << "a.f()  -> " << a.f() << endl;
	cout << "a.f(i) -> " << a.f(i) << endl;
}


