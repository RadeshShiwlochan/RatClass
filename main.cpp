#include<iostream>
#include "Rat.h"
using namespace std;

int main()
{
	Rat x(1,2), y(2,3),z;
	z = x + y;
	cout << z;

	x.setN(3);
	y.setD(2);
	z = x + y;
	cout << z;

	cin >> x;
	cout <<x;

	z = x + 5;
	cout << z;
	return 0;
}