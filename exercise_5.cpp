// joint responsibility is no one's responsibility (like I create a 2 arg constructor but don't leave 0 arg constructor to be created by compiler)
// so compiler says Either you do it or I do it
// if you do, then it is your responsibility to declare even the 0-argument constructor

// ctrl+F5 to compile all files in one project to compile in one shot
//. h class is used to declare the class and .cpp to separate the definition of the class

class sample
{
private:
  int i;float j;
  
public:
  void display(){
  cout << i;
  }
};

// The protection of private data can be circumvented through pointers. But this ofcourse is cheating. C++ protects against accident rathern deliberate fraud.

void main()
{
sample s;
int *p;
p=(int *) &s;
*p=10; 

}

// ugly implementation of stack in C
struct stack
{
  int top;
  int a[10];
};
void init(struct stack *s)
{
  s->top = 0;
}
void push(struct stack *s, int x)
{
  s->a[s->top]=x;
  s->top++;
}

void main()
{
  
}


/* Constructors */

class ex{
private: int i; float j;

  public:
  ex(int ii, float jj)
    {
      i=ii;
      i=jj;
    }
  ex()
  {
    i=0;
    j=0.0;
  }
};
void main()
  
{
  ex e1(10,3.14);
  ex e2;
  // object creation is a two step process, first the object is created by allocating the space in memory (compiler emits the instructions ) 
  // and then constructor is called 
  // o args constructor will always be there in the class and compiler will create 
}
