// #include<iostream>
// using namespace std;
// class MyClass {
// public:
//     MyClass& increment() {
//         x++;
//         return *this;
//     }
// private:
//     int x = 0;
// };

// int main() {
//     MyClass obj, *res;
//     res = obj.increment().increment().increment();
//     cout << *res;
//     return 0;
// }

// // C++ program to demonstrate accessing of data members
// #include <bits/stdc++.h>
// using namespace std;
// class Geeks {
// 	// Access specifier
// public:
// 	// Data Members
// 	string geekname;
//     string geeklname;
// 	// Member Functions()
// 	void insertname(string first_name,string last_name) { 
//         geekname = first_name;
//         geeklname = last_name;
//      }
// };
// int main()
// {
// 	// Declare an object of class geeks
// 	Geeks obj1;
// 	// accessing member function
// 	obj1.insertname("shubham", "singh");
//     // accessing data member
// 	cout<<obj1.geekname;
// 	return 0;
// }


// // C++ program to demonstrate accessing of data members
// #include <bits/stdc++.h>
// using namespace std;
// class Geeks {
// 	// Access specifier
// public:
// 	// Data Members
//     string geeklname;
//     string geekname;
// 	// Member Functions()
// 	Geeks(string first_name,string last_name) { 
        
//         this->geekname = first_name;
//         this->geeklname = last_name;
//     }
// };

// int main()
// {
// 	// Declare an object of class geeks
// 	Geeks* obj1 = new Geeks("shubham", "singh");
// 	// // accessing member function
// 	// obj1.insertname("shubham", "singh");
//     // accessing data member
// 	cout<<obj1->geekname << " " << obj1->geeklname;
// 	return 0;
// }

// C++ program to demonstrate accessing of data members
#include <bits/stdc++.h>
using namespace std;
class Geeks {
	// Access specifier
public:
	// Data Members
    string geeklname;
    string geekname;
    int x, y;
	// Member Functions()
	Geeks(string first_name,string last_name) { 
        
        this->geekname = first_name;
        this->geeklname = last_name;
    }
    int add(int x, int y) {
        return x + y;
    }
};

int main()
{
	// Declare an object of class geeks
	Geeks* obj1 = new Geeks("shubham", "singh");
	// // accessing member function
	// obj1.insertname("shubham", "singh");
    // accessing data member
	cout<<obj1->geekname << " " << obj1->geeklname;
	return 0;
    Geeks obj2 = obj2.add(2,3);

}


