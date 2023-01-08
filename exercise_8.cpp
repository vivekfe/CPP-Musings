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

};

void main()
{
  ex e1;
  ex e2;
  e2 = e1;  // overloaded assignment constructor
  ex e3 = e2; // copy constructor. In this case e3 does not exist so a normal constructor function will not be called- Creating + Initializing to some other object
  // for overloaded assignment and copy constructor, even though if we dont define, compiler injects the code as it knows that this is something more or less we want
}
