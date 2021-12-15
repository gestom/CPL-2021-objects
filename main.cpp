#include "CVector.h"

int main(int argc,char *argv[])
{
	CVector a(2,atof(argv[1]),atof(argv[2]));
	CVector b(2,1.0,2.0);
	a.print();
	b.print();
	//CVector c = a.add(b);
	//c.print();
	return 0;
}
