#pragma once
#include <iostream>
#include <math.h>

#define PI 3.14159265

using namespace std;

template <class T>
class Vec3Template {
public:
	Vec3Template();
	Vec3Template(const T x, const T y, const T z);
	Vec3Template(const Vec3Template& vector);
	~Vec3Template();

private:
	T x, y, z, magnitude;
	void setMagnitude();

public:
	inline T getX() const { return x; };
	inline T getY() const { return y; };
	inline T getZ() const { return z; };
	inline T getMagnitude() { return magnitude; };

	void print() const;
	void Normalize();

	T distance_to(Vec3Template vector) const;
	T dot_product(Vec3Template vector) const;
	void cross_product(Vec3Template vector) const;
	T angle_between(Vec3Template vector) const;

	Vec3Template<T> operator+(Vec3Template& vector);
};
