#include "CCylinder.h"

int main(int argc,char *argv[])
{
	CVector *a,*b,*c;
	if (argv[1][0] == 'V'){
	       	a = new CVector(2,atof(argv[2]),atof(argv[3]));
	       	b = new CVector(2,atof(argv[2]),atof(argv[3]));
	       	c = new CVector(2,2.0,5.0);
	}
	if (argv[1][0] == 'C'){
	       	a = new CCylinder(atof(argv[2]),atof(argv[3]));
	       	b = new CCylinder(atof(argv[2]),10);
	       	c = new CCylinder(0,0);
	}
	*c = *a + *b;
	c->print();
	return 0;
}


