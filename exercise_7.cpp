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
         ex(3,1.1)};
  ex e2(1,1.7);
  ex e3(3,1.1);
  ex f[]= {e1,e2,e3};
  for (int i=0;i<=2;i++)
    { e[i].display();
    } 
}
