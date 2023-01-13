// What is a static memory allocation

// What is dynamic memory allocation

// how memory is allocated on heap and stack

#include<iostream>

int i;
float a;
struct emp
{
char n[20];
int a;
float s;
};

emp e;
int *i;
float *a;
i = (int *) malloc(sizeof(int));
a=(float *)malloc(sizeof(float));

struct emp {
char n[20];
int a;
float s;
};

emp *e;
e=(emp*) malloc(sizeof(emp));

i=new int;
a=new float;
e=new emp;


// new operator does the dynamic memory allocation

// static memory allocation- compiler decides how to create these variables, emit instructions on how much memory needs to be allocated


// new is better comparedf to malloc- as it is more cleaner and it never expect sme to type cast a void pointer to proper pointer, does not need how many bytes to allocate, 
// new also calls the constructors of the class

// symbol table stores entries for variables

// name, scope, Length
// offset from DataSegment, StackSegment

// if too many local variables: loader fails

// if too many gloabl variables - stack variables

// if too much dyanmic demand - heap full 
