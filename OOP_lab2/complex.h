#pragma once
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

class Complex {

private:
	double re;
	double img;

public:
	Complex(double re, double img);
	Complex(); //constructor
	~Complex(); //destructor
	double getRe() const; //gettere
	double getImg() const; 
	void setRe(double re); //settere 
	void setImg(double im);
	Complex show_compl();
	string show_exp();
	Complex add(Complex number);
	Complex mult(Complex number);
	Complex quot(Complex nr);
	double abs();
	string compute_polar();
};