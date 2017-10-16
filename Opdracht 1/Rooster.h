/*
Rooster.h
Sep 12, 2017
JustLaptop
*/
#include <iostream>
#include <string>
#ifndef ROOSTER_H_
#define ROOSTER_H_
using namespace std;

class Rooster {
private:
	int klasLokaal;
	string leraar;
	string vak;

public:
	Rooster();
	Rooster(int, string, string);
	~Rooster();
	// Access and Mutator methods
	void setKlasLokaal(int);
	int getKlasLokaal();
	void setLeraar(string);
	string getLeraar();
	void setVak(string);
	string getVak();
};
int main()
{
// ToDo place code here
return 0;
}
#endif /* ROOSTER_H_ */
