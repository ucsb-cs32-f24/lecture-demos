#include <iostream>
#include <string>
using namespace std;

// Base class: Kart
class Kart {
public:
    Kart(const string& driver, int maxSpeed, float weight, float acceleration, int turboBoost)
        : driver(driver), maxSpeed(maxSpeed), weight(weight), acceleration(acceleration),
          turboBoost(turboBoost), fuel(100) {}  // Fuel is initialized to 100%

    void displayStats() {
        cout << "Driver: " << driver << endl;
        cout << "Max Speed: " << maxSpeed << " km/h" << endl;
        cout << "Weight: " << weight << " kg" << endl;
        cout << "Acceleration: " << acceleration << " m/s²" << endl;
        cout << "Turbo Boost: " << turboBoost << " units" << endl;
    }

    void useFuel(int amount) {
        if (fuel >= amount) {
            fuel -= amount;
            cout << driver << " used " << amount << "% fuel. Remaining fuel: " << fuel << "%" << endl;
        } else {
            cout << driver << " is out of fuel!" << endl;
        }
    }

protected:
    string driver;
    int maxSpeed;
    float weight;
    float acceleration;
    int turboBoost;

private:
    int fuel;  // Private field to manage internal fuel consumption
};

// Derived class: Standard Kart
class StandardKart : public Kart {
public:
    StandardKart(const string& driver)
        : Kart(driver, 150, 70.0, 3.5, 2) {}

    void specialMove() {
        cout << driver << " performs a Mini-Turbo boost!" << endl;
        useFuel(10);  // Uses 10% fuel for the special move
    }
};

// Derived class: Bike
class Bike : public Kart {
public:
    Bike(const string& driver)
        : Kart(driver, 160, 50.0, 4.2, 3) {}

    void specialMove() {
        cout << driver << " performs a Wheelie for extra speed!" << endl;
        useFuel(5);  // Uses 5% fuel for the special move
    }
};

// Derived class: Monster Truck
class MonsterTruck : public Kart {
public:
    MonsterTruck(const string& driver)
        : Kart(driver, 140, 120.0, 2.8, 1) {}

    void specialMove() {
        cout << driver << " crushes through obstacles effortlessly!" << endl;
        useFuel(15);  // Uses 15% fuel for the special move
    }
};

// Main function
int main() {
    StandardKart mario("Mario");
    Bike peach("Peach");
    MonsterTruck bowser("Bowser");

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
