// A pointer in C++ is a variable that stores the memory address of another variable rather than holding a direct value itself.

#include <iostream>
using namespace std;

int main() {
    int score = 10;          // A regular integer variable
    int* ptr = &score;       // A pointer storing the memory address of 'score'

    // 1. Print the value and memory address
    cout << "Value of score: " << score << endl;
    cout << "Memory address of score (&score): " << &score << endl;
    cout << "Address stored in ptr: " << ptr << endl;

    // 2. Access the value using the pointer (Dereferencing)
    cout << "Value pointed to by ptr (*ptr): " << *ptr << endl;

    // 3. Modify the original variable through the pointer
    *ptr = 25;
    cout << "New value of score: " << score << endl;

    return 0;
}

/*
Value of score: 10
Memory address of score (&score): 0x7ffee4b8a9ac
Address stored in ptr: 0x7ffee4b8a9ac
Value pointed to by ptr (*ptr): 10
New value of score: 25
*/

// (Note: The hexadecimal memory address will vary each time you run the program.)

// Address-of Operator (&). Placing & before a variable name retrieves its location in your computer's memory.
// Pointer Declaration (int*). The asterisk next to the data type tells the compiler that ptr will hold a memory address for an integer, not an integer itself. The pointer's type must always match the type of the variable it points to
// Dereference Operator (*). Using * before an existing pointer name accesses the actual value stored at that memory address. Changing *ptr directly updates score because both refer to the exact same spot in memory.