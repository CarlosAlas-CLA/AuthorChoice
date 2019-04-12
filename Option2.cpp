
#include"AuthorOpt.h"
using namespace std;

/*
In the second option, the author is paid 12.5% of the net
price of the novel for each copy of the novel sold.*/

double ans;
double n, n2;
double optTwo(double n, double n2);

double opt2() {
	optTwo(n, n2);
	return ans;
}

double optTwo(double n, double n2) {
	double nu = n*n2;
	double nu2 = nu*.125;
	ans = nu2;

	return ans;
}
