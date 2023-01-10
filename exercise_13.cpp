// references are like const pointers which gets dereferenced automatically

// don't think of reference as another name of the memory location,

// it simply stores the address of the variable which it refers to 

// ultimately references are pointers

#include<iostream>
struct data
{
  int i;
  float f;
};

class emp
{
  public:
  void fun1(data x)
  { 
      x.i=2;
      x.f=5.5;
  }
  void fun2(data *y)
  {
    y->i=2;
    y->f=5.5;
  }
  vpid fun3(data &z)
  {
   z.i=3;
   z.f=10.5;
  }
};


void main()
{
  data d={1,2.2};
  emp e;
  e.fun1(d);
  e.fund2(&d);
  e.fun3(d);
}
