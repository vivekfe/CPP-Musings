// This pointer

// one more point is that C++ tries to maintain a consistency, so int is like a class and i in (int j) is an object

class a 
  {
    private: int i;
    public:
  void setdata(int ii)
  {
    i=ii;
  }
  void printdata()
  {
      cout << i ;
  }
  };

void main()
{
a z1, z2;  // z1 and z2 are objects of class a and we don't need to say "class a z1, z2" 
//just like we don't say "class int i"..any class should appear like any native type
 
z1.setdata(10);
z2.setdata(20);
  
// methods are shared across all the objects however each object has its own copy of instance variables
// if we print sizeof z1 and z2, it will show 4 bytes.Which justifies that there is no method information in z1 and z2
  

}

class ex
{
private: int i;
  float a ;
  
 public:
  void setdata(int ii, float aa)
  {
    this->i=ii;
    this->a=aa;
  }
};
void main()
{
ex e1, e2;
e1.setdata(5,5,5);
e2.setdata(10,10.5);
}

// essentially this call is translated as ex::setdata(&e1, 5, 5.5) converted by compiler 
// and setdata is actually void setdata(ex* const this, int ii, float aa)
// in actual scenario, mentioning this is optional and this pointer can not be modified

