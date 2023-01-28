#include <iostream>
using namespace std;
class A 
{
public:
    int x;
    A(){}
};

class B 
{
public:
    int x;
    B()=default;
};


int main() 
{ 
    int x = 5;
    new(&x)A(); // Call for empty constructor, which does nothing
    cout << x << endl;
    new(&x)B; // Call for default constructor
    cout << x << endl;
    new(&x)B(); // Call for default constructor + Value initialization
    cout << x << endl;
    return 0; 
} 

// Using the new operator to call the default constructors of classes A and B and then you are printing the value of the variable x after each new call.

// The first new call, new(&x) A(), creates an object of class A at the address of the variable x. 
// The class A has an empty constructor which does nothing. Therefore, the value of x is not modified.

// The second new call, new(&x) B;, creates an object of class B at the address of the variable x. 
// The class B has a default constructor which is explicitly defined by B()=default;.
// This constructor does not modify the value of x, so the value of x remains the same.

// The third new call, new(&x) B();, creates an object of class B at the address of the variable x. 
// The class B has a default constructor which is explicitly defined by B()=default;.
// This constructor does not modify the value of x. But here you are calling this constructor with empty parenthesis which causes value-initialization,
// which is typically set the variable to 0. Therefore, the value of x will be set to 0 after this constructor call.

// So, the output of the program will be:
// 5
// 5
// 0




  
  
