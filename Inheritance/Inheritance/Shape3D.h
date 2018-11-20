#pragma once
class Shape3D
{
	double x_ref;
	double y_ref;
	double z_ref;
	public:
		Shape3D(double x, double y, double z);
		virtual double calculateArea();
		virtual double calculateVolume();
		int compare(Shape3D* x);
		void TranslateShape(double x, double y, double z);
		void PrintInfo();
		~Shape3D();
};

