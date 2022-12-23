#include <iostream>
#include "Ship.h"

using namespace std;


int main()
{
	Ship speedbaad, robaad("Robaad", 4, 5)/*, jolle(robaad)*/;

	speedbaad.show();
	robaad.show();
	//jolle.show();

	robaad.setPosition(7, -10);
	robaad.setType("Kajak");

	robaad.show();

	cout << endl << speedbaad.distance(robaad) << endl;
	cout << robaad.distance(speedbaad) << endl;

	int x, y;

	robaad.getPosition(x, y);

	cout << endl << "Position (" << x << ", " << y << ")\n\n";

	// Følgende kode kan give problemer, kommenter dem ud, hvis det er tilfældet
	// Løsningen kommer først i lektionerne om operator overload
	speedbaad = robaad;

	speedbaad.show();

	return 0;
}