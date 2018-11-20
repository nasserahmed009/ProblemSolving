#include "pch.h"
#include "Cuboid.h"
#include <iostream>
using namespace std;

Cuboid::Cuboid(double l, double w, double h, double x, double y, double z):Shape3D(x,y,z)
{
	length = l;
	width = w;
	height = h;
}

double Cuboid::calculateArea() {
	double area = 2 * (length*width + width * height + height * length);
	return area;
}

double Cuboid::calculateVolume() {
	double volume = length*width*height;
	return volume;
}


//setters and getters here
void Cuboid::setLength(double l) {
	length = l;
}
double Cuboid::getLength() {
	return length;
}

void Cuboid::setWidth(double l) {
	width = l;
}
double Cuboid::getWidth() {
	return length;
}

void Cuboid::setHeight(double l) {
	height = l;
}
double Cuboid::getHeight() {
	return height;
}

void Cuboid::PrintInfo() {
	cout << "length = " << length << endl;
	cout << "Width = " << width << endl;
	cout << "Height = " << height << endl;
	cout << "Area = " << this->calculateArea() << endl;
	cout << "Volume = " << this->calculateVolume() << endl;
}


Cuboid::~Cuboid()
{
}
