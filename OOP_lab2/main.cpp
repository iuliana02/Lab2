#include <iostream>
#include <string>
#include <cmath>
#include "complex.h"
using namespace std;

void erstellen()
{
	double a, b;
	cout << "Erstellen einige Objekte vom Typ Complex" << '\n';
	cout << "Reales Teil:";
	cin >> a;
	cout << "Imaginares Teil:";
	cin >> b;
	Complex nr1(a, b);
	cout << "Reales Teil:";
	cin >> a;
	cout << "Imaginares Teil:";
	cin >> b;
	Complex nr2(a, b);

	Complex r1 = nr1.show_compl();
	Complex r2 = nr2.show_compl();
	cout << r1.getRe() << r1.getImg() << "i" << endl;

}

int main()
{
	erstellen();
}