class Character {
public:
    virtual void move() = 0;
};

class Warrior: public Character {
public:
    void move() {
        cout << "Warrior moves forward." << endl;
    }
};

class Mage: public Character {
public:
    void move() {
        cout << "Mage casts a spell." << endl;
    }
};

class CharacterFactory {
public:
    static Character* createCharacter(string type) {
        if(type == "warrior") {
            return new Warrior();
        } else if(type == "mage") {
            return new Mage();
        }
    }
};
int main()
{
Character* warrior = CharacterFactory::createCharacter("warrior");
warrior->move(); // Output: Warrior moves forward.
 return 0;
}
