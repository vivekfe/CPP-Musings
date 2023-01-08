// types of connstructors

// copy constructor, overloaded assignment operator

// in every class there is an overloaded assignment operator

// if we don't define any constructor, then compiler will provide a 0 arg cons, copy constructor, overloaded =

class ex 
{
  private:
    int ;
    float f;
  public:
    ex()
      {
        
      }
  void set(ex x)
    {
      i=x.i;
    }

};

void main()
{
  ex e1;
  ex e2;
  e2 = e1;  // overloaded assignment constructor
  ex e3 = e2; // copy constructor. In this case e3 does not exist so a normal constructor function will not be called- Creating + Initializing to some other object
  // for overloaded assignment and copy constructor, even though if we dont define, compiler injects the code as it knows that this is something more or less we want
  
  e2.set(1); // this will translate like ex x = 1 => ex x= ex(1) so a nameless object gets created 
  
  e2= fun();
  
}

ex fun()
  {
    ex t;
    return t;  // in this case a nameless object is created and gets initialized with t, so a copy constructor is called 
  }
