#include "Stern.h"
#include <sstream>
using namespace std;

string Stern::text() const {
	stringstream s;
	s << Himmelskoerper::text() << ", " << _fusionsleistung << " W";
	return s.str();
}
