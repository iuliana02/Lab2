#include <iostream>
#include <cmath>
#include <string>
#include "complex.h"
using namespace std;

Complex::Complex()
{
	re = 0;
	img = 0;
}

Complex::Complex(double re, double img)
{
	this->re = re;
	this->img = img;
}

//destructor
Complex::~Complex() 
{

}

//return real part (getter)
double Complex::getRe() const 
{
	return this->re;
}

//return imaginary part (getter)
double Complex::getImg() const
{
	return this->img;
}

//set real part (setter)
void Complex::setRe(double re)
{
	this->re = re;
}

//set imaginary part (setter)
void Complex::setImg(double img)
{
	this->img = img;
}

//Add 2 complex numbers
Complex Complex::add(Complex number)
{
	Complex sum;
	sum.setRe(this->getRe() + number.getRe());
	sum.setImg(this->getImg() + number.getImg());
	return sum;
}

//Multiply 2 complex numbers
//Formula pt inmultirea a 2 numere complexe: z1*z2 = (a1*a2 - b1*b2) + (a1*b2 + b1*a2)i
Complex Complex::mult(Complex number)
{
	Complex product;
	if (this->getImg() > 0.0 || number.getImg() > 0.0)
	{
		product.setRe(this->getRe() * number.getRe() - this->getImg() * number.getImg());
		product.setImg(this->getRe() * number.getImg() + this->getImg() * number.getRe());
	}
	else
	{
		product.setRe(this->getRe() * number.getRe() + this->getImg() * number.getImg());
		product.setImg(this->getRe() * number.getImg() - this->getImg() * number.getRe());
	}
}

//Division of 2 complex numbers
//Formula pt impartirea numerelor complexe: z1/z2= [(a1*a2+b1*b2)/(a2*a2+b2*b2)] + [(a2*b1-a1*b2)/(a2*a2+b2*b2)]i
Complex Complex::quot(Complex nr)
{
	Complex quotient;
	if (this->getImg() > 0.0 || nr.getImg() > 0.0)
	{
		quotient.setRe((this->getRe() * nr.getRe() + this->getImg() * nr.getImg()) / (nr.getRe() * nr.getRe() + nr.getImg() * nr.getImg()));
		quotient.setImg((this->getImg() * nr.getRe() - this->getRe() * nr.getImg()) / (nr.getRe() * nr.getRe() + nr.getImg() * nr.getImg()));
	}
	else
	{
		quotient.setRe((this->getRe() * nr.getRe() + this->getImg() * nr.getImg()) / (nr.getRe() * nr.getRe() + nr.getImg() * nr.getImg()));
		quotient.setImg((this->getImg() * nr.getRe() + this->getRe() * nr.getImg()) / (nr.getRe() * nr.getRe() + nr.getImg() * nr.getImg()));
	}
	return quotient;
}

//Modulul unui nr complex
//Formula: |z|= radical din (a^2+b^2)
double Complex::abs()
{
	double modul;
	modul = sqrt( (this->getRe * this->getRe()) + (this->getImg() * this->getImg()));
	return modul;
}