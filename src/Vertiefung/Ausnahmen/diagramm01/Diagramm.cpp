#include "Diagramm.h"
#include <fstream>
using namespace std;

void Diagramm::erstellen(const Signal& signal, const string& diagrammName) {
	const string dateinameWerte = diagrammName + ".dat";
	const string dateinameGnuplot = diagrammName + ".gp";
	const string dateinamePdf = diagrammName + ".pdf";
	signalSpeichern(signal, dateinameWerte);
	schreibeGnuplotParameter(dateinameGnuplot, dateinameWerte, dateinamePdf);
	starteGnuplot(dateinameGnuplot);
}

void Diagramm::signalSpeichern(const Signal& signal, const string& dateiname) {
	ofstream os(dateiname);
	for(int n=0; n<signal.laenge(); n++) {
		Abtastwert wert = signal.wert(n);/*§signal_wert§*/
		os << wert.t << " " << wert.amp.real() << " " << wert.amp.imag() << endl;
	}
	os.close();	
}

void Diagramm::schreibeGnuplotParameter(const string& dateinameParameter, const string& dateinameWerte, const string& dateinamePdf) {
	ofstream os(dateinameParameter);
	os << "set grid\n"
			<< "set title 'Signal'\n"/*§gnuplot_titel§*/
			<< "set xlabel 'Zeit'\n"/*§gnuplot_xlabel§*/
			<< "set ylabel 'Amplitude'\n"/*§gnuplot_ylabel§*/
			<< "set terminal pdf\n"/*§gnuplot_terminal§*/
			<< "set output '" << dateinamePdf << "'\n"/*§gnuplot_output§*/
			<< "plot '" << dateinameWerte << "' using 1:2 title 'real' lc rgb 'black' with linespoints"/*§gnuplot_plotreal§*/
			<< ",\\\n'" << dateinameWerte << "' using 1:3 title 'imag' lc rgb 'black' dashtype '-' with linespoints"/*§gnuplot_plotimag§*/
			<< endl
			;
	os.close();
}

void Diagramm::starteGnuplot(const string& dateiname) {
	string kommando = "gnuplot " + dateiname;
	int ret = system(kommando.c_str());
	if(ret!=0) {
		fehlerMelden("Fehler beim Ausführen von " + kommando);
	}	
}

void Diagramm::fehlerMelden(const std::string& meldung) {
	cerr << meldung;
}
