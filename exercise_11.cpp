// friend functions, very frequently used
// implicit conversion using constructor
// purpose of explicit keyword

#include<iostream>
class comp
{
  private:
    double r, i;
  public:
    comp (double rr=0, double ii=0)
    {
        r=rr;
        i=ii;
    }
  void print()
  {
    cout << r << i;
  }
  
  
  comp operator+(comp c2)
  {
      comp t;
      t.r=r+c2.r;
      t.i=i+c2.i;
  }
};

void main()
{
  comp a(1.0,2.0);
  comp b(1.0,2.0);
  comp c;
  double d=1.1;
  c=a+b;
  c=a+d;
  c=d+a;
  // it will be suprusing to see a situation when 2+3 works but 3+2 does not
}
// if I want to enforce neither c=a+d work not c=d+a then I need to declare my constructor
// using explicit keyword, we stop this implicit conversion of d to comp but this is a negative idea
// since one of them does not work, we stop others as well

// Ideally both of them should work by taking help of a function called friend function



#include<iostream>
class comp
{
  private:
    double r, i;
  public:
    comp (double rr=0, double ii=0)
    {
        r=rr;
        i=ii;
    }
  void print()
  {
    cout << r << i;
  }
  friend comp operator+(comp , comp);

};

  // operator + funmction is not a member of comp class but a buddy of comp class
// that's why it can access private member variables of the comp class

// friend keyword should be used only in the declaration of the function, does not matter private or public
// there is no this pointer passed

  comp operator+(comp c1, comp c2)
  {
      comp t;
      t.r=c1.r+c2.r;  // think why i and r should be available as they are private vars
      t.i=c1.i+c2.i;
  }

void main()
{
  comp a (1.0,2.0);
  comp b(2.0,2.0);
  comp c;
  double d=1.1;
  c=a+b;
  c=a+d;
  c=d+a;
 
}
