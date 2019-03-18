#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

class Vektor  {
private:
	int* werte; 
	unsigned int laenge;
	unsigned int schreibPosition;
public:	
	Vektor(const unsigned int laenge)  { 
		cout << "Vektor()\n";
		this->laenge = laenge;
		werte = new int[laenge]; 
		schreibPosition = 0;
	}	
	Vektor(const Vektor& v) : laenge(v.laenge), schreibPosition(v.schreibPosition) {
		werte = new int[laenge]; 
		for(unsigned int i=0; i<laenge; i++) {
			this->werte[i] = v.werte[i];
		}		
	}
	virtual ~Vektor() {
		cout << "~Vektor()\n";
		delete[] werte;	
	}	
	void anhaengen(int wert)  { 
		if(schreibPosition<laenge) {
			werte[schreibPosition++] = wert; 
		}
	}
	string text() const {
		stringstream s;
		s << "( ";
		for(unsigned int i=0; i<laenge; i++) 	{
			s << werte[i] << " ";
		}
		s << ")";
		return s.str();
	}
};

int main() {
	Vektor a{3}; 
	a.anhaengen(10);
	a.anhaengen(20);
	cout << "a = " << a.text() << endl;
	
	Vektor b{a}; 
	cout << "b = " << b.text() << endl;
	
	b.anhaengen(30); 
	cout << "b = " << a.text() << endl;
	cout << "a = " << a.text() << endl;
	cout << "ENDE\n"; 
} 
