
   class MinStack  {
public:
    struct Node {
       int  Data;
        Node* Next; 
    };
    Node*Top;
    MinStack():Top(nullptr) {  } 
    // isEmpty
    bool isEmpty() {
        return (Top == nullptr);
    }
    //push
    void push (int element) {
        Node*newnode = new Node();
        newnode->Data = element;
        newnode->Next = Top;
        Top = newnode;
    }

    int top() {
        if (isEmpty()) return -1 ;
        else return Top->Data;
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack is empty" << endl;
        }
        else {
            Node*delptr =Top;
            Top = Top->Next;
            delete delptr;

        }
    }
    int  getMin() {
        if (isEmpty()) {
            cout << "Stack is empty" << endl;
            return -1; 
        }

        Node* temp = Top;
        int  minimum = temp->Data;

        while (temp != nullptr) {
            if (temp->Data < minimum) {
                minimum = temp->Data;
            }
            temp = temp->Next;
        }

        return minimum;
    }


};

