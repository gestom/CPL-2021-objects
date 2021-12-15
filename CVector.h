#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <cstdarg>

class CVector
{
	public:
		CVector();
		CVector(int l,...);
		CVector(const CVector &a);
		~CVector();
		int getLength();
		void print();
		float getElementValue(int i);
		void setElementValue(int i,float x);
		CVector operator+(CVector a);
		float& operator[](int i);

	private:
		float *x;
		int length;
};

