// Shared Pointers
#include <iostream>
#include <string>
#include <memory>
using namespace std;

int main() {
    //shared_ptr is a type defined in <memory> lib
    //make_shared and use_count are function/methods defined in <memory> lib too
    shared_ptr<int> p1 = make_shared<int>(42);
    
    // YOU CAN ALSO DO THIS DECLARATION INSTEAD:
    //shared_ptr<int> p1(new int(42));

    cout << "p1 deferences to this value: " << *p1 << endl;
    cout << "p1 use count = " << p1.use_count() << endl;

    shared_ptr<int> p2 = p1;
    cout << "p1 use count = " << p1.use_count() << endl;


    if (true) {
        // Whatever we do here with a shared_ptr,
        // it is ONLY valid within the defined block
        shared_ptr<int> p3 = p1;
        cout << "(inside if block) p1 use count = " << p1.use_count() << endl;
    }

    cout << "p1 use count = " << p1.use_count() << endl;

    p2 = nullptr;

    cout << "p1 use count after p2=nullptr = " << p1.use_count() << endl;

    cout << "\nThis program is finished!\n";
    return 0;
}
