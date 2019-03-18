#include <iostream>
using namespace std;

template<typename T>
struct A {
	T x;
	A(const T& x) : x(x) {}
	A(const A& a) : x(a.x) {}
};

template<typename T>
ostream& operator<<(ostream& s, const A<T>& a) {
	s << a.x;
	return s;
}

int main() {
	A<double> a1{1.1};
	cout << "a1 = " << a1;
	A<double> a2{a1};
	cout << "\na2 = " << a2;
	//A<int> a3{a1};
}
