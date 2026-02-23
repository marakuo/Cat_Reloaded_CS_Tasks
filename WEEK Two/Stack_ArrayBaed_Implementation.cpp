#include <iostream>
#include <string>
using namespace std;
const int MAX_SIZE = 100;
template <class t>
class Stack {
private:

    int top;
    t item[MAX_SIZE]; // change the data type according to ur need
public:
    Stack():top(-1){}
    // implementing push
    void push(t Element) {
        if (top >= MAX_SIZE -1) cout << "Stack Is Full!" << endl;
        else {
            top++;
            item[top] = Element;
        }
    }
    // isEmpty
    bool isEmpty() {
       return top < 0; // || return top ==-1;


    }
    // implement pop == deleting last element
    void pop() {
        if (isEmpty()) cout <<"Stack is Empty"<<endl;
        else top--;


    }
    // saving the popped value for any case
    void pop(t& Element) {
        if (isEmpty()) cout <<"Stack is Empty"<<endl;
        else {
            Element = item[top];
            top--;
        }

    }
    void getTop(t& topStack) {
        if (isEmpty()) cout <<"Stack is Empty"<<endl;
       else {
           topStack = item[top]; // topStack == y
           cout<< topStack << endl; // return the new value of y
       };

    }
    // printing stack elements
    void print() {
        cout << "[ ";
        for (int i = top; i >=0  ; i--) {
            cout << item[i] << " ";

        }
        cout << "]";
        cout << endl;
    }


};




int main() {
    // creating object
    Stack <int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.print(); // [last ..... first]

    int  y =0; // called by reference (treating toStck and y as one variable)
   s.getTop(y);
    s.pop();
    s.push(9);
    s.print();












    return 0;
}
