#include <iostream>

class X
{
    public:
     int x;
    X()=default;
  X( int value ) : x(value) {
      std:: cout << "Default constructor called !" << std::endl;
  }
 
};

struct Y
{
  Y( const X& x ) : y(x.x) {}
  int y;
};

int main()
{

X m(5);
X y();  // this will fail and ask to emove parentesis for default initialization
X w;  // this will fail and ask to emove parentesis for default initialization
X z;   // this will work fine as it will create a default initialization
X *p1= new X();  // these will be okay as it is not considered a function call 
X* p2= new X();
std::cout << m.x;
std::cout << w.x;  // Error	C4700	uninitialized local variable 'y' 

int z();  // Unlike y() this works fine
return 0;
}
