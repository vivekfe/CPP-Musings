// The following C++ code also declares a function that takes no parameters, 
// but it uses the less desirable (some would say “abomination”) style, f(void):
void f(void);  // undesirable style for C++; use void f() instead

int i = 127;
string s = to_string(i);

// some notes about when choosing different integer types
// https://isocpp.org/wiki/faq/newbie#choosing-int-size

// When using short in an array or in arithmetic operations, the short integer is converted into int, 
// and so this can introduce a hit on the speed in processing short integers

// Note that the C standard doesn’t guarantee that <stdint.h> defines intn_t and uintn_t specifically for n = 8, 16, 32 or 64. 
// However if the underlying implementation provides integers with any of those sizes, <stdint.h> is required to contain the corresponding typedefs. 
// Furthermore you are guaranteed to have typedefs for sizes n = 8, 16 and 32 if your implementation is POSIX compliant. 

// if x is of type float, the expression x + 5.7 is of type double: 
// it first promotes the value of x to a double, then performs the arithmetic using double-precision instructions.
// If that is what you want, fine; but if you really wanted it to do the arithmetic using single-precision instructions, you can change that code to x + 5.7f

// NaN means “not a number,” and is used for floating point operations.

// There are lots of floating point operations that don’t make sense, such as dividing by zero, taking the log of zero or a negative number, 
// taking the square root of a negative number, etc. Depending on your compiler, some of these operations may produce special floating point
// values such as infinity (with distinct values for positive vs. negative infinity) and the not a number value, NaN.

// If your compiler produces a NaN, it has the unusual property that it is not equal to any value, including itself. For example, if a is NaN, then a == a is false.
// so use isnan() from  standard library.  In fact, if a is NaN, then a will be neither less than, equal to, nor greater than any value including itself.

#include <iostream>
int main()
{
  float a = 1000.43;
  float b = 1000.0;
  std::cout << a - b << '\n';
  // ...
}

void f()
{
  Color x = red;
  Color y = white;
  Color z = blue;
  int n;
  n = x;   // change n to 0
  n = y;   // change n to 1
  n = z;   // change n to 2
}

void f()
{
  Color x;
  x = blue;  // change x to blue
  x = 2;     // compile-time error: can't convert int to Color
}

void f()
{
  Color x;
  x = red;      // change x to red
  x = Color(1); // change x to white by cast
  x = Color(2); // change x to blue
  x = 2;        // compile-time error: can't convert int to Color
}

// https://stackoverflow.com/questions/895827/what-is-the-difference-between-tmain-and-main-in-c/901154#901154

// https://learncplusplus.org/learn-about-deleted-default-constructor-in-c/

// A type with a public default constructor is Default Constructible.
#include <iostream>
class myclass
{
  public:
   int x = 49;
   myclass() = delete;
    myclass(int i):x(i) {
        
    }
};
 
 
int main()
{
  myclass test();  //   Error: 'myclass' has been explicitly marked deleted here
 std::cout << test.x << '\n';
 return 0;
}

// In another way, = delete means that the compiler will not generate those constructors when declared
// and this is only allowed on copy constructor and assignment operator. 


//  POD = Plain old data
// In short, it is all built-in data types (e.g. int, char, float, long, unsigned char, double, etc.) 
// and all aggregation of POD data. Yes, it's a recursive definition. ;)

class Obj{
    char* str;
public:
    Obj(char* s){
        str = s;
        cout << str;
    }
    ~Obj(){
        cout << "Done!\n";
        delete str;        // See the comment of "Loki Astari" below on why this line of code is bad practice
    }
};


Obj o1 ("Hi\n");
Obj* o2 = new Obj("Hi\n");

// The first creates an object with automatic storage duration. It is created, used, and then goes out of scope when the current block ({ ... }) ends. 
// It's the simplest way to create an object, and is just the same as when you write int x = 0;

// The second creates an object with dynamic storage duration and allows two things:
// Fine control over the lifetime of the object, since it does not go out of scope automatically; you must destroy it explicitly using the keyword delete;

int i(5); 

// This is called direct-initialization and it is used to initialize variables with a specific value when they are created.

int j{10};

// This is called uniform initialization, and it uses curly braces {} instead of parentheses (). 
// This was introduced in C++11 and it's a more modern way of initializing variables.

//Using curly braces {} for initializing variables has some advantages over using parentheses (). One of the main advantages is that it 
//can help prevent narrowing conversions. Narrowing conversions are when a value is assigned to a variable that cannot represent the value, 
// such as trying to assign a double to an int. When using curly braces, the compiler will give an error if there is a narrowing conversion, while with parentheses, the conversion will be allowed. This can help prevent bugs in the code. Additionally, curly braces can be used for initializing non-POD (Plain Old Data) types like std::string, std::vector, etc., where as the parentheses can only be used for POD types like int, float, char, etc.

// So, it is recommended to use curly braces {} for initializing variables whenever possible.

// To be more clear, a POD is what we call "a struct": a unit or a group of units that just store data.

ClassName* objectPointer = new ClassName();
ClassName* objectPointer = new ClassName;

// The first form, new ClassName(), explicitly calls the default constructor with empty parentheses, even though it takes no arguments. This is known as value-initialization.

// The second form, new ClassName, does not explicitly call the default constructor with empty parentheses. This is known as default-initialization.

// Both forms will create an object of the class and call the default constructor, so the resulting behavior will be the same. 
// However, the first form is more explicit and can be useful in some cases, such as when you want to make it clear that you are calling the default constructor. The second form is more concise and is more commonly used.
