#include "stdafx.h"	
/* standard template library
3 types of generic entities

containers-data structure that holds some objects that are usually of the same type (deque list map multimap set multiset stack, queue priority queue and vector)
has also member functions, common to all cointainers -(default constructor,copy constructor, destructor, empty(), max_size(), size(), swap(), operator=,expect in priority queue, six overloaded relational operator functions (operator<,et.)
the member functions common to all containers except stack, queue and priority_queueinclude the functions begin(), end(), rbegin(),rend(),erase(), and clear()
elements tored in containers can be of any type and they have to supply atleast a default constructor, destructor, and an assignment operator
some compilers may also require some relational operators to be oerloaded (at least operators == and < but maybe != and > as well) even though the program does not use them.
also a copy constructor and the function operator= should be provided if data members are pointers because inertion operations use a copy of an element being inserted, not the element itself

iterators-object used to reference an element stored in a container. generalization of the poiner. allows accessing information included in a container so desired operatopms cam be performed on these elements.
iterators retain the same deferencing notation. iterator arithmetic is similar to pointer arithmetic
no iterators are supported for the stack, queue, priority _queue containers. Iterator operations for classeslist, map, multimap, set, multiset area as follows
i1++,++i1,i1--,--i1
i1=i2
i1==i2,i1!=i2
*i1
in addition to these operations, iterator operations for classes deque and vector are as follows
i1<i2, i1<=i2, i1>i2,i1>=i2
i1+n, i1-n
i1+=n, i1-=n
i1[n]
algorithm-
*/
int main() {


	system("pause");
	return 0;
}