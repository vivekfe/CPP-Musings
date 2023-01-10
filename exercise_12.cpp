// pre, post Inc and references

// how to overload these operators for user defined datatypes

class index{
private:
  int count;
public:
  index()
  {
    count =0;
  }
  void display()
  {
    cout << count ;
    
  }
  index operator++(){
    index t;
    count++;
    t.count= count;
    return t;
  }
  index operator++(int n)
  {
    index t;
    t.count= count;
    count++;
    return t;
  
  }
};
void main()  
{
  index i,j,k;
  j=++i;  // this is going to call operator++()
  k=i++;   // this is going to call operator++(int 0)
  i.display();
  j.display();
  k.display();
  
  
}


// references
int i=10;
int &j=i;   // j is a reference to i

j=20;

// changes a reference changes referrent
// a reference is a const pointer
// a reference is automatically de-referenced
// it appears as if one location has been given 2 names
// j is not an alias to i, j is a reference to i, but it is not a different name given to same memory
// when I use a reference j instead of pointer j, when we use a reference * gets applied


//reference always has to be initialized we can not just say int &j unlike pointers
// one tied always remains tied

// no way to create a reference to reference
// array of references is not allowed
