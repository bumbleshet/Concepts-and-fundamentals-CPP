#include "stdafx.h"

int main() {
	int i = 15, j, *p, *q;
	p = &i;//address (&)
	*p = 20; //indirection operator; forces the system to first retrieve the contents of p, then access the location whose address has just ben retrieved from p
	j = 2 * *p;
	q = &i;
	cout<< p<<endl;
	cout << j << endl;
	cout << q << endl;
	p = new int; //requests enough space to store one integer from memor manager and the address of the beginning of this portion 
	//memory is stored in p. May bag o na nga memory location(anonymous ang pangalan) kag maaccess sya tru p or any other pointer kag pwede masudlan
	cout << p << endl;
	q = p;//access tru pointer q ang new int sang p
	cout << q << endl;

	//p = &i;
	//*p = 20; 
	//j = 2 * *p;
	//q = &i;

	*p = *q - 1;
	cout << *p <<" "<<i<<endl;
	q = &j;
	cout << q<< endl;
	*p = *q - 1;
	cout << *p << " " << i << endl;

	p = new int;
	cout << p<< endl;
	delete p;//dangling reference problem, the beginning addresses of the released memory block are still in p
	// to address this problem p must assign a new addres or to be set to null.
	cout << p << endl;
	p = 0; //p becomes null

	system("pause");
	return 0;
}