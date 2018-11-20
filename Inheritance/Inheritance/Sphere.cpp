#include "pch.h"
#include "Sphere.h"
#include <iostream>
using namespace std;

Sphere::Sphere(double r, double x, double y, double z):Shape3D(x,y,z){
	radius = r;
}

double Sphere::calculateArea() {
	double area = 4 *(22.0/7)*radius*radius;
	return area;
}

double Sphere::calculateVolume() {
	double volume = (4/3) * (22.0 / 7) * radius*radius*radius;
	return volume;
}

//setters and getters
void Sphere::setRadius(double r) {
	radius = r;
}
double Sphere::getRadius() {
	return radius;
}

void Sphere::PrintInfo() {
	cout << "Radius = " << radius << endl;
	cout << "Area = " << this->calculateArea() << endl;
	cout << "Volume = " << this->calculateVolume() << endl;
}
Sphere::~Sphere()
{
}
