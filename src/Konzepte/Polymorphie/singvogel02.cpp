#include <iostream>
#include <string>
using namespace std;

struct Singvogel {	
	virtual string singen() const {	
		return "?";
	}	
};

struct Nachtigall : Singvogel {
	string singen() const {	
		return "Gesang der Nachtigall";
	}	
};

struct Blaumeise : Singvogel {
	string singen() const {	
		return "Gesang der Blaumeise";
	}	
};

void f(const Singvogel& singvogel) {	
	cout << "Der Singvogel singt: " << singvogel.singen();
}

int main() {
	Nachtigall nachtigall;
	f(nachtigall);	
}
