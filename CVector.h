#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <cstdarg>

class CVector
{
	public:
		CVector();
		CVector(int l,...);
		~CVector();
		int getLength();
		void print();
		float getElementValue(int i);
		void setElementValue(int i,float x);
		CVector add(CVector a);

	protected:
		float *x;
		int length;
};

