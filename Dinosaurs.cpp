#include <iostream>
#include <cassert>

using namespace std;

void testTyrannosaurus() {
    Dinosaur* dino = new Tyrannosaurus();
    string expectedAttack = "stomps with its legs.";
    string expectedRoar = "ROAR!";
    assert(dino->attack() == expectedAttack);
    assert(dino->roar() == expectedRoar);
    delete dino;
}

int main() {
    testTyrannosaurus();
    return 0;
}
