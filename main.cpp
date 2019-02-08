/*
 * main.cpp
 *
 *  Created on: Feb 6, 2019
 *      Author: mduffy
 */

#include<iostream>
using namespace std;
int main(){
	float a,b,c, floatEps;
	a = 4.0/3.0;
	b = a - 1.0;
	c = b + b+ b;
	floatEps = abs(c-1.0);

	cout<< "single precision: "<<floatEps<<endl;
	double aD,bD,cD,doubleEps;
	aD = 4.0/3.0;
	bD = aD - 1.0;
	cD = bD+bD+bD;
	doubleEps = abs(cD-1.0);
	cout<<"double precision: "<<doubleEps<<endl;
}

