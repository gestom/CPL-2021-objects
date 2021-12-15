#include "CVector.h"

CVector::CVector(int l,...)
{
	length = l;
	x = (float *) malloc(l*sizeof(float));
	va_list valist;
	va_start(valist,l);
	for (int i = 0; i < length;i++) x[i] = va_arg(valist,double);
	va_end(valist); 
}

CVector::~CVector()
{
	free(x);
}

float CVector::getElementValue(int i)
{
	if (i < 0 || i >= length)
	{
		throw "Out of range at Vector";
	}
	return x[i];
}

void CVector::setElementValue(int i,float v)
{
	if (i < 0 || i >= length)
	{
		throw std::out_of_range("Out of range at Vector::set");
	}
	x[i] = v;
}

float& CVector::operator[](int i)
{
	if (i < 0 || i >= length)
	{
		throw "Out of range at Vector";
	}
	return x[i];
}


int CVector::getLength()
{
	return length;
}

void CVector::print()
{
	printf("Vector contains "); 
	for (int i = 0;i<length;i++) printf("%.3f,",x[i]); 
	printf("\n"); 
}

CVector CVector::add(CVector a)
{
	CVector r(a.getLength());
	for (int i = 0; i < length;i++) r.x[i] = x[i] + a.x[i];
	return r;
}


