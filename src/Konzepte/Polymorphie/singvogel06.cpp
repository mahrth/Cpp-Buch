#include <iostream>
#include <string>
using namespace std;

struct Singvogel {	
	virtual string singen() const = 0;
	virtual ~Singvogel() {}	
};

struct Nachtigall : Singvogel {
	string singen() const override {	
		return "Gesang der Nachtigall";
	}	
};

struct Blaumeise : Singvogel {
	string singen() const override {	
		return "Gesang der Blaumeise";
	}	
};

int main() {
	//Singvogel singvogel;
	Singvogel* singvogel = new Nachtigall;
	cout << singvogel->singen();
	delete singvogel;
}
