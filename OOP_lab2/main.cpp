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
	cout << r1.getRe() <<"+"<< r1.getImg() << "i" << endl;
	cout << r2.getRe() <<"+"<< r2.getImg() << "i" << endl;


	Complex nr3(2, 9);
	Complex r3 = nr3.show_compl();
	Complex nr4(7, 3.2);
	Complex r4 = nr4.show_compl();
	Complex nr5(11.4, 16);
	Complex r5 = nr5.show_compl();
}

int main()
{
	erstellen();
}