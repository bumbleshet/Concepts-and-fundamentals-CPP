#include "stdafx.h"



class BaseClass {
public:
	BaseClass() {}
	void f(char *s = "unknown") {
		cout << "Function f() in BaseClass called from " << s << endl;
		h();
	}
protected:
	void g(char *s = "unknown") {
		cout << "Function g() in BaseClass called from " << s << endl;
	}
private:
	void h() {
		cout << "Function h() in BaseClass\n";
	}
};
class Derived1Level1 : public virtual BaseClass { //pwede ang public virtual maging protected or private; ang iya nga members maging protected man kag private
public:
	void f(char *s = "unknown") {
		cout << "Function f() in Derived1Level1 called from " << s << endl;
		g("Derived1Level1");
		h("Derived1Level1");

	}
	void h(char *s = "unknown") {
		cout << "Function h() in Derived1Level1 called from " << s << endl;
	}
};

class Derived2Level1 : public virtual BaseClass { //virtual which means isa lang ka copy of each member function from BaseClass (ambiguous BaseClass::g() and BaseClass::g() )
public:
	void f(char *s = "unknown") {
		cout << "FUnction f() in Derived2Level1 called from " << s << endl;
		g("Derived2Level1");
		//h(); not accessible
	}
};
class DerivedLevel2 : public Derived1Level1, public Derived2Level1 {
public:
	void f(char *s = "unknown") {
		cout << "Function f() in DerivedLevel2 called from " << s << endl;
		g("DerivedLevel2");
		Derived1Level1::h("DerivedLevel2");
		BaseClass::f("DerivedLevel2");
	}
};
int main() {
	BaseClass bc;
	Derived1Level1 d111;
	Derived2Level1 d211;
	DerivedLevel2 d12;
	bc.f("main(1)");
	//bc.g(); not accessible
	//bc.h(); not accessible
	d111.f("main(2)");
	//d111.g(); not accessible
	d111.h("main(3)");
	d211.f("main(4)");
	//d211.g(); not accessible
	//d211.h(); not accessible
	d12.f("main(5)");
	//d12.g(); not accessible
	d12.h();
	system("pause");
	return 0;

}
