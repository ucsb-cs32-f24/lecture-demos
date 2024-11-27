// Regular Pointers
#include <iostream>
using namespace std;

int main() {
 
    int *p1 = new int(42);
    int *p2;
    // Good CS16/CS24 question:
    // what will go wrong if I replace the above line with:   
    // int *p2 = new int(55);
    
    cout << "p1 deferences to this value: " << *p1 << endl;
    p2 = p1;
    cout << "p2 deferences to this value: " << *p2 << endl;

    if (true) {
        // Whatever we do here with ptr p3,
        // it is ONLY valid within the defined block
        int* p3 = p1;
        cout << p1 << ";" << p2 << ";" << p3 << endl;
        cout << "(inside if-block) p3 deferences to this value: " << *p3 << endl;
    }

    delete p1;
    p1 = nullptr;

    cout << "\nThis program is finished!\n";
    return 0;
}
