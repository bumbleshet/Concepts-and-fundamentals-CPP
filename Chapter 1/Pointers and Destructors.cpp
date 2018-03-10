#include "stdafx.h"

int main() {
	/*destructors
	madula ang memory upon exit of the class or struct. kung declared locally for example
	kung magexit na sa block of code madula nasya.
	kailangan ang destructors kay may pointer ta madelete lang sya pero di madelete tung memory taken by the string

	after the object is destoyed, the string previously available form its data member name becomes inaccessible
	(if not assgined to the name of some other object or to a string variable) and memory occupied by this string
	can no longer be released.

	a destructor is a function that is automatically invoked when an object is destroyed, which takes place upon exit from the block in which
	the object is defined or upon the call of delete.
	*/
	struct Node {
		char *name;
		int age;
		Node(char *n = "", int a = 0) {
			name = strdup(n);
			strcpy(name, n);
			age = a;
		}
		Node(const Node& n) {
			name = strdup(n.name);
			age = n.age;
		}
		Node& operator=(const Node& n) {
			if (this != &n) {
				if (name != 0)
					delete[] name;
				name = strdup(n.name);
				age = n.age;
			}
			return *this;
		}
		Node(){
			if(name!=0)
				delete [] name
}
	};
	Node node1("Roger", 20), node2(node1);

	cout << node1.name << " " << node1.age << endl;
	cout << node2.name << " " << node2.age << endl << endl;

	strcpy(node2.name, "Wendy");
	node2.age = 30;


	system("pause");
	return 0;
}