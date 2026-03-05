#include<bits/stdc++.h>
using namespace std;
class LinkedList {
public:
    struct Node {
        int data;
        Node*next;
    };
    Node* head;
    LinkedList():head(nullptr){}

    bool isEmpty() {
        return head == nullptr;
    }
    void Insert_at_first(int data) {
        Node* newNode = new Node;
        newNode->data = data;
        newNode->next = head;
        head = newNode;

    }
    void display() {
        Node* temp = head;
        while(temp) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
    int count() {
        Node*temp = head;
        int counter = 0;
        while (temp) {
            counter++;
            temp = temp->next;
        }
        return counter;
    }
    bool isFound(int data) {
        Node* temp = head;
        bool found = false;
        while(temp) {
            if (temp->data == data) {
                found = true;
            }
            temp = temp->next;
        }return found;
    }
    void Insert_Before(int val, int inserted ) {
        if (isEmpty()) { Insert_at_first(inserted); return; }
       if (isFound(val)) {
           if (head->data == val) {
               Node* newNode = new Node;
               newNode->data = inserted;
               newNode->next = head;
               head = newNode;
               return;
           }

           Node* newNode = new Node;
           newNode->data = inserted;
           Node* temp = head;
           while((temp->next !=nullptr) && (temp->next->data != val)) {
               temp = temp->next;
           }
           newNode->next = temp->next;
           temp->next = newNode;
       }else{cout <<"item is not found"<<endl;}

    }
    void append(int data) {
        if (isEmpty()) {Insert_at_first(data);}
        else {

            Node* temp = head;
            while(temp->next != nullptr) {
                temp = temp->next;

            }
            Node* newNode = new Node;
            newNode->data = data;
            temp->next = newNode;
            newNode->next = nullptr;
        }
    }
        void Delete(int element){
        Node*delptr = head;
        Node*previous = nullptr;
        if (isEmpty()) {
            cout << "The list is empty" << endl; return;

        } if (head->next == nullptr) {
            head->next = nullptr;
            delete delptr;
            return;
        }


            while ((delptr != nullptr) && (delptr->data != element)) {
                previous = delptr;
                delptr = delptr->next;
            }
        if (delptr->next == nullptr) { cout <<"element is not found"<<endl;}

            previous->next = delptr->next;
            delete delptr;
    }
};


int main() {
    LinkedList list;
    

    return 0;
}
