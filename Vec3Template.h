#pragma once

#include <iostream>
#include <math.h>

using namespace std;

template <class T>
class Vec3Template {
public:
	/* Constructors */
	Vec3Template();
	Vec3Template(T _x, T _y, T _z);
	Vec3Template(const Vec3Template& vector);

public:
	/* Variables */
	T x, y, z;

	void print() const;

	/* Operations */
	float getMagnitude() const;
	void Normalize();
	float distance_to(const Vec3Template<T> vector) const;
	T dot_product(const Vec3Template<T> vector) const;
	Vec3Template<T> cross_product(const Vec3Template<T> vector) const;
	float angle_between(const Vec3Template<T> vector) const;

	/* Operators */
	Vec3Template<T> operator+(const Vec3Template& vector) const;
};

template<class T>
inline Vec3Template<T>::Vec3Template() : x(0), y(0), z(0) {}

template<class T>
Vec3Template<T>::Vec3Template(const T _x, const T _y, const T _z) : x(_x), y(_y), z(_z) {}

template<class T>
Vec3Template<T>::Vec3Template(const Vec3Template& vector) : x(vector.x), y(vector.y), z(vector.z) {}

template<class T>
void Vec3Template<T>::print() const {
	cout << "(" << x;
	cout << ", " << y;
	cout << ", " << z << ")";
}

template<class T>
inline float Vec3Template<T>::getMagnitude() const {
	return sqrt((x * x) + (y * y) + (z * z));
}

template<class T>
void Vec3Template<T>::Normalize() {
	float magnitude = getMagnitude();
	x = T(x / magnitude);
	y = T(y / magnitude);
	z = T(z / magnitude);
}

template<class T>
float Vec3Template<T>::distance_to(Vec3Template vector) const {
	return float (sqrt(
		(vector.x - x) * (vector.x - x) +
		(vector.y - y) * (vector.y - y) +
		(vector.z - z) * (vector.z - z)
	));
}

template<class T>
T Vec3Template<T>::dot_product(Vec3Template vector) const {
	return (
		x * vector.x +
		y * vector.y +
		z * vector.z
	);
}

template<class T>
Vec3Template<T> Vec3Template<T>::cross_product(Vec3Template vector) const {
	return  Vec3Template<T>(
		y * vector.z - z * vector.y,
		z * vector.x - x * vector.z,
		x * vector.y - y * vector.x
	);
}

template<class T>
float Vec3Template<T>::angle_between(Vec3Template vector) const {
	float angle = (dot_product(vector) / (getMagnitude() * vector.getMagnitude()));

	if (angle < -1) angle = -1;
	if (angle > 1) angle = 1;

	return float (acos(angle));
}

template<class T>
Vec3Template<T> Vec3Template<T>::operator+(const Vec3Template& vector) const {
	return Vec3Template<T>(x + vector.x, y + vector.y, z + vector.z);
}
