#include<iostream>
#include "Rat.h"
using namespace std;

Rat::Rat() 
{
	n = 0;
	d = 1;
}

Rat::Rat(int i) 
{
	n = i;
	d = 1;

}

Rat::Rat(int i, int j) 
{
	n = i;
	d = j;
}

int Rat::getN() 
{ 
	return n;
}

int Rat::getD() 
{
	return d;
}

void Rat::setN(int i) 
{
	n = i;
}

void Rat::setD(int i) 
{
	d = i;
}

Rat Rat::operator+(Rat r) {
	Rat t;
	t.n = n * r.d + d * r.n;
	t.d = d* r.d;
	return t;
}

std::ostream& operator<<(std::ostream& os, Rat r)
{
	os<< r.n << "/" <<r.d << endl;
	return os;
}

std::istream& operator>>(std::istream& is, Rat r)
{
	is >> r.n >> r.d;
	return is;
}


