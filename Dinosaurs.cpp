#include <iostream>
#include <cassert>

using namespace std;

// Base class
class Dinosaur {
public:
    string name;

    
    Dinosaur(const string& _name) : name(_name) {}
    virtual ~Dinosaur() {}

    virtual string attack() const = 0;
    virtual string roar() const = 0;

};

// Derived Dinosaur classes
class Tyrannosaurus : public Dinosaur {
public:
    Tyrannosaurus() : Dinosaur("Tyrannosaurus") {}

    string attack() const override {
        return name + " stomps with its legs";
    }

    string roar() const override {
        return name + " ROARS!";
    }
};

//Test
void testTyrannosaurus() {
    Dinosaur* dino = new Tyrannosaurus();
    string expectedAttack = "Tyrannosaurus stomps with its legs";
    string expectedRoar = "Tyrannosaurus ROARS!";
    assert(dino->attack() == expectedAttack);
    assert(dino->roar() == expectedRoar);
    delete dino;
}

int main() {
    testTyrannosaurus();
    return 0;
}
