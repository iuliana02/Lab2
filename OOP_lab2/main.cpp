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
}

void sortieren()
{
	int n, i, j;
	double lista_modul[20], img, r;
	Complex c1, sir[30];
	cout << "Wie viele Zahlen mochten sie haben?" << endl;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cout << "Reales Teil: ";
		cin >> r;
		cout << "Imaginares Teil: ";
		cin >> img;
		c1.setRe(r);
		c1.setImg(img);
		sir[i] = c1;
	}
	cout << "Komplexe Zahlen sind: " << endl;
	for (i = 0; i <= n - 1; i++)
		if (sir[i].getImg() > 0)
			cout << sir[i].getRe() << "+" << sir[i].getImg() << "i" << endl;
		else
			cout << sir[i].getRe() << sir[i].getImg() << "i" << endl; //le afisez
	for (i = 0; i <= n - 1; i++) //calculez modulul fiecarui numar complex si il pun intr-un vector numit lista_modul
		lista_modul[i] = sir[i].abs();
	for (i = 0; i < n - 1; i++) //sortez crescator modulele numerelor
		for (j = i + 1; j < n; j++)
			if (lista_modul[i] > lista_modul[j])
			{
				double auxiliar;
				auxiliar = lista_modul[i];
				lista_modul[i] = lista_modul[j];
				lista_modul[j] = auxiliar;
			}
	cout << "die Module der sortierten Zahlen sind: "<<endl; //afisez modulele sortate crescator pe ecran
	for (i = 0; i < n; i++)
		cout << lista_modul[i] << " " << endl;
	cout << "die Komplexe zahlen sortiert sind:  ";
	for (i = 0; i < n; i++) //afisez numerele complexe sortate crescator in functie de modulul lor
		for (j = 0; j < n; j++)
			if (lista_modul[i] == sir[j].abs())
				if (sir[j].getImg() < 0)
					cout << sir[j].getRe() << sir[j].getImg() << "i  " << endl;
				else
					cout << sir[j].getRe() << "+" << sir[j].getImg() << "i  " << endl;
	cout << "die Gesamtsumme der Reihe: ";
	double suma_real = 0, suma_imaginar = 0;
	for (i = 0; i < n; i++) //calculez suma tuturor numerelor complexe citite anterior de la tastatura
		suma_real = suma_real + sir[i].getRe();
	for (i = 0; i < n; i++)
		suma_real = suma_real + sir[i].getImg();
	if (suma_imaginar > 0)
		cout << suma_real << "+" << suma_imaginar << "i" << endl; //afisez suma pe ecran 
	else
		cout << suma_real << suma_imaginar << "i" << endl;
}
void test_summe()
{
	Complex nr1 = Complex(-3, -6);
	Complex nr2 = Complex(3, 6);
	Complex rez = nr1.add(nr2);
	if (rez.getRe() == 0 && rez.getImg() == 0)
		cout << "Test1 ist ok"<<endl;
	Complex nr3 = Complex(-2, -2);
	Complex nr4 = Complex(9, 3);
	Complex rez2 = nr3.add(nr4);
	if (rez2.getRe() == 7 && rez2.getImg() == 1)
		cout << "Test2 ist ok!";
}

int main()
{
	erstellen();
	sortieren();
	cout << "TESTE"<<endl;
	test_summe();
	return 0;
}