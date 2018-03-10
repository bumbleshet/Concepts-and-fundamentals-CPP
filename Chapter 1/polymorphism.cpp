#include "stdafx.h"
/* static binding-decision concering a function to be executed is determined at compilation time
dynamic binding - decision is delayed until run time (enforced using virtual)

int this way, if a virtual function member is called then the function chosen for executoin dpends not on the type of pointer determinded by its
decleration but on the type of value the pointer currently has.
*/
class Class1 {
public:
	virtual void f() {
		cout << "function f() in Class1\n";
	}
	void g() {
		cout << "Function g() in Class1" << endl;
	}	
};
class Class2 {
public:
	virtual void f() {
		cout << "Function f() in Class2\n";
	}
	void g() {
		cout << "Function g() in Clases2\n";
	}
};
class Class3 {
public:
	virtual void h() {
		cout << "Function h() in Class3\n";
	}
};
 
int main() {
	Class1 object1, *p;
	Class2 object2;
	Class3 object3;
	p = &object1; //p->() kumbaga iaccess ang sa sulod sang object1 since gi store doon yung address
	p->f();
	p->g();
	p = (Class1*)&object2;
	p->f();
	p->g();
	p = (Class1*)&object2;
//	p->f(); //Abnormal program termination;
	p->g();
//	p->h() // h() is not a member of Class1;


	system("pause");
	return 0;
}