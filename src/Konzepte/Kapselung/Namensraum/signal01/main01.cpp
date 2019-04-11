#include "Signal.h"
#include "Prozessor.h"
#include <iostream>
using namespace std;

int main() {
	Signal ein;/*§signalEin§*/
	for(unsigned int i=0; i<3; i++) {
		ein.anhaengen(1+2*i);/*§SignalErstellen§*/
	}
	cout << "Eingang: " << ein.text();
	Prozessor prozessor;/*§prozessor§*/
	Signal aus = prozessor.verarbeiten(ein);/*§signalAus§*/
	cout << "\nAusgang: " << aus.text();
}
