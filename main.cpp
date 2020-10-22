#include <stdio.h>
#include "Vec3.h"
#include "Vec3Template.h"
#include "Vec3Template.cpp"

int main(int argc, const char* argv[])
{
	/*
		Vec3 a = Vec3();
		Vec3 b = Vec3(1, 0, 1);
		Vec3 c = Vec3(b);
		Vec3 d = b + c;

		cout << "Vector a = ";a.print();
		cout << "Vector b = ";b.print();
		cout << "Vector c = ";c.print();
		cout << "Vector d = ";d.print();
		cout << endl;

		d.Normalize();
		cout << "The normalized vector is: "; d.print();
		cout << "The distance between the vectors is: " << d.distance_to(b) << endl;
		cout << "The dot product of the vectors is: " << d.dot_product(b) << endl;
		cout << "The cross product of the vectors is: "; d.cross_product(b);
		cout << "The angle between the vectors is: " << d.angle_between(b) << endl;
	*/

	Vec3Template<int> a;
	Vec3Template<int> b (1, 0, 1);
	Vec3Template<int> c (b);
	Vec3Template<int> d = b + c;

	cout << "Vector a = "; a.print();
	cout << "Vector b = "; b.print();
	cout << "Vector c = "; c.print();
	cout << "Vector d = "; d.print();
	cout << endl;

	d.Normalize();

	cout << "The normalized vector is: "; d.print();
	cout << "The distance between the vectors is: " << d.distance_to(b) << endl;
	cout << "The dot product of the vectors is: " << d.dot_product(b) << endl;
	cout << "The cross product of the vectors is: "; d.cross_product(b);
	cout << "The angle between the vectors is: " << d.angle_between(b) << endl;

	return 0;
}