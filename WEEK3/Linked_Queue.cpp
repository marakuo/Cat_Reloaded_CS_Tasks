#include<bits/stdc++.h>
using namespace std;

class nextedQueue {
    struct Node {
        int data;
        Node*next;


    };
    Node* front;
    Node*rear;
    int count;
public:
    nextedQueue():front(nullptr), rear(nullptr), count(0) { }
    // methods
    bool isEmpty() {
        return front == nullptr;
    }
    void enqueue(int item ) {
        Node* newNode = new Node();
        newNode->data = item;
        if (isEmpty()) {
            rear = front = newNode;

        }else {
            rear->next = newNode;
            rear = newNode;
        }
        count++;

    }
    void dequeue() {
        if (isEmpty()) {
            cout<<"Queue is empty"<<endl;
            return;
        }
        else if (front == rear) {
            front = rear = nullptr;
        }else {
            Node*delptr = front;
            front = front->next;
            delete delptr;
        }
        count --;
        
    }
    void display() {
        Node* temp = front;
        if (isEmpty()) cout<<"Queue is empty"<<endl;
        else {
            while (temp !=nullptr) {
                cout << temp->data << " ";
                temp = temp->next;
            }
        }
        cout << endl;


    }
    bool search(int item) {
        Node* temp = front;
        if (isEmpty()) {cout<<"Queue is empty"<<endl; return false;}
        else {
            while (temp !=nullptr) {
               if (temp->data == item) {
                   return true;
               }
            }
        }
        cout << endl;

    }
    int peekFront(){return front->data;}
    int peekRear(){return rear->data;}
    int getCount(){return count;}


};

int main() {
    nextedQueue a;
    a.enqueue(1);
    cout <<a.getCount() << endl;
    cout << a.search(2) << endl;

    a.display();
    a.dequeue();
    a.display();









    return 0;
}
