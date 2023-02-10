//Singleton design pattern - done using a static member function and a private constructor
class sample
{
    
    private: int i;
    static sample *p;
    sample()
    {
        
        i=9;
    }
    
    public:
    static sample* create(){
        
        if(p==NULL)
         p=new sample;
        return p;
    }
};

sample* sample::p=NULL;

void main()
{
 sample* s1=sample::create();
 sample* s2=sample::create();
    
}
