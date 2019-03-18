#include <iostream>
#include <sstream>
using namespace std;

template <typename T> T quadrat(const T&);
string quadrat(string&);

inline string quadrat(const string& x) {
	string s(x);
	return quadrat(s);
}

int main() {
	cout << "quadrat(3): " << quadrat(3);
	cout << "\nquadrat(1.5): " << quadrat(1.5);
	cout << "\nquadrat(\"2.5\"): " << quadrat("2.5");
}

template <typename T> T quadrat(const T& x) {/*§quadrat1def§*/
	return x * x;
}

string quadrat(string& x) {/*§quadrat2def§*/
	double d = stod(x);
	return to_string(d*d);
}


