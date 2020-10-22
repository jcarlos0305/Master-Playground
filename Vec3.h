#pragma once
#include <iostream>
#include <math.h>

#define PI 3.14159265

using namespace std;

class Vec3
{

public:
	Vec3();
	Vec3(const float x, const float y, const float z);
	Vec3(const Vec3& vector);
	~Vec3();

private:
	float x, y, z, magnitude = 0;
	void setMagnitude();

public :
	inline float getX() const { return x; };
	inline float getY() const { return y; };
	inline float getZ() const { return z; };
	inline float getMagnitude() { return magnitude; };
	
	void print() const;

	void Normalize();
	float distance_to(Vec3 vector) const;
	float dot_product(Vec3 vector) const;
	void cross_product(Vec3 vector) const;
	float angle_between(Vec3 vector) const;

	Vec3 operator+(Vec3& vector);
};

