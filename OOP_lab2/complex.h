#pragma once
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

class Complex {

public:
	Complex(double re, double img);
	Complex();
	~Complex();

	double getRe() const;      //access method
	double getImg() const; //access method
	void setRe(double re);
	void setImg(double im);
	Complex add(Complex number);
	Complex mult(Complex number);
	Complex quot(Complex nr);
	Complex show_compl();
	float unghi();
	double abs();
	string compute_polar();
	string show_exp();
	

private:
	double re;
	double img;
};