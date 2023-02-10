// containership 
class string
{
  private:
  char str[100];
  public:
  string(char *s="")
  {
      
  }
  void print()
  {
      
  }
  
};

class stringlist
{
  private:
  string s[50];
  int c;
  public:
  stringlist()
  {
      c=0;
  }
  void add(string t)
  {
      s[c]=t;c++;
      
  }
  void printall()
    {
    
    }
    
};
