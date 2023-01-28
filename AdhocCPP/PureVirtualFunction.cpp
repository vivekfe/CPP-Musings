class Shape {
public:
    virtual double area() = 0;
};

class Rectangle : public Shape {
private:
    double length, width;
public:
    Rectangle(double l, double w) : length(l), width(w) {}
    double area() { return length * width; }
};

//In C++, a pure virtual function is a virtual function that has no implementation in the base class, and must be overridden in derived classes. A pure virtual function is declared by using the "= 0" notation at the end of the function declaration.

//A pure virtual member function is a member function that the base class forces derived classes to provide.
