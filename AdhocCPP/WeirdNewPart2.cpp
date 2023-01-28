class MyClass {
    public:
    int x;
    std::string y;

    MyClass(int a, std::string b) {
        x = a;
        y = b;
    }
};

int main()
{
char memory[sizeof(MyClass)];
MyClass* object = new (memory) MyClass(5, "Hello World");
  char memory[sizeof(MyClass)];
MyClass* object = new (memory) MyClass(5, "Hello World");
std::cout << object->x << " " << object->y << std::endl;
// Outputs: 5 Hello World

MyClass* object2 = new (memory) MyClass;
std::cout << object2->x << " " << object2->y << std::endl;
}
