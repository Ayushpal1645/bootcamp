/*Containers

. Containers are used to manage collections of
objects of a certain kind.
. Container library in STL provide containers
that are used to create data structures like
arrays, linked list, trees etc
. These container are generic, they can hold
elements of any data types*/

//. vector can be used for creating dynamic arrays
// of char, integer, float and other types

/*Algorithms

. Algorithms act on containers. They provide
the means by which you will perform
initialization, sorting, searching, and
transforming of the contents of containers.

. Algorithms library contains built in functions
that performs complex algorithms on the data
structures.*/

/*Example

· One can reverse a range with reverse()
function, sort a range with sort() function,
search in a range with binary_search() and so
on.

. Algorithm library provides abstraction, i.e you
don't necessarily need to know how the
algorithm works*/

/*Iterators

. Iterators are used to step through the
elements of collections of objects. These
collections may be containers or subsets of
containers.

. Iterators in STL are used to point to the
containers

. Iterators actually acts as a bridge between
containers and algorithms

Example:-

· sort() algorithm have two parameters, starting
iterator and ending iterator, now sort()
compare the elements pointed by each of
these iterators and arrange them in sorted
order, thus it does not matter what is the type
of the container and same sort() can be used
on different types of containers.*/

/*Containers

. Container library is a collection of classes
. The containers are implemented as generic
class templates

. Containers help us to implement and replicate
simple and complex data structures very easily
like arrays, list, trees, associative arrays and
many more.

. Containers can be used to hold different kind
of objects

Common Containers:-

· vector : replicates arrays
· queue : replicates queues
· stack : replicates stack
. priority_queue : replicates heaps
. list : replicates linked list
· set : replicates trees
· map : associative arrays

Classifications of Containers:-

· Sequence Containers
    - Like array, linked list, etc
. Associative Containers
    - Sorted Data Structures like map, set, etc
. Unordered Associative containers
    - Unsorted Data Structures

. Containers Adapters
    - Interfaces to sequence containers
*/

/*Array

. Array is a linear collection of similar elements.
. Array container in STL provides us the
implementation of static array
· Use header array
- #include<array>
Creating array objects

.array <object_type, array_size> array name;
. It creates an empty array of object_type with
maximum size of array_size.
example
array <int, 5> data_array; // it will create an array of integer with size 5
array <string, 10> name_array; // it will create an array of string with

Member functions:-

Following are the important and most used
member functions of array template


- at()
- [] operator
- front()
- back()
- fill()
- swap()
- size()
- begin()
- end()


- at():-.   This method returns value in the array at the
given range
. If the given range is greater than the array
size,out_of range exception is thrown

array <int, 5> data_array=(11, 22, 33, 44, 55) ;
cout << data_array.at (2); // it will print 33
cout << data_array.at (5); // it will throw out_of_range exception


[]operator:-. This operator is used to access the elements of the array. It is similar to at() method but it does not
throw out_of_range exception if the given range is greater than the array size, it results in undefined behaviour
array <int, 5> data_array=(11, 22, 33, 44, 55) ;
cout << data_array[2]; // it will print 33
cout << data_array[5]; // it will result in undefined behaviour


front():-. This method returns the first element of the array
array <int, 5> data_array=(11, 22, 33, 44, 55) ;
cout << data_array.front(); // it will print 11
back():-. This method returns the last element of the array
array <int, 5> data_array=(11, 22, 33, 44, 55) ;
cout << data_array.back(); // it will print 55

fill():-. This method is used to fill the array with a specific value
array <int, 5> data_array;
data_array.fill(10); // it will fill the array with 10

swap():-. This method is used to swap the contents of two arrays of same type and size.
array <int, 5> data_array1=(11, 22, 33, 44, 55) ;
array <int, 5> data_array2=(66, 77, 88, 99, 110) ;
data_array1.swap(data_array2); // it will swap the contents of data_array1 and data_array2


size():-. This method returns the size of the array
array <int, 5> data_array=(11, 22, 33, 44, 55) ;
cout << data_array.size(); // it will print 5

begin() and end():-. These methods return the iterator to the first and last element of the array respectively
array <int, 5> data_array=(11, 22, 33, 44, 55) ;
cout << *data_array.begin(); // it will print 11
cout << *data_array.end(); // it will print 55
*/

/*
pair:-

. pair is a template class in Standard Template
Library
. pair is not a part of container


Syntax of using pair object:-

. pair<T1,T2>pair1;

· Example
pair <string, int> p1;

inserting values in pair object:-
p1=make_pair("abc", 1);
or
p1.first="abc";
p1.second=1;

accessing values from pair object:-
cout<<p1.first; // it will print "abc"
cout<<p1.second; // it will print 1
*/



/*
Tuple:-

. Tuple is a template class in Standard Template Library
. Tuple is not a part of container
. Tuple is used to store multiple values in a single variable
. Tuple can store values of different data types
Syntax of using tuple object:-

#include<tuple>
. tuple<T1,T2,...,Tn>tuple1;
Example

tuple <string, int, float> t1;
inserting values in tuple object:-
t1=make_tuple("abc", 1, 3.14);
or
get<0>(t1); // it will print "abc"
get<1>(t1); // it will print 1
get<2>(t1); // it will print 3.14
*/





/*
Vector:-

. The most general purpose container is the
Vector

. It supports a Dynamic Array

. What is Dynamic Array?

array and vector
Array size is fixed at compile time, while vector size is dynamic and can be changed at runtime.
vector provide more flexiblity than array, it can grow and shrink in size as needed,
 while array size is fixed and cannot be changed after it is declared.

syntax of using vector object:-
#include<vector>
vector <object_type> vector_name;
Example
vector <int> v1; // it will create an empty vector of integer
vector <string> v2; // it will create an empty vector of string

intializing during declaration:-
vector <int> v1={1, 2, 3, 4, 5}; 

vector <char>  v1;
vector <char> v2(4);
vector <char> v3(4, 'a'); // it will create a vector of char with size 4 and fill it with 'a'
for(int i=0;i<v3.size();i++){
    cout<<v3[i]<<" "; // it will print 'a' 4 times
}

subscript operator:-. This operator is used to access the elements of the vector
vector <int> v1={1, 2, 3, 4, 5};
cout<<v1[0]; // it will print 1
cout<<v1[4]; // it will print 5


push_back():-. This method is used to insert an element at the end of the vector
vector <int> v1;
v1.push_back(1); // it will insert 1 at the end of the vector
v1.push_back(2); // it will insert 2 at the end of the vector

pop_back():-. This method is used to remove the last element of the vector
vector <int> v1={1, 2, 3, 4, 5};
v1.pop_back(); // it will remove 5 from the vector 

capacity():-. This method returns the total capacity of the vector
vector <int> v1;
v1.push_back(1);
v1.push_back(2);
v1.push_back(3);
cout<<v1.capacity(); // it will print 4

size():-. This method returns the number of elements in the vector
vector <int> v1;
v1.push_back(1);
v1.push_back(2);
v1.push_back(3);
cout<<v1.size(); // it will print 3

clear():-. This method is used to remove all the elements from the vector
vector <int> v1={1, 2, 3, 4, 5};
v1.clear(); // it will remove all the elements from the vector

at():-. This method is used to access the element at a specific position in the vector
vector <int> v1={1, 2, 3, 4, 5};
cout<<v1.at(0); // it will print 1
cout<<v1.at(4); // it will print 5


insert():-. This method is used to insert an element at a specific position in the vector
vector <int> v1={1, 2, 3, 4, 5};
v1.insert(v1.begin()+2, 10); // it will insert 10 at index 2 in the vector

erase():-. This method is used to remove an element from a specific position in the vector
vector <int> v1={1, 2, 3, 4, 5};
v1.erase(v1.begin()+2); // it will remove the element at index 2 from the vector
 

iterators:-. Iterators are used to point to the elements of the vector
vector <int> v1={1, 2, 3, 4, 5};
vector <int>::iterator it;
for(it=v1.begin(); it!=v1.end(); it++){
    cout<<*it<<" "; // it will print 1 2 3 4 5
}
    

*/
