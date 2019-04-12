
#include"AuthorOpt.h"
using namespace std;

/*In the first option, the author
is paid $5,000 upon delivery of the final manuscript and $20,000 when the
novel is published.*/

double answer;
double x, y;
double optOne(double x, double y);

double opt1() {
	optOne(x, y);
	return answer;
}

double optOne(double x, double y) {
	double num = 5000;
	double num2 = 20000;

	answer =  num + num2;



	return answer;
}
