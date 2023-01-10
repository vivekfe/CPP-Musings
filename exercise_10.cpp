// program organization

// cin was an object of istream_withassign (class)

// cout was an object of ostream_withassign (class)

// These classes come from iostream.h as it contains the decalaration of these two classes

// these two objects also come from iostream.h


// comp.h - here we simply want to declare the methods and class variables, this is
// simply prototype declaration

class comp 
{
  private: 
    double r, i;
  public:
    comp(double rr=0, double ii=0.0); // default values in declaration, we need to indicate it here
                                      // do not try to give defualt values in definition
    void print();
    comp operator + comp();
}

// we just share .h file but don't share the secret sauce of our class

#include "comp.h"
#include <iostream.h>
comp:: comp (double rr, double ii)
{
  r=rr;
  i=ii;
}
void comp:: print()
{
  cout << r << i;
}

comp comp:: operator+(comp &c2)
{
  comp t;
  t.r=r+c2.r;
  t.i=i+c2.i;
  return t;
}
