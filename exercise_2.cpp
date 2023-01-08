#include<iostream>
struct stack 
{

int top;
int a[10];

};

void push()
{
// pass
}

void pop()
{
//pass
}

int main()
{
  struct stack s1;
  s1.top = -66  // No importance given to data and more stress on procedures
  return 0;
}

// What if we use the object oriented solution

// structures in c++ have been made more capable

struct stack 
{
private:
  
int top;
int a[10];
public:
  void pop()
  {
    // pass  
  }
  
};

// in c++ we are allowed to drop this struct keyword however in C you have been forced to say struct stack s1, s2, in c++ it is optional

stack s1, s2;

s1.top = -1; // This is not allowed in this particular construct
s1.a[4] = 45; // this is not allowed as well 


// Now change this struct to a class

class a 

{
int i ;  // class members are by default private, so use getter and setter methods
float j;
};

void main()
{
 a z1 = {10,3.14};
 cout << z1.i << z1.j;
  
 // << works as an overloaded operater, it works as a cout and bitwise left shift operator 
  
 }
