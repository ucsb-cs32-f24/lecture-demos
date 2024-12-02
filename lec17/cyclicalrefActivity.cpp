#include <iostream>
#include <memory>
using namespace std;

class Player { 
    public:
	    // shared_ptr<Player> companion;
        weak_ptr<Player> companion;  // using a weak_ptr fixes the issue caused by cyclical references 
	    ~Player() {cout << "~Player\n"; } 
}; 

int main() { 
	shared_ptr<Player> nancy = make_shared<Player>();
	shared_ptr<Player> oliver = make_shared<Player>();

    cout << "for nancy:: " << nancy.use_count() << endl;
    cout << "for oliver: " << oliver.use_count() << endl;

    nancy->companion = oliver;
	oliver->companion = nancy;

    cout << "\nUse Count After Cyclical Links:\n";
    cout << "for nancy:: " << nancy.use_count() << endl;
    cout << "for oliver: " << oliver.use_count() << endl;
}
