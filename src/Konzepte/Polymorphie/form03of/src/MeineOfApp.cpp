#include "MeineOfApp.h"
#include "Vektor.h"
#include "WeltImpl.h"

void MeineOfApp::setup() {/*§setup§*/
	ofBackground(255, 255, 255);/*§ofBackground§*/
	ofSetWindowTitle("form03of");/*§ofSetWindowTitle§*/
	ofSetFrameRate(60);/*§ofSetFrameRate§*/
	const int anzahlFormen = 100;
	const double breite = ofGetViewportWidth();/*§ofGetViewportWidth§*/
	const double hoehe = ofGetViewportHeight();/*§ofGetViewportHeight§*/
	const Vektor abmessung{breite, hoehe};/*§abmessung§*/
	welt = new WeltImpl{abmessung, anzahlFormen};/*§welt§*/
}

void MeineOfApp::update() {/*§update§*/
	welt->naechsterSchritt(dt);
}

void MeineOfApp::draw() {/*§draw§*/
	welt->anzeigen();
}

void MeineOfApp::exit() {/*§exit§*/
	if(welt!=nullptr) {
		delete welt;/*§delete§*/
	}
}
