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
	return re;
}

//return imaginary part (getter)
double Complex::getImg() const
{
	return img;
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

