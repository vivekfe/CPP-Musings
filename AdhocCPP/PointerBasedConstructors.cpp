#include <iostream>

class X
{
public:

    int a;
   
};


int main()
{

    X* x = new X();
    std::cout << x->a << std::endl;


    X* y = new X;
    std::cout << y->a << std::endl;


    X* z = new X{};
    std::cout << z->a << std::endl;

    //    Output 
    //    0
    //    - 842150451
    //    0


    return 0;
}
