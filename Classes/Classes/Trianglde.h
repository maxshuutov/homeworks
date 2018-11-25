#pragma once
#include <iostream>
#include <vector>
#include <string>

struct Vector2
{
	Vector2() {
		(*this).x = 0.f;
		(*this).y = 0.f;
	};

	Vector2(float x, float y) {
		(*this).x = x;
		(*this).y = y;
	};
	float x;
	float y;
};

class Triangle {
public:
	Triangle(std::string name, Vector2 pointB, Vector2 pointC, float upAngle);
	float GetUpAngle();
	std::string GetName();





private:
	std::string Name;
	float UpAngle;
	Vector2 PointB;
	Vector2 PointC;










};