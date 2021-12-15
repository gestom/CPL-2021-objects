#include "CVector.h"

class CCylinder:public CVector
{
	public:
		CCylinder(float width,float height);
		~CCylinder();
		CCylinder operator+(CCylinder a);
		void print();
};
