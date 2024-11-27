/* 
 * Simple thread example
 * for CS32, Z. Matni, 2023
 */
#include <iostream> 
#include <thread> 
#include <unistd.h> 
#include <string> 
using namespace std; 

void callback1(string val, int num) { 
	cout << "[T1] Thread running now!" << endl;
	cout << "[T1] Thread with str val: " << val << endl; 
	cout << "[T1] num: " << num << endl; 
	cout << "[T1] Thread id: " << this_thread::get_id() << endl;
	// sleep(5); 
    cout << "[T1] Thread finished." << endl;
} 

int main() { 
    
    std::thread t1(callback1, "one", 1); // add args to function here 
	
    cout << "[Main] Thread t1 has been called!" << endl;
    cout << "[Main] Waiting for thread t1 (id: " << t1.get_id() << ") to finish up." << endl; 
    

    // NOTE: If .join() or .detach() are not here
    //    then the program will have a runtime error (memory core dump)

    // t1.join();
    //t1.detach();
    //sleep(5);

	cout << "[Main] Program Done." << endl; 
    
	return 0; 
}
