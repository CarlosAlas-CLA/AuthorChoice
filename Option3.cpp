
#include"AuthorOpt.h"
using namespace std;

/*
In the third option, the
author is paid 10% of the net price for the first 4000 copies sold, and 14% of
the net price for the copies sold over 4000..*/

double an;
double n3, n4;
double optThree(double n3, double n4);

double opt3() {
	optThree(n3, n4);
	return an;
}

double optThree(double n3, double n4) {
	double num = n3*n4*.10;
	double num2 = n3*n4*.14;
	if (n3 <= 4000)
		return num;
	else (n3 >= 4000);
	return num2;


}
