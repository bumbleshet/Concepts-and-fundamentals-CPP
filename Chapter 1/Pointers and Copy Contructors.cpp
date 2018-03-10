#include "stdafx.h"

int main() {
	/*struct product {  Data struct parang ano ah class sya pero data type
		int weight;
		double price;
	};

	product apple;
	product banana, melon;

	pwede man ning isa

	struct product {
	int weight;
	double price;
	} apple, banana, melon; wala sang product diretso lang object name

	 data structure is a group of data elements grouped together under one name.
	 These data elements, known as members, can have different types and different length
	*/
	struct Node {
		char *name;
		int age;
		Node(char *n = "", int a = 0) {
			name = strdup(n); //allocate the size of of the string
			strcpy(name, n);
			age = a;
		}
		 Node(const Node& n) {
			name = strdup(n.name);
			age = n.age;
			}
		//node1=node2 overloading the assignment operator
		 Node& operator=(const Node& n) {
			 if (this != &n) { //no assignment to itself
				 if (name != 0)
					 delete[] name;
				 name = strdup(n.name);
				 age = n.age;
			 }
			 return *this;
		 }
	};
	Node node1("Roger", 20), node2(node1);

	cout << node1.name << " " << node1.age << endl;
	cout << node2.name << " " << node2.age << endl << endl;

	strcpy(node2.name, "Wendy");
	node2.age = 30;

	cout << node1.name << " " << node1.age << endl;
	cout << node2.name << " " << node2.age << endl << endl;

	node1 = node2;

	cout << node1.name << " " << node1.age << endl;
	cout << node2.name << " " << node2.age << endl << endl;

	//ages are different but names are the same, the problem is that 
	//the definition of Node does not provide a copy construtor 
	//Node(const Node&); which is necessary to execute the declratation node2(node1_ to initiualize node1.
	// if a user copy constructor is missing, the constructor performs member by member copying. Because name is a pointer, 
	//the copy constructor copies the string address node1.name to node2.name not th estring content, so that right after the execution of the
	//declratation strcpy(node2.name, "Wendy");
	//node2.age = 30;
	//age is updated but roger pointed by name member of both objects is overwritten by wendy which is also pointed to by the two pointers
	// to prevent this from happening the user must provide a proper copy constructor as in
	//Node (const Node& n){
	/*name = strdup(n.name);
	age = n.age;
}
};*/

	system("pause");
	return 0;
}