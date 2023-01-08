// shared responsibility is no one's responsibility
// so compiler says Either you do all of them or I do it
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
s->a[top]=x;
s->top++;
}

void main()
{
stack s1, s2;
init(&s1);init(&s2);
push(&s1,10);
}
