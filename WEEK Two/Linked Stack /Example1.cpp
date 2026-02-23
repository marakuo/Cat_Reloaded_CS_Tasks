#include <iostream>
#include <string>
using namespace std;
/*
 * Pointer based implementation
 * =======================
 * =  value + pointer    =  => node
 * =======================
 */
template <class t>

// Linked Stack
class Stack {
public:
    struct Node {
        t Data;
        Node* Next; // initially pointing to the node
    };
    Node*top; // initially pointing to the node
    Stack():top(nullptr) {  } // initializing top
    // isEmpty
    bool isEmpty() {
        return (top == nullptr);
    }
    //push
    void push (t element) {
        Node*newnode = new Node();
        newnode->Data = element;
        if (isEmpty()) {
            newnode->Next = nullptr;
            top = newnode;
        }
        else {
            // stack has items

            newnode->Next = top;
            top = newnode;
        }
    }
    void display() {
        Node*temp = top;
        while (temp != nullptr) {
            cout << temp->Data << " ";
            temp = temp->Next;

        }
        cout<<endl;
    }

};






int main() {
    Stack<int> s;
    int n;
    for (int i =0; i<=3 ; i++) {
        cout << "enter an element: ";
        cin >>n;
        s.push(n);
        s.display();

    }




    return 0;
}
