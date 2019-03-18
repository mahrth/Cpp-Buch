#include "Prozessor.h"

Signal Prozessor::verarbeiten(const Signal& eingang) const{
	Signal ausgang;
	for(unsigned int i=0; i<eingang.anzahl(); i++) {
		ausgang.anhaengen(-eingang.wert(i));
	}
	return ausgang;		
}
