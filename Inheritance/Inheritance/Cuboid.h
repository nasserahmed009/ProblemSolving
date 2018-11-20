#pragma once
#include "Shape3D.h"
class Cuboid :
	public Shape3D
{
	double length;
	double width;
	double height;
public:
	Cuboid(double l, double w, double h, double x, double y, double z);
	double calculateArea();
	double calculateVolume();

	void setLength(double l);
	double getLength();

	void setWidth(double l);
	double getWidth();

	void setHeight(double l);
	double getHeight();

	void PrintInfo();
	~Cuboid();
};

