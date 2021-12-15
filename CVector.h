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
		virtual void print();
		float getElementValue(int i);
		void setElementValue(int i,float x);
		virtual CVector operator+(CVector a);
		void operator=(CVector a);
		float& operator[](int i);

	protected:
		float *x;
	private:
		int length;
};

