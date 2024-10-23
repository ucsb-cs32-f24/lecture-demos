/*
This version doesn't use inheritance

Problems with the Non-Inheritance Version:

Code Duplication:
The displayStats() function is identical in every class. 
If a change is needed (e.g., adding a new stat), 
we’d have to modify it in all three places.
Attributes like driver, maxSpeed, weight, 
acceleration, and turboBoost are repeated across all three classes.

Difficult to Maintain:
If the logic for stats changes, we must update it across 
multiple classes, increasing the chance of bugs.
Adding a new vehicle class means copy-pasting similar 
code, leading to a lot of redundant work.

Lack of Structure:
There's no relationship between the classes, even 
though all vehicles share common properties and behavior.
*/
#include <iostream>
#include <string>
using namespace std;

// Mario's Kart
class MarioKart {
public:
    MarioKart(const string& driver)
        : driver(driver), maxSpeed(150), weight(70.0), acceleration(3.5), turboBoost(2) {}

    void displayStats() {
        cout << "Driver: " << driver << endl;
        cout << "Max Speed: " << maxSpeed << " km/h" << endl;
        cout << "Weight: " << weight << " kg" << endl;
        cout << "Acceleration: " << acceleration << " m/s²" << endl;
        cout << "Turbo Boost: " << turboBoost << " units" << endl;
    }

    void specialMove() {
        cout << driver << " performs a Mini-Turbo boost!" << endl;
    }

private:
    string driver;
    int maxSpeed;
    float weight;
    float acceleration;
    int turboBoost;
};

// Peach's Bike
class PeachBike {
public:
    PeachBike(const string& driver)
        : driver(driver), maxSpeed(160), weight(50.0), acceleration(4.2), turboBoost(3) {}

    void displayStats() {
        cout << "Driver: " << driver << endl;
        cout << "Max Speed: " << maxSpeed << " km/h" << endl;
        cout << "Weight: " << weight << " kg" << endl;
        cout << "Acceleration: " << acceleration << " m/s²" << endl;
        cout << "Turbo Boost: " << turboBoost << " units" << endl;
    }

    void specialMove() {
        cout << driver << " performs a Wheelie for extra speed!" << endl;
    }

private:
    string driver;
    int maxSpeed;
    float weight;
    float acceleration;
    int turboBoost;
};

// Bowser's Monster Truck
class BowserTruck {
public:
    BowserTruck(const string& driver)
        : driver(driver), maxSpeed(140), weight(120.0), acceleration(2.8), turboBoost(1) {}

    void displayStats() {
        cout << "Driver: " << driver << endl;
        cout << "Max Speed: " << maxSpeed << " km/h" << endl;
        cout << "Weight: " << weight << " kg" << endl;
        cout << "Acceleration: " << acceleration << " m/s²" << endl;
        cout << "Turbo Boost: " << turboBoost << " units" << endl;
    }

    void specialMove() {
        cout << driver << " crushes through obstacles effortlessly!" << endl;
    }

private:
    string driver;
    int maxSpeed;
    float weight;
    float acceleration;
    int turboBoost;
};

// Main function without inheritance
int main() {
    // Create individual vehicle objects
    MarioKart mario("Mario");
    PeachBike peach("Peach");
    BowserTruck bowser("Bowser");

    // Display stats and special moves for each vehicle
    cout << "Mario's Kart Stats:" << endl;
    mario.displayStats();
    mario.specialMove();
    cout << endl;

    cout << "Peach's Bike Stats:" << endl;
    peach.displayStats();
    peach.specialMove();
    cout << endl;

    cout << "Bowser's Truck Stats:" << endl;
    bowser.displayStats();
    bowser.specialMove();
    cout << endl;

    return 0;
}
