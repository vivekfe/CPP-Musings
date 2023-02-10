// constructor calls 
//////////////////////////////
# include <iostream>
 using namespace std;
class c
{
    public:
    
    void f1()
    {
        
        cout << "Hi";
    }
};

class d: public c
{
    public:
    void f2()
    {
        
        cout << "Bye";
        c::f1();
    }
    
};
int mainn()
{
    d z;
    z.f2();
   return 0; 
}

//////////////////////////////////////////////////////
class a
{
    public :
    a()
    {
        cout << "a's constructor";
        
    }
};
class b: public a
{
    public:
    b():a()  // this notation is optional
    {   // this way always base class constructor is called first
        cout << "B's constructor";
    }
    
    
};
int main()

{
    b z;
    return 0;
}

//////////////////////////////////////////


class a 
{
    private:
    int i;
    public:
    a(int j)
    {
        i=j;
    }
    
};
class b: public a
{
    public:
    // before b's constructor starts, k is passed to a's constructor and it is necessary
    b(int k): a(k)
    {
        
    }
    
};
void main()
{
    b z(15);
    
}

