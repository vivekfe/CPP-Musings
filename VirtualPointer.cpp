#include<iostream>
#include<string>
class Entity {
    public:
   virtual  std:: string GetName() {return "Entity";}

};

class Player: public Entity{
    private:
    std::string n_name;
    public:
    Player(const std::string& name):n_name(name)
    
    {
        
    }
    std:: string GetName()  override {
        
        return n_name;
    }
    
};

int main(){
    Entity* e= new Entity();
      Entity* z=  new Player("Max");
 
    std:: cout << e->GetName() <<"\n";
    std::cout << z->GetName() << "\n";
   return 0;
    
}
