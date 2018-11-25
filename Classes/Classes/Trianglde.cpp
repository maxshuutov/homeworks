#include "Trianglde.h"

Triangle::Triangle(std::string name, Vector2 pointB, Vector2 pointC, float upAngle)
{

	Name = name;
	PointB = pointB;
	PointC = pointC;
	UpAngle = upAngle;

}


float Triangle::GetUpAngle()
{
	return UpAngle;
}

std::string Triangle::GetName()
{
	return Name;
}