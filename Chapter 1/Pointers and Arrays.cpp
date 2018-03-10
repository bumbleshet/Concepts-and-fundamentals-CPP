#include "stdafx.h"

//dynamic=run time
//static=well

int main() {
	int a[5], *p; // a is pointer to a block of memory that can hold 5 integers. a is fixed treated as constant; any attempt to assign a value is considered error because a is a pointer
	//pointer notations can be used to access cells of the array a
	//example
	for (int sum=a[0],  i = 1; i < 5; i++) {
		sum += a[i];
		cout << sum << endl;
	}
	cout  << endl;

	//example 2, since a is a pointer
	for (int sum = *a, i = 1; i < 5; i++) {
		sum += *(a+i);
		cout << sum << endl;
	}
	cout << endl;
	//example 3
	for (int sum = *a, *p = a+1; p < a+5; p++) {
		sum += *p;
		cout << sum << endl;
	}

	char b[5];
	long c[5];
	cout << endl;
	cout << c << endl;
	cout<<c+1*sizeof(long) << endl;
	//a=1020 and a+1=1020 because pinter arithmethic depends on the type of pointed entity. integer=2 bytes i think
	//char 1 byte
	//long 4 bytes

	cout << endl;

	int n = 5;
	p = new int[n];
	//pointer p is treated as an array variable sothat array notations can be used

	for (int sum = p[0], i = 1; i < 5; i++) {
		sum += p[i];
		cout << sum << endl;
	}
	cout << endl;
	for (int sum = *p, i = 1; i < 5; i++) {
		sum += *(p + i);
		cout << sum << endl;
	}
	cout << endl;
	for (int sum = *p, *q = p + 1; q < p + 5; q++) {
		sum += *q;
		cout << sum << endl;
	}
	cout << endl;
	delete [] p;//[] indicates that p points to an array

	//very important of array is string or array of characters
	//strcpy should encounter \0 else it will continue which may eventually lead the program to crash
	system("pause");
	return 0;
}