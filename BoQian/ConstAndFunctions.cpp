#include<iostream>
#include<string>
using namespace std;
class ConstExample
{
    private:
        int age;
        string name;
    public:
        ConstExample()
            {
                age= 3;
                name= "Dummy";
            }
        const string & getName() {return name;}
        void printName() const 
        {
            std:: cout << "const Version" << std::endl;
            
        }
        void printName()   // overloading a const function
        {
            std:: cout << "non const Version" << std::endl;
            
        }
         void ConstCanCallOnlyConst() const
        {
            printName();
            
        }
    
};
int main()
{
    ConstExample d;
    d.printName();
    const ConstExample g;
    g.printName();
    g.ConstCanCallOnlyConst();
    return 0;
    
}
