class Solution {

  public:
    struct Node {
        char Data;
        Node* Next;
    };
    Node* top;
    Solution() : top(nullptr) {}

    bool isEmpty() {
        return top == nullptr;
    }

    void push(char element) {
        Node* newnode = new Node();
        newnode->Data = element;
        newnode->Next = top;
        top = newnode;
    }

    char pop() {
        if (isEmpty()) {
            cout << "Stack is empty!\n";
            return '\0';
        }

        char value = top->Data;
        Node* temp = top;
        top = top->Next;
        delete temp;
        return value;
    }

    string reverse(const string& S) {
        for (int i = 0; i < S.length(); i++)
            push(S[i]);

        string newstr = "";
        while (!isEmpty()) {
            newstr += pop();
        }
        return newstr;
    }
};
