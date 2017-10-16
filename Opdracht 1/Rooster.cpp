#include "Rooster.h"
#include <iostream>
using namespace std;

//Default constructor
Rooster::Rooster(){
	klasLokaal = 0;
	vak = "";
	leraar = "";
}

Rooster::Rooster(int lokaal, string vak, string leraar){
	klasLokaal = lokaal;
	while (lokaal < 0 || lokaal > 310) {
		cout<<"Invalid classroom, please re-enter between 0 and 310";
		cin>>klasLokaal;
		cin.ignore();
	}
	this->vak = vak;
	this->leraar = leraar;
}

//Destructor
Rooster::~Rooster(){
}

int Rooster::getKlasLokaal(){
	return klasLokaal;
}
void Rooster::setKlasLokaal(int lokaal){
	klasLokaal = lokaal;
	while (lokaal < 0 || lokaal > 310) {
		cout<<"Invalid classroom, please re-enter between 0 and 310";
		cin>>lokaal;
		cin.ignore();
	}
}
string Rooster::getVak(){
	return vak;
}
void Rooster::setVak(string vak){
	this->vak = vak;
}
string Rooster::getLeraar(){
	return leraar;
}
void Rooster::setLeraar(string leraar){
	this->leraar = leraar;
}
