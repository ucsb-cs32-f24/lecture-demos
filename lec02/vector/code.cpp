#include <vector>
#include <iostream>

int main() {
    // part 1: create an empty vector, accessing elements, and  operations

    // create an empty vector
    std::vector<int> v1;

    // adding an element
    v1.push_back(5);
    v1.push_back(10);

    // accessing elements
    
    // accessing an individual element
    std::cout<<v1[0]<<std::endl;

    // use at() function to access element    
    std::cout<<v1.at(1)<<std::endl;

    // accessing an "out of bounds" element
    std::cout<<v1[2]<<std::endl;
    std::cout<<v1.at(2)<<std::endl;

    // ****************************************************************************************
    // part 2a: vector initializations

    // direct initialization: create a vector of 50 elements 
    std::vector<int> v2(50);

    // direct initialization: create a vector of 50 elements, all elements initialized to -1
    std::vector<int> v3(50, -1);

    // list initialization: create a vector with 3 elements: 1,2,3
    std::vector<int> v4{1,2,3};

    std::cout<<v2[0]; 
    std::cout<<v3[0];
    std::cout<<v4[0];

    // part 2b: iterating over a vector
    std::vector<int> v5{1,2,3};

    std::cout<< "elements in vector:\n";
    // two ways to print out all elements
    for(size_t i = 0; i < v5.size(); i++ ) {
        std::cout<< v5[i] << "\n";
    }

    std::cout<< "elements in vector:\n";
    for(int elem : v5) {
        std::cout << elem << "\n";
    }

    // this is the best way to just view the elements without doing expensive copying
    std::cout<< "elements in vector:\n";
    for(const int& elem : v5) {
        std::cout << elem << "\n";
    }

    // ****************************************************************************************
    // part 3: storage
    std::vector<int> v6(50);
    
    // storage is contiguous 
    std::cout<< sizeof(int) << "\n";
    std::cout<< &(v6[0]) << "\n";
    std::cout<< &(v6[1]) << "\n";
    std::cout<< &(v6[2]) << "\n";

    std::cout<< v6.size() << "\n";
    std::cout<< sizeof(v6) << "\n"; // why 24???

    // ****************************************************************************************
    

    // part 4: using an iterator
    std::vector<int> v7{1,2,3};

    std::vector<int>::iterator begin = v7.begin();
    std::vector<int>::iterator end = v7.end();

    std::cout<< "elements in vector v7:\n";
    for(std::vector<int>::iterator i = begin; i < end; i++) {
        std::cout<< *i<<"\n";
    }

    // advanced: using auto keyword to let the compiler deduce the type of the iterator
    // auto begin = v7.begin();
    // auto end = v7.end();

    // std::cout<< "elements in vector v7:\n";
    // for(auto i = begin; i < end; i++) {
    //     std::cout<< *i<<"\n";
    // }

    // for the curious:
    // https://www.learncpp.com/cpp-tutorial/type-deduction-for-objects-using-the-auto-keyword/

    return 0;
}