#include <iostream>
#include <functional>

int catch_lambda(std::function<int(int, int)> func, int x, int y) 
{
    return func(x, y);
}

int main() 
{
    int x = 5, y = 7;
    auto adder = [](int a, int b) { return a + b; };
    int result = catch_lambda(adder, x,y);
    std::cout << result << std::endl;
    return 0;
}
