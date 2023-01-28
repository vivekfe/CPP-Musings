#include <iostream>

inline double square(double x) {
    return x * x;
}

int main() {
    double num = 5.0;
    std::cout << "The square of " << num << " is " << square(num) << std::endl;
    return 0;
}

// In C++, an inline function is a function that the compiler will insert directly into the code where the function is called, instead of generating a 
// separate function call. This can improve performance by reducing function call overhead.

// In this example, the square() function is defined as an inline function. When the function is called in the main() function,
// the compiler will insert the body of the square() function directly into the main() function, instead of generating a separate function call.

// The use of the keyword "inline" is not mandatory, it's a hint to the compiler, if the function is very small, the compiler can decide 
//   to inline even if the keyword is not present, but if the function is large, the compiler will not inline it, even if the keyword is present.

// It's important to note that inline functions can only be defined in header files, and only one copy of the function will be included
//     in the final executable, regardless of how many times it's called in the program.
