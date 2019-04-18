#include <iostream>
#include <string>
using namespace std;

struct Singvogel {/*§Singvogel§*/	
	virtual string singen() const /*§abstract*/= 0/*§*/;
	virtual ~Singvogel() = default;/*§dtorSingvogel§*/	
};

struct Nachtigall : Singvogel {/*§Nachtigall§*/
	string singen() const override {/*§singen2§*/	
		return "Gesang der Nachtigall";
	}	
};

struct Blaumeise : Singvogel {/*§Blaumeise§*/
	string singen() const override {/*§singen3§*/	
		return "Gesang der Blaumeise";
	}	
};

int main() {
	//Singvogel singvogel;/*§fehler§*/
	Singvogel* singvogel = new Nachtigall;/*§singvogel2§*/
	cout << singvogel->singen();/*§singvogel3§*/
	delete singvogel;
}
