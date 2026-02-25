#include <string>
using namespace std;

class Solution {
private:
    class Stack {
    public:
        struct Node {
            char Data;
            Node* Next;
        };
        Node* top;
        Stack() : top(nullptr) {}

        bool isEmpty() { return top == nullptr; }

        void push(char element) {
            Node* newnode = new Node();
            newnode->Data = element;
            newnode->Next = top;
            top = newnode;
        }

        void pop() {
            if (!isEmpty()) {
                Node* delptr = top;
                top = top->Next;
                delete delptr;
            }
        }

        char peek() { return top->Data; }
    };

    bool isPaired(char open, char close) {
        return (open == '(' && close == ')') || (open == '{' && close == '}') ||
               (open == '[' && close == ']');
    }

public:
    bool isValid(string exp) {
        Stack s;
        for (int i = 0; i < exp.length(); i++) {
            char c = exp[i];
            if (c == '(' || c == '{' || c == '[') {
                s.push(c);
            } else if (c == ')' || c == '}' || c == ']') {
                if (s.isEmpty())
                    return false;

                char top = s.peek();
                s.pop();

                if (!isPaired(top, c))
                    return false;
            }
        }
        return s.isEmpty();
    }
};
