#include <iostream>
#include <string>

using namespace std;

class InvalidStarterException {
public:
    string message;
    InvalidStarterException(const string& starter){
        message = "Invalid starter Pokémon: " + starter + ". Choice are Bulbasaur, Charmander, or Squirtle.";
    }
};

int main() {
    bool choice = false;
    while (choice == false) {   
        try {
            string userChoice;
            cout << "Choose your starter Pokémon (Bulbasaur, Charmander, Squirtle): ";
            cin >> userChoice;
            if (userChoice != "Bulbasaur" && userChoice != "Charmander" && userChoice != "Squirtle") {
                // throw an excpetion using the class above for the userChoice
            }

            string rivalChoice;
            cout << "Choose your Rivals starter Pokémon (Bulbasaur, Charmander, Squirtle): ";
            cin >> rivalChoice;
            if (rivalChoice != "Bulbasaur" && rivalChoice != "Charmander" && rivalChoice != "Squirtle") {
                // throw an exception using the class above for the Rival Choice
            }

            if (rivalChoice == userChoice){
                // throw a specific object based on the second catch block based on the output of that catch block
            }
            choice = true;
            cout << "You and Your Rival Have a Pokemon Battle" << endl;
            cout << userChoice << " vs. " << rivalChoice << endl;
            cout << "After an exhausting fight, you and " << userChoice << " wins!!!" << endl;

        } catch (const InvalidStarterException& e) {
            cout << "Error: " << e.message << "\n";
        }
        catch (string& e){
            cout << "Rival Pokemon is the same as yours, which is " << e << "try again!!!" << endl;
        }
    }
    
    return 0;
}
