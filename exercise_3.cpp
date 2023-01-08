// How to construct objects

#include<iostream>
class a 
{
private:
  int i; float j;
public:
  void setdata(int ii, float jj)   
    {
      if(ii>0 && jj>0) 
      {
        i=ii;   // encapuslation at work 
        j=jj;
      }
     }
};

void main()  
  {
    a z1, z2;
    z1.setdata(10,3.14);
    z2.setdata(100,2.5); 
  }
