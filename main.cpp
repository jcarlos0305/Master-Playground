#include <stdio.h>
#include "Vec3.h"
#include "Vec3Template.h"
#include "String.h"

int main(int argc, const char* argv[])
{
	Vec3Template<float> a;
	Vec3Template<float> b(1, 0, 1);
	Vec3Template<float> c(b);
	Vec3Template<float> d = b + c;

	cout << "Vector a = "; a.print(); cout << endl;
	cout << "Vector b = "; b.print(); cout << endl;
	cout << "Vector c = "; c.print(); cout << endl;
	cout << "Vector d = "; d.print(); cout << endl;
	cout << endl;

	d.Normalize();

	cout << "The normalized vector is: "; d.print(); cout << endl;
	cout << "The distance between the vectors is: " << d.distance_to(b) << endl;
	cout << "The dot product of the vectors is: " << d.dot_product(b) << endl;
	cout << "The cross product of the vectors is: "; d.cross_product(b).print(); cout << endl;
	cout << "The angle between the vectors is: " << d.angle_between(b) << endl;

	return 0;
}