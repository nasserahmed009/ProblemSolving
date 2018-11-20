#include "pch.h"
#include "Shape3D.h"
#include<iostream>
using namespace std;

Shape3D::Shape3D(double x, double y, double z)
{
	x_ref = x;
	y_ref = y;
	z_ref = z;
}

double Shape3D::calculateArea() {
	return 0;
}

double Shape3D::calculateVolume() {
	return 0;
}

int Shape3D::compare(Shape3D* x) {
	if (this->calculateVolume() == x->calculateVolume()) {
		return 0;
	}
	else if(this->calculateVolume() > x->calculateVolume()) {
		return 1;
	}
	else {
		return -1;
	}
}

void Shape3D::TranslateShape(double x=0, double y=0, double z=0) {
	x_ref += x;
	y_ref += y;
	z_ref += z;
}

void Shape3D::PrintInfo() {
	cout << "X refrence =" << x_ref << endl;
	cout << "y refrence =" << y_ref << endl;
	cout << "z refrence =" << z_ref << endl;
}
Shape3D::~Shape3D()
{
}
