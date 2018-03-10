// Encapsulation.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"



class C {
public:
	C(char *s = "", int i = 0, double d = 1) {
		strcpy_s(dataMember1, s);
		dataMember2 = i;
		dataMember3 = d;
	}
	void memberFunction1() {
		cout << dataMember1 << ' ' << dataMember2 << ' ' << dataMember3 << endl;
	}
	void memberFunction2(int i, char *s = "unknown") {
		dataMember2 = i;
		cout << i << " received from " << s << endl;
	}
public:
	char dataMember1[20];
	int dataMember2;
	double dataMember3;

};
template<class genType, int size = 50>
class genClass {
	genType storage[size];
	void swap(genType& e11, genType& e12) {
		genType tmp = e11; e11 = 12; e12 = temp;
	}
};
int main() {
	C object1("object1", 100, 2000), object2("object2"), object3;
	object1.memberFunction1();
	object1.memberFunction2(123, "object1");
	genClass<int> intObject;
	genClass<float> floatObject;
	genClass<int, 100> intObject1;
	int i = 1, e = 2;
	swap(i, e);
	cout << endl << i << e << endl;


	system("pause");
	return 0;

}



