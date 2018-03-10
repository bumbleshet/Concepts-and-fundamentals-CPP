#include "stdafx.h"
/*() can be treated as any other operator; it can be overloaded; like assignment operator, it can overloaded only as a member function
function object- includes a definition of the function call operator

when the function object is called, its arguments become the arguments of the function call operator.
*/
class classf {
public:
	classf() {
	}
	double operator() (double x) {
		return 2 * x;
	}
};
double sum2(classf f, int n, int m) {
	double result = 0;
	for (int i = n; i <= m; i++) 
		result += f(i);
	return result;
}
//the same can be accomplished without overloading the function call operator
class classf2 {
public:
	classf2() {
	}
	double run (double x) {
		return 2 * x;
	}
};
double sum3(classf2 f, int n, int m) {
	double result = 0;
	for (int i = n; i <= m; i++)
		result += f.run(i);
	return result;
}
//stl relies very heavily on function object. the mechanism of function pointers is insufficient for built-in operators. how could we pass a unary minus to su,()?
//to circumvent the problem , the stl defines function objects for the common C++ operators in  <functional>. for example unary minus is defined as
template <class T>
struct negate : public unary_function<T, T> {
	T operator () (const T& x) const {
		return -x;
	}
};
template<class F>
double sum(F f, int n, int m) {
	double result = 0;
	for (int i = n; i <= m; i++) 
		result += f(i);
		return result;
	
}
int main() {
	classf cf;
	cout << sum2(cf, 2, 5) << endl;
	cout << sum2(classf(), 2, 5) << endl;//requires a definition of constructor classf() to create an object of type classf() when sum2 is called
	cout << sum3(classf2(), 2, 5) << endl;
	cout << sum(negate<double>(), 2, 5);
	system("pause");
	return 0;
}