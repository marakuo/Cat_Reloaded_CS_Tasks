class Solution {

public:
    struct Node {
        int Data;
        Node* Next;
    };
    Node* top;
    Solution() : top(nullptr) {}

    bool isEmpty() { return top == nullptr; }

    void push(int element) {
        Node* newnode = new Node();
        newnode->Data = element;
        newnode->Next = top;
        top = newnode;
    }

    int pop() {
        if (isEmpty()) {
            cout << "Stack is empty!\n";
            return -1;
        }
        int value = top->Data;
        Node* temp = top;
        top = top->Next;
        delete temp;
        return value;
    }
void reverseArray(vector<int>& arr) {
    for (int i = 0; i < arr.size(); i++)
        push(arr[i]);

    for (int i = 0; i < arr.size(); i++)
        arr[i] = pop(); // overrride the original array 
}
};
