#include <bits/stdc++.h>
using namespace std;
struct Node {
    public:
    int data;
    Node* next;
    public:
    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }
};

int main() {
    vector<int> arr = {2, 5, 8, 7};
    Node* y = new Node(arr[0], nullptr);
    cout << y;
    cout << y->data; // Printing the value 2
    // Node y = Node(arr[0], nullptr);  Means just creating an object where two things (arr[0] and nullptr) are there (w/o using new keyword)
    // cout << y; In this case, it gives error because it is not a pointer, it is an object. So, we cannot print the address of the object directly. We can print the address of the object using & operator like cout << &y; but it will give the address of the object in memory, not the value of the object.
    // We can either take data from it and print it 
    // cout << y.next; // Basically the null pointer value is printed because y.next is a pointer to the next node which is null in this case. So, it prints the null pointer value.
}
// Multiple constructors here, if we don't want to pass null pointer again and again, we can create another constructor which takes only one argument and sets the next pointer to null by default. So, we can create a new node like Node* y = new Node(arr[0]); and it will set the next pointer to null by default. This is called constructor overloading.

/*
#include <bits/stdc++.h>
using namespace std;

struct Node {
    public:
    int data;
    Node* next;
    public: // Constructor 1
    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }
        public: // Constructor 2
        Node(int data1) {
            data = data1; 
            next = nullptr; // Automatically assume it to ba a null pointer
        }
};
// This is how struct is defined above.
int main() {
    vector<int> arr = {2, 5, 8, 7};

    // Creating a new node with only the data, and the next pointer will be automatically set to null
    Node* y = new Node(arr[0]); // This and automatically assume it to ba a null pointer
    cout << y;
        Node(int data1) {
            data = data1; 
            next = nullptr;
        }
};

int main() {
    vector<int> arr = {2, 5, 8, 7};
    Node* y = new Node(arr[0], nullptr);
    cout << y;
    cout << y->data;
    */


// Using class, instead of struct, we can define a class and create an object of that class. 
// The only difference between struct and class is that in struct, the members are public by default, whereas in class, the members are private by default. 
// So, we need to specify the access specifier (public) for the members of the class. The rest of the code remains the same.

/*
#include <bits/stdc++.h>
using namespace std;
class Node {
    public:
    int data;
    Node* next;
    public:
    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }
};

int main() {
    vector<int> arr = {2, 5, 8, 7};
    Node* y = new Node(arr[0], nullptr);
    cout << y;
    cout << y->data; // Printing the value 2
    */