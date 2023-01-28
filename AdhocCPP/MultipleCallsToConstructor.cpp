#include <iostream>

class X
{
public:

    int a;
   
};


int main()
{

    X* x = new X();    // Value initilization
    std::cout << x->a << std::endl;


    X* y = new X;   // calls the constructor however does not promise 0 initialization
    std::cout << y->a << std::endl;


    X* z = new X{}; // calls the constructor with uniform initialization
    std::cout << z->a << std::endl;

    //    Output 
    //    0
    //    - 842150451
    //    0


    return 0;
}
