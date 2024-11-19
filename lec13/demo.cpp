#include <iostream>
#include <exception>
#include <stdexcept>

using namespace std;

int main() {
    try{
        int numerator;
        int denominator;
        cout << "Dividing Calculator" << endl;
        cout << "Input numerator: ";
        cin>>numerator;
        cout << "Input denominator: ";
        cin>>denominator;
        if (denominator == 0) {
            // adjust this line to trigger each one of the catch statements below
            // understand how inheritance works, as one of the catch statements will never be reached
            // changed the order of heirarchy for the catch statements to trigger each one
        }
        int ans = numerator/denominator;
        cout << "The division of " << numerator << "/" << denominator << " is " << ans << endl;
    }
    catch (int a){
        cout << a << " is not valid as a denominator"<<endl;
    }
    catch (const exception &e){
        cout << "Generic Error: " << e.what() << endl;
    }
    catch (const invalid_argument& e){
        cout << "Specific Error: " << e.what() << endl;
    }
}

