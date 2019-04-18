#include "MeineOfApp.h"
#include "Vektor.h"
#include "WeltImpl.h"

void MeineOfApp::setup() {
	ofBackground(255, 255, 255);
	ofSetWindowTitle("form03of");
	ofSetFrameRate(60);
	const int anzahlFormen = 100;
	const double breite = ofGetViewportWidth();
	const double hoehe = ofGetViewportHeight();
	const Vektor abmessung{breite, hoehe};
	welt = new WeltImpl{abmessung, anzahlFormen};
}

void MeineOfApp::update() {
	welt->naechsterSchritt(dt);
}

void MeineOfApp::draw() {
	welt->anzeigen();
}

void MeineOfApp::exit() {
	if(welt!=nullptr) {
		delete welt;
	}
}
