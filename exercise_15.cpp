/// //////////////////////////////////////////////////

class shape
{
private:
	int i, j;
};
shape p;  //created on stack
shape* q; 
q = new shape; // object created on heap but pointer will be on stack, anameless object gets created in this case
// unlike malloc, new creates the object and calls the constructor 
/////////////////////////////////////////////////////////
class ex
{
private:
	int i; float j;
public:
	ex()
	{
		i = 0;
		j = 0.0;
	}
	ex(int ii, float aa)
	{
		i = ii;
		a = aa;
	}
};
void main()
{
	ex* p1, * p2;
	p1 = new ex;
	p2 = new ex(10, 3.5);
	delete p1; //delete is an operator
	delete p2;  // delete calls destructor, deallocates memory
} 

////////////////////////////////////////////////////////////////////


class ex{

private: 
	int* p;
	int* q;
public:
	ex(int ii, int jj)
	{
		p = new int;
		q = new int;
		*p = ii;
		*q = jj;
	}
	~ex() // if destrutor was not there, e will die, if  e dies, p and q will also die however those iontegers will stay in memory, because we lost there addresses
		//once f() is out of scope that will cause a memory leak

		// if you sue new in conmstructor, then uise delete in destructor
	{
		delete p;
		delete q;
	}
};

void main()
{
	void f();
	f();
}
void f() {

	ex e(10, 5.5);

}

///////////////////////////////////////////////////////////

int* q;
q = new int;
int* p;
p = new int[10];
for (int i = 0; i < 10; i++)
	*(p + i) = i;

//////////////////////////////////////////////////////////

ex* z;
z = new int[10];
delete z; // simple delete z will call destructor once, this will cause a huge memory leak
