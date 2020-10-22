#include "Vec3Template.h"

template<class T>
inline Vec3Template<T>::Vec3Template() : x(0), y(0), z(0)
{
	setMagnitude();
}

template<class T>
Vec3Template<T>::Vec3Template(const T x, const T y, const T z) : x(x), y(y), z(z) {
	setMagnitude();
}

template<class T>
Vec3Template<T>::Vec3Template(const Vec3Template& vector) : x(vector.getX()), y(vector.getY()), z(vector.getZ()) {
	setMagnitude();
}

template<class T>
Vec3Template<T>::~Vec3Template() {
}

template<class T>
void Vec3Template<T>::setMagnitude() {
	magnitude = sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
}

template<class T>
void Vec3Template<T>::print() const {
	cout << "(" << x;
	cout << ", " << y;
	cout << ", " << z << "), ";
	cout << "Magnitude: " << magnitude << endl;
}

template<class T>
void Vec3Template<T>::Normalize() {
	if (magnitude != 0) {
		x = x / magnitude;
		y = y / magnitude;
		z = z / magnitude;
	}
	setMagnitude();
}

template<class T>
T Vec3Template<T>::distance_to(Vec3Template vector) const
{
	return sqrt(pow(vector.getX() - x, 2) + pow(vector.getY() - y, 2) + pow(vector.getZ() - z, 2));
}

template<class T>
T Vec3Template<T>::dot_product(Vec3Template vector) const
{
	return (x * vector.getX() + y * vector.getY() + z * vector.getZ());
}

template<class T>
void Vec3Template<T>::cross_product(Vec3Template vector) const
{
	cout << "(" << (y * vector.getZ() - z * vector.getY()) << ", " << (z * vector.getX() - x * vector.getZ()) << ", " << (x * vector.getY() - y * vector.getX()) << ")" << endl;
}

template<class T>
T Vec3Template<T>::angle_between(Vec3Template vector) const
{
	if (dot_product(vector) / (magnitude * vector.getMagnitude())) {
		return 0;
	}
	return acos(dot_product(vector) / (magnitude * vector.getMagnitude())) * 180 / 3;
}

template<class T>
Vec3Template<T> Vec3Template<T>::operator+(Vec3Template& vector)
{
	return Vec3Template<T>(x + vector.getX(), y + vector.getY(), z + vector.getZ());
}
