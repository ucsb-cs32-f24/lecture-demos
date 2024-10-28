#include <iostream>
#include <string>
#include <vector>
#include "kart.h"
#include "standardKart.h"
#include "bike.h"
#include "monsterTruck.h"
using namespace std;

void testKart(Kart* kart) {
    kart->displayStats();
    kart->specialMove();
}


// Main function
int main() {
    // step 1: create a MonsterTruck object
    MonsterTruck bowser("bowser");

    // step 2: display the stats for the MonsterTruck you created
    bowser.displayStats();

    // step 3: perform the special move for the MonsterTruck
    bowser.specialMove();

    // step 4: create a MonsterTruck* pointer and point it to the MonsterTruck object
    // display the stats and perform special move using this MonsterTruck* pointer
    MonsterTruck* mtPtr = &bowser;
    mtPtr->displayStats();
    mtPtr->specialMove();

    // step 5: create a Kart* (base class pointer) and point it to the MonsterTruck object
    // display the stats and perform special move using this Kart* pointer
    Kart* kart = &bowser;
    kart->displayStats();
    kart->specialMove(); // wasn't working as expected

    // (don't do this during 1st Activity) step 6: create a vector that can hold Kart* objects 
    // add 3 different types of derived Kart objects to the vector
    StandardKart sk("mario");
    Bike bk("peach");
    vector<Kart*> karts = {&sk, &bk, &bowser};

    // step 7: iterate through the vector and call the testKart() function for each "Kart"
    for(Kart* kart : karts) {
        testKart(kart);
    }

    return 0;
}
