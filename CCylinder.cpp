#include "CCylinder.h"

CCylinder::CCylinder(float width,float height):CVector(2,width,height)
{
}

CCylinder::~CCylinder()
{
}

void CCylinder::print()
{
	printf("Cylinder width is %.3f and height is %.3f\n",x[0],x[1]); 
}

CCylinder CCylinder::operator+(CCylinder a)
{
	CCylinder r(a[0],x[1]+a[1]);
	return r;
}
