// Function overloading
// functions in c++ are more mature than C
// arguments in c++ functions can have default values unlike C functions
// arguments must differ in -> number, order, type
// different return types not enough for overloading
// in C++ we can create normals functions as overloaded (npthing to do with the class)

class ex
{
  private:
  int i; float j;
  public:
  ex(int ii=0, float jj=0.0)
  {
    i=ii;
    j=jj;
  }
  // can we create a 0 arg constructor as well? No, this will lead to ambiguity
};

void main()
{
ex e1(10,3.14);
ex e2;
ex e3 (, 1.2);
// what if 
  
  ex e4( 15);
  ex e6 = 2,1.1; // this is incorrect synatx
  ex e5 = 10; // this is fine as this is like int i=10 so this is fine, it should look like user defined data type
  // so ex e5 becomes ex e5(10) which means int i=10; also becomes int i(10);
  ex e7();  // this does not create an object as it seems like a declaration of a function called e7 returning ex object
}
