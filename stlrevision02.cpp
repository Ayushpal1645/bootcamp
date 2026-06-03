/*List

. List class supports a bidirectional, linear list.

· Vector supports random access but a list can
be accessed sequentially only.

. List can be accessed front to back or back to
front.

example
list <int> list1; // it will create an empty list of integer
list <string> list2; // it will create an empty list of string
#include<list>
list <int> list1{1, 2, 3, 4, 5}; // it will create a list of integer with size 5 and fill it with 1, 2, 3, 4, 5
list <char> list2(4, 'a'); // it will create a list of char with size 4 and fill it with 'a'

list <int> iterator::p=list1.begin();
while(p!=list1.end()){
    cout<<*p<<" "; // it will print 1 2 3 4 5
    p++;
}

Useful functions of list class:-
. sort()
· size()
. push back()
. push front()
. pop back()
. pop front()
· reverse()
· remove()
· clear()

· sort():- This method is used to sort the elements of the list in ascending order
list <int> list1{5, 4, 3, 2, 1};
list1.sort(); // it will sort the elements of the list in ascending order
if we want to sort the elements of the list in descending order then we can use the sort() method with the greater<int>() function
list <int> list1{5, 4, 3, 2, 1};
list1.sort(greater<int>()); // it will sort the elements of the list in descending order



· size():- This method returns the number of elements in the list
list <int> list1{1, 2, 3, 4, 5};
cout<<list1.size(); // it will print 5

. push back():- This method is used to insert an element at the end of the list
list <int> list1{1, 2, 3, 4, 5};
list1.push_back(6); // it will insert 6 at the end of the list

. push front():- This method is used to insert an element at the beginning of the list
list <int> list1{1, 2, 3, 4, 5};
list1.push_front(0); // it will insert 0 at the beginning of the list

. pop back():- This method is used to remove an element from the end of the list
list <int> list1{1, 2, 3, 4, 5};
list1.pop_back(); // it will remove the last element from the list

. pop front():- This method is used to remove an element from the beginning of the list
list <int> list1{1, 2, 3, 4, 5};
list1.pop_front(); // it will remove the first element from the list

· reverse():- This method is used to reverse the order of elements in the list
list <int> list1{1, 2, 3, 4, 5};
list1.reverse(); // it will reverse the order of elements in the list

· remove():- This method is used to remove all elements from the list that are equal to a specified value
list <int> list1{1, 2, 3, 4, 5};
list1.remove(3); // it will remove all elements from the list that are equal to 3

· clear():- This method is used to remove all elements from the list
list <int> list1{1, 2, 3, 4, 5};
list1.clear(); // it will remove all elements from the list
*/




/*map:-

. Maps are used to replicate associative arrays

. Maps contain sorted key-value pair, in which
each key is unique and cannot be changed,
and it can be inserted or deleted but cannot
be altered

Map property:-

. maps always arrange its keys in sorted order
. In case the keys are of string type, they are
sorted in dictionary order

syntax of using map object:-
#include<map>
map <key_type, value_type> map_name;
example 
map <int, string> m1; // it will create an empty map with key type int and value type string
map <string, int> m2; // it will create an empty map with key type string and value type int
map <int, string> m1{{1, "one"}, {2, "two"}, {3, "three"}}; // it will create a map with key type int and value type string and fill it with 1-"one", 2-"two", 3-"three"

m1[1]="one"; // it will insert the key-value pair 1-"one" in the map
m1[2]="two"; // it will insert the key-value pair 2-"two" in the map
m1[3]="three"; // it will insert the key-value pair 3-"three" in the map


user input
map <int, string> m1;   
int n;
cin >> n;
for (int i = 0; i < n; i++)
{
    int key;
    string value;
    cin >> key >> value;
    m1[key] = value; // it will insert the key-value pair in the map
}


.

Useful functions of map class

. at()
. [] operator
· size()
· empty()
· insert()
· clear()

at():- This method is used to access the value associated with a specific key in the map
map <int, string> m1{{1, "one"}, {2, "two"}, {3, "three"}};
cout << m1.at(1); // it will print "one"    
cout << m1.at(4); // it will throw out_of_range exception

[] operator:- This operator is used to access the value associated with a specific key in the map. 
 If the key does not exist in the map, it will insert the key with a default value and return a reference to the value
map <int, string> m1{{1, "one"}, {2, "two"}, {3, "three"}};
cout << m1[1]; // it will print "one"
cout << m1[4]; // it will insert the key 4 with a default value "" and print ""

size():- This method returns the number of key-value pairs in the map
map <int, string> m1{{1, "one"}, {2, "two"}, {3, "three"}};
cout << m1.size(); // it will print 3   

empty():- This method returns true if the map is empty, otherwise it returns false
map <int, string> m1;
cout << m1.empty(); // it will print 1 (true)
map <int, string> m1{{1, "one"}, {2, "two"}, {3, "three"}};
cout << m1.empty(); // it will print 0 (false)

insert():- This method is used to insert a key-value pair into the map
map <int, string> m1;
m1.insert({1, "one"}); // it will insert the key-value pair 1-"one" in the map
m1.insert({2, "two"}); // it will insert the key-value pair 2-"two" in the map
m1.insert({3, "three"}); // it will insert the key-value pair 3-"three" in the map

clear():- This method is used to remove all key-value pairs from the map
map <int, string> m1{{1, "one"}, {2, "two"}, {3, "three"}};
m1.clear(); // it will remove all key-value pairs from the map  

example
map <int,string> m1{{1, "one"}, {2, "two"}, {3, "three"}};
for(auto it=m1.begin();it!=m1.end();it++){
    cout<<it->first<<" "<<it->second<<endl; // it will print the key-value pairs in the map
}
    cout<<m1.at(2); // it will print "two"
    cout<<m1[4]; // it will insert the key 4 with a default value "" and print ""
    cout<<m1.size(); // it will print 4 
    m1.insert(pair(5, "five")); // it will insert the key-value pair 5-"five" in the map
    dono funtion thik hai insert karne ke liye
    m1.insert({6, "six"}); // it will insert the key-value pair
   
*/





/*String class

. String class is used to represent a sequence of characters as a single object.
. String class provides various member functions to manipulate strings.
. String class is defined in the header file <string>

Traditional way

. Using null-terminated character arrays are
not technically data types
. So C++ operators cannot be applied to them

. char s1[10],s2[10];


--

string class:-

. The string class is a specialization of a more
general template class called basic_string
. Since defining a class in C++ is creating a new
data type, string is derived data type
. This means operators can be overloaded for
the class


string is an another  conatiner class
to use string class  we have conclude header file
#include<string>
string s1; // it will create an empty string
string s2="hello"; // it will create a string with value "hello"
string s3(5, 'a'); // it will create a string with value "aaaaa"




Constructors:-

string class supports many constructor, some
of them are
- string()
- string(const char *str)
- string (const string &str)
- string(size_t n, char c)

string s1; // it will create an empty string
string s2="hello"; // it will create a string with value "hello"
string s3(5, 'a'); // it will create a string with value "aaaaa"
string s4(s2); // it will create a string with value "hello" by copying s2
string s5(s2, 1, 3); // it will create a string with value "ell" by copying 3 characters from s2 starting from index 1
string s6(s2.begin(), s2.end()); // it will create a string with value "hello" by copying characters from s2 using iterators


Mixed operations:-

. You can mix string objects with another string
object or c style string

. C++ string can also be concatenated with
character constants and string literals

string s1="hello";
string s2="world";
string s3=s1+s2; // it will create a string with value "helloworld" by concatenating s1 and s2
string s4=s1+" "+s2; // it will create a string with value "hello world" by concatenating s1, a space and s2

string s1("hello");
char s2[]="world";
string s3=s1+s2; // it will create a string with value "helloworld" by concatenating s1 and s2



Useful methods:-

· assign()
· append()
· insert()
· replace()
· erase()
· find()
. rfind()
· compare()
. c_str()
· size()

assign():- This method is used to assign a new value to the string
string s1="hello";
s1.assign("world"); // it will assign the value "world" to s1

append():- This method is used to append a string to the end of the string
string s1="hello";
s1.append(" world"); // it will append " world" to s1 and s1 will become "hello world"

insert():- This method is used to insert a string at a specific position in the string
string s1="hello";
s1.insert(5, " world"); // it will insert " world" at index
5 in s1 and s1 will become "hello world"

replace():- This method is used to replace a part of the string with another string
string s1="hello world";
s1.replace(6, 5, "everyone"); // it will replace 5 characters from index 6 in s1 with "everyone" and s1 will become "hello everyone"

erase():- This method is used to remove a part of the string
string s1="hello world";
s1.erase(5, 6); // it will remove 6 characters from index 5 in s1 and s1 will become "hello"

find():- This method is used to find the first occurrence of a substring in the string
string s1="hello world";
cout<<s1.find("world"); // it will print 6 (the index of the first occurrence of "world" in s1)

rfind():- This method is used to find the last occurrence of a substring in the string
string s1="hello world";
cout<<s1.rfind("o"); // it will print 7 (the index of the last occurrence of "o" in s1)


compare():- This method is used to compare two strings
string s1="hello";
string s2="world";
cout<<s1.compare(s2); // it will print a negative value because s1 is
lexicographically less than s2
string s1="hello";
string s2="hello";
cout<<s1.compare(s2); // it will print 0 because s1 is equal to s2
string s1="world";
string s2="hello";
cout<<s1.compare(s2); // it will print a positive value because s1 is lexicographically greater than s2

c_str():- This method is used to return a pointer to a null-terminated
 character array that contains the same sequence of characters as the string
string s1="hello";
cout<<s1.c_str(); // it will print "hello"
more example
string s1="hello";
const char *cstr=s1.c_str(); // it will return a pointer to a null-terminated character array that contains the same sequence of characters as s1
cout<<cstr; // it will print "hello"    

size():- This method returns the number of characters in the string
string s1="hello";
cout<<s1.size(); // it will print 5



*/