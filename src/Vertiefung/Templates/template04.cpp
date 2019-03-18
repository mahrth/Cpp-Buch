#include <iostream>
using namespace std;

template<typename T> 
class A {
private:
	T x;
public:
	A(const T& x);
	A(const A& a);
	template<typename S> A(const A<S>& a);
	template <typename S> friend ostream& operator<<(ostream&, const A<S>&);
	template <typename> friend class A;
};

template<typename T>
A<T>::A(const T& x) : x(x) {}

template<typename T>
A<T>::A(const A& a) : x(a.x) {}

template<typename T>
template<typename S> A<T>::A(const A<S>& a) : x(a.x) {}

int main() {
	A<double> a1{1.1};
	cout << "a1 = " << a1;
	A<double> a2{a1};
	cout << "\na2 = " << a2;
	A<int> a3{a1};
	cout << "\na3 = " << a3;
}

template<typename T>
ostream& operator<<(ostream& s, const A<T>& a) {
	s << a.x;
	return s;
}

