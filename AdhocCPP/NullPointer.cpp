// Essentially pointer is just an integer and a number which just stores a memory address
// Types in pointers are kind of meaningless, types are like fiction which we have created to make our life easier
// It does not matter what kind of pointer you have, whether entity class pointer or integer
// they are useful when you want to manipulate the memory for ex- *x=10 meaning, in this case
// we need to declare x as int pointer otherwise compiler does not know how many bytes of memory it needs to write
// so for all types a pointer is simply an integer
// here void simply means that this pointer is completely type-less, it does not need a type
// when we give a type to a pointer, then we are saying that data at that address is presumed to be the type we give it
// a type does not change what a pointer is
// so when we tell compiler that it is an integer pointer, we expect it to write 4 bytes of data into that memory address
#include <iostream>
using namespace std;
#define LOG(x) std:: cout << x << std::end;
int main(){
    int a =5;
    void* x=&a;
    //better to use nullptr, we could have used NULL which is a #define for 0
    // void* x= 0; // well it is not a valid address
    cin.get();
}
