class base
{
    protected:
    int i ;
    public:
    base()
    {
        i=4
    }
    
};

class der: public base
{
    private: int j;
    public: 
    der ()
    {
        
        j=i*2;
    }
    
};

void main()
{
    der d1;
    
}
