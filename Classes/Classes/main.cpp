#include <iostream>
#include "Trianglde.h"

bool operator >(Triangle  triangle1, Triangle triangle2) {
	if (triangle1.GetUpAngle() > triangle2.GetUpAngle()) {
		return true;
	}
	else {
		return false;
	}
}

int main()
{

	Triangle First = Triangle(
		"A",
		Vector2(10.f, 10.f),
		Vector2(20.f, 20.f),
		30
	);

	Triangle Second = Triangle(
		"B",
		Vector2(50.f, 50.f),
		Vector2(90.f, 90.f),
	    20
	);

	if (First > Second)
	{
		std::cout << "Triangle " << First.GetName() << "'s UpAngle is bigger";
	}
	else if(Second > First)
	{
		std::cout << "Triangle " << Second.GetName() << "'s UpAngle is bigger";
	}
	else
	{
		std::cout << "UpAngles of triangles are equal";
	}










}