#include <iostream>
#include <memory>
struct Some {
  int x;  
};

void useless (std:: shared_ptr<Some> p)
{
    p->x=20;
}

int main()
{
auto one=std::shared_ptr<Some>(new Some());
std:: shared_ptr<Some> two;
one->x=10;
std::cout << "Value of x changing "<< one->x<< std:: endl;
two=one;
useless(two);
std::cout << "Value of x changing "<< one->x<< std:: endl;
return 0;
}
