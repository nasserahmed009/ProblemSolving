#pragma once
#include "Shape3D.h"
class Sphere :
	public Shape3D
{
	double radius;
public:
	Sphere(double r, double x, double y, double z);
	double calculateArea();
	double calculateVolume();
	void setRadius(double r);
	double getRadius();
	void PrintInfo();

	~Sphere();
};

