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

In this code, you are using the new operator to call the default constructors of classes A and B and then you are printing the value of the variable x after each new call.

The first new call, new(&x) A(), creates an object of class A at the address of the variable x. The class A has an empty constructor which does nothing. Therefore, the value of x is not modified.

The second new call, new(&x) B;, creates an object of class B at the address of the variable x. The class B has a default constructor which is explicitly defined by B()=default;. This constructor does not modify the value of x, so the value of x remains the same.

The third new call, new(&x) B();, creates an object of class B at the address of the variable x. The class B has a default constructor which is explicitly defined by B()=default;. This constructor does not modify the value of x. But here you are calling this constructor with empty parenthesis which causes value-initialization, which is typically set the variable to 0. Therefore, the value of x will be set to 0 after this constructor call.

So, the output of the program will be:
5
5
0

It's worth noting that, you are using new operator to create objects at the address of an already existing variable, which is considered as bad practice, because it can cause undefined behavior.




Vivek Srivastava
well,  how is it possible that we create an object at address of some already living variable? second question is - first we create A type object at an address and then create B object at same address of X? wouldn't it overwrite A object
When you use the new operator with the address of an existing variable, it creates an object of the specified type at that memory location, regardless of whether there is already an object there or not. This can cause undefined behavior if the existing object at that location has not been properly destroyed first or if the new object being created has a different size or layout than the existing object.

In the code you provided, the first new call new(&x) A() creates an object of class A at the address of the variable x. The second new call new(&x) B; creates an object of class B at the same address of x. Because the B object is created at the same memory location as the A object, the A object is effectively overwritten. This can lead to memory leaks and other undefined behaviors, as the memory allocated for the A object is not freed and the data in that memory location is modified.

It's important to note that using new operator to create objects at the address of an already existing variable is a dangerous practice and should be avoided. It can cause memory leaks, undefined behavior, and other serious problems. It's better to use dynamic memory allocation with new operator to create objects on the heap, which can be safely deleted later.
  
  When you use the new operator with the address of an existing variable, it creates an object of the specified type at that memory location, regardless of whether there is already an object there or not. This can cause undefined behavior if the existing object at that location has not been properly destroyed first or if the new object being created has a different size or layout than the existing object.

In the code you provided, the first new call new(&x) A() creates an object of class A at the address of the variable x. The second new call new(&x) B; creates an object of class B at the same address of x. Because the B object is created at the same memory location as the A object, the A object is effectively overwritten. This can lead to memory leaks and other undefined behaviors, as the memory allocated for the A object is not freed and the data in that memory location is modified.

It's important to note that using new operator to create objects at the address of an already existing variable is a dangerous practice and should be avoided. It can cause memory leaks, undefined behavior, and other serious problems. It's better to use dynamic memory allocation with new operator to create objects on the heap, which can be safely deleted later.





  
  
