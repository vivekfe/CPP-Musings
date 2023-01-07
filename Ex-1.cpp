
// Before moving into object oriented programming, we need to understand why we needed OOPS and what challenges procedural programming presented to programmers

// structure is a blue print, template . Purpose of the structure is to combine distinct data types together asd they are related information 

// structure variable = specific instances 

#include<iostream>

struct emp   // emp is structure name
{
    char n[20];   // these are structure elements
    int a;
    float s;
        
};

int main()
{

struct emp e1= {"Alex",23,5000};
struct emp e2= {"Malon",24,6000};

printf("%s %d %f", e2.n, e2.a,e2.s);

struct emp *p;

p=&e1;

printf("%s %d %f", p->n, p->a, p->s);

return 0;
}
