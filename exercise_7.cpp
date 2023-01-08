// constructors 

// constructor does not return anything at all in C++

class ex 
{
  private: int i; float f;
  
  public:
  
  ex(int ii=0, float jj=0.0) {
  i=ii;
  f= jj;
  }
  
  void display()
  {
    cout << i << f;
  }
};

void main()
{
  ex e1;
  e1=ex(10,19.5);  // this is where a nameless object gets created and dies after assignment
  ex e[]={ex (2,3.4),
         ex(3,1.1)}; // nameless objects are really beneficial while we create array of objects
  ex e2(1,1.7);
  ex e3(3,1.1);
  ex f[]= {e1,e2,e3};
  for (int i=0;i<=2;i++) // c programming forces us to declare the variable during start of the code, in c++ wee are allowed to declare vars in a flexible manner
    { e[i].display();
    } // i does not die after for loop is done
}

void fun (ex *p)
{
  p->set(3,8.5);  // if we pass addrss of ex object, we have to collect in ex pointer
  // since p is calling member function of ex class, this pointer also stores the address of ex object 
}
