// Encapsulation.cpp : Defines the entry point for the console application.

/*polymorphism is a powerful tool in OOP.
It is enough to send a standard message to many different objects without specifying how the message will be processed.
there is no need to know of what type the objects are.
the receiveer is responsible for interpreting the message and fp;;pwomg ot. The sender does not have to modify the message
depending on the type of receiver. There is no need for switch or if else statements.
also, new units can be added to a complex program without needing to recompile he entire program.
*/
#include "stdafx.h"
void f1(int i, int* j, int& k);
int& f2(int a[], int i) {
	return a[i];
}
int* f3(int a[], int i) {
	return &a[i];
}
int main() {
	//be careful in using reference variables sa oop kay basi maaccess nya ang sa sulod sang class bisan naka private e.g.
	/*
	class C{
	public:
	int& getRefN(){
	return n;}
	int getN(){
	return n;
	private:
	int n;
	}c;
	int&k=c.getRefN();
	k=7; machange ang n
	cout<<c.getN();

	c.getRefN()=9;
	*/
	int a[] = { 1,2,3,4,5 };
	//	n = f2{ a,3 };
	//f2(a,3)=6;
	//either left hand side or right hand side is valid cause its a reference type of function
	f2(a, 3) = 6;// this will return [1,2,3,6,5] iaccess nya ang a[3] sa return then assign 6
	*f3(a, 3) = 6;
	cout << *a << *a+1 << *a + 2 <<*(a+3)<< *a + 4 << endl;
	//note we can use same with pointers

	int n = 5, *p = &n;
	int n1 = 4, n2 = 5, n3 = 6;
	int& r = n;// integer reference variable (must be initialized in its declaration as reference to a particular variable and this reference cannot be cahnge and cannot be null)
	//a constant pointer
	//can be declared as
	// int *const r=&n;
	//r=q is error because r is constant
	//*r = 1;//acceptable sya kay garefer ka sa contents if mag gamit situng *const kag if n is not constant integer
	//int *const r = &n;
	//const int *s = &m;
	// magkaiba ang dalawa. the latter is a pointer to a constant integer
	cout << n << ' ' << *p << ' ' << r << endl;
	n = 7;
	cout << n << ' ' << *p << ' ' << r << endl;
	*p = 9;
	cout << n << ' ' << *p << ' ' << r << endl;
	r = 10;
	cout << n << ' ' << *p << ' ' << r << endl;


	cout << n1 << ' ' << n2 << ' ' << n3 << endl;
	f1(n1, &n2, n3);
	cout << n1 << ' ' << n2 << ' ' << n3 << endl;

	system("pause");
	return 0;

}
void f1(int i, int* j, int& k) {
	i = 1;
	*j = 2;
	k = 3;
}


