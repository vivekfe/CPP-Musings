// size of operater
class b
{
  private: int i;
  protected : int j;
  public: int k;
};

class d: public b
{
    private: int x;
    protected : int y;
    public: int z;
    
    
}
void main()
{
   b bobj;
   d dobj;
   cout << sizeof(bobj) << sizeof(dobj);
    // prints 12 and 24 unlike the common belief that i is not part of d
}
