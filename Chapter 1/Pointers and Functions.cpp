#include "stdafx.h"	
//#include <cmath>
double f(double x) { //*f is the function itself and (*f)(7) is a call to the function
	return 2 * x;
}
//consider the following summation where f is the incrementing value m is the stop and n is start
//to compute the sum we must supply f m and n
double sum(double (*f)(double), int n, int m) { 
//the first argumentmeans that f is a pointer to a function with one double argument and a double return value. 
//Note the need for parentheses around *f. Because parentheses have precedence over the dereference operator
//double *f(double) declares a function that returns a pointer to a double value
	
	double result = 0;
	for (int i = n; i <= m; i++) {
		result += f(i);
		
	}
	return result;
}
/*another example finds a root of a continuous function in an interval. 
the root is found by repetitively bisecting an interval and finding a midpoint of the current interval. If the fucnction value at the midpoint is zero or the interval is smaller than some value,
the midpoint is return. if the values of the function on the left limit of the current interval and on the midpoint have opposite signs , the search ocntinues in the left half of the current interval;
otherwise the current interval becomes its right half. Here is an implementaition of this algorithm,
*/
double root(double(*f)(double), double a, double b, double epsilon) {
	double middle = (a + b) / 2;
	while (f(middle) != 0 && fabs(b - a) > epsilon) {
		if (f(a)*f(middle) < 0)
			b = middle;
		else a = middle;
		middle = (a + b) / 2;
	}
	return middle;
}
int main() {
	//one of the attributes of a function is the address indicating th elocation of the body of the functuo in memory.
	//pointers to function(very useful in implementing functionals(functions that take functions as argument) such as integral.

//the function sum() can be called now with any built in or user defined double function that takes one double argument as in

	cout << sum(f, 1, 5) << endl;
	cout << sum(sin, 3, 7) << endl;
	cout << root(f, 3, 5, 0.23) << endl;



	system("pause");
	return 0;
}