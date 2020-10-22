#include "Vec3.h"

Vec3::Vec3() : x(0), y(0), z(0)
{
	setMagnitude();
}

Vec3::Vec3(const float x, const float y, const float z) : x(x), y(y), z(z)
{
	setMagnitude();
}

Vec3::Vec3(const Vec3& vector) : x(vector.getX()), y(vector.getY()), z(vector.getZ())
{
	setMagnitude();
}

Vec3::~Vec3()
{
}

void Vec3::setMagnitude()
{
	magnitude = sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
}

void Vec3::print() const
{
	cout << "(" << x;
	cout << ", " << y;
	cout << ", " << z << "), ";
	cout << "Magnitude: " << magnitude << endl;
}

void Vec3::Normalize() {
	if (magnitude != 0) {
		x = x / magnitude;
		y = y / magnitude;
		z = z / magnitude;
	}
	setMagnitude();
}

float Vec3::distance_to(Vec3 vector) const
{
	return sqrt(pow(vector.getX() - x, 2) + pow(vector.getY() - y, 2) + pow(vector.getZ() - z, 2));
}

float Vec3::dot_product(Vec3 vector) const
{
	return (x * vector.getX() + y * vector.getY() + z * vector.getZ());
}

void Vec3::cross_product(Vec3 vector) const
{
	cout << "(" << (y * vector.getZ() - z * vector.getY()) << ", " << (z * vector.getX() - x * vector.getZ()) << ", " << (x * vector.getY() - y * vector.getX()) << ")" << endl;
}

float Vec3::angle_between(Vec3 vector) const
{
	if (dot_product(vector) / (magnitude * vector.getMagnitude())) {
		return 0;
	}
	return acos(dot_product(vector) / (magnitude * vector.getMagnitude())) * 180 / 3;
}

Vec3 Vec3::operator+(Vec3& vector)
{
	return Vec3(x + vector.getX(), y + vector.getY(), z + vector.getZ());
}
