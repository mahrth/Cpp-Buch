#include <iostream>
#include <sstream>
using namespace std;

template <typename T> T quadrat(const T&);
string quadrat(string&);

int main() {
	cout << quadrat(3);
	cout << quadrat(1.5);
	//cout << quadrat("2.5");
}

template <typename T> T quadrat(const T& x) {
	return x * x;
}

string quadrat(string& x) {
	double d = stod(x);
	return to_string(d*d);
}

