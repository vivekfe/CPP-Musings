#include <iostream>

class Pod {
public:
    int a, b;
    Pod()
    {
        std::cout << "Default constructer called" << std::endl;
        
    }
};

int main() {
   Pod *p1 = new Pod;
   Pod *p2 = new Pod();
   
  std::cout << p1->a <<  " "<< p1->b << std::endl;
  std::cout << p2->a <<  " "<< p2->b << std::endl ;
  
// In the first case the object is left uninitialized,
//while in the second case the object is guaranteed to be value-initialized, 
//which in this case as the type is POD it means zero-initialized
    return 0;
}
