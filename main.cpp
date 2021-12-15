#include "CVector.h"

int main(int argc,char *argv[])
{
	CVector a(3,atof(argv[1]),atof(argv[2]),atof(argv[3]));
	CVector b(3,1.0,2.0,3.0);
	b[3] = 10.0;
	printf("Value is %.3f\n",b[2]);
	a.print();
	b.print();
	//CVector c = a.add(b);
	//c.print();
	return 0;
}


