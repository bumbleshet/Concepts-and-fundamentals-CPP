#include "stdafx.h"
#include <vector>
#include <algorithm>
#include <functional>
#include <string.h>
#include <iomanip>
class Person {
public:
	Person(char *n = "", int a = 0) {
		name = _strdup(n);
		age = a;
	}
	bool operator==(const Person& p)const {
		return strcmp(name, p.name) == 0 && age == p.age;
	}
	bool operator<(const Person& p) const {
		return strcmp(name, p.name) < 0;
	}
	bool operator>(const Person& p)const {
		return !(*this == p) && !(*this < p);
	}
	//void getInfo(const Person& p) {
	//	cout << "(" << p.name << " " << p.age << ")" << " ";
	//}

private:
	char *name;
	int age;
	friend bool lesserAge(const Person&, const Person&);
	friend ostream& operator<<(ostream& os, const Person& p);
};

template<class T>

void printVector(char *s, const vector<T>& v) {
	cout << s << " = (";
	if (v.size() == 0) {
		cout << ")\n";
		return;
	}
	typename vector<T>::const_iterator i = v.begin();
	for (; i != v.end() - 1; i++)
		cout << *i << ' ';
	cout << *i << ")\n";
}
ostream& operator<<(ostream& os, const Person& p)
{
	os << p.name << p.age;
	return os;
}
bool lesserAge(const Person& p1, const Person& p2) {
	return p1.age < p2.age;
}
int main() {
	vector<Person>v6(1, Person("Gregg",25));
	v6.push_back(Person("Ann", 30));
	v6.push_back(Person("Bill", 20));
	//sort(v6.begin(), v6.end());
	//sort(v6.begin(), v6.end(), greater<Person>());
	sort(v6.begin(), v6.end(), lesserAge);
	/*for (int i=0; i != v6.size(); i++)
		 v6[i].getInfo(v6[i]);*/
	printVector("v6", v6);
	system("pause");
	return 0;
}