#include<bits/stdc++.h>
using namespace std;
class ArrayList {
    int *arr; // dynamic array
    int maxSize;
    int length;
public:
    ArrayList(int s) {
        if (s<0) maxSize=10;
        else maxSize=s;
        length =0;
        arr = new int[maxSize];
    }

    bool isEmpty() {
        return length ==0;

    }
    bool isFull() {
        return length = maxSize;
    }
    int getSize(){return length;}
    void display() {
        for (int i = 0; i < length; i++) {
            cout << arr[i] << " ";
        } cout << endl;
    }
    void insert(int pos, int data) {
        if (isFull()) { cout <<"list is full!";}
        else if (pos <0 || pos > length) {cout <<"pos out of bounds!";}
        else {
            for (int i = length; i > pos; i--) {
                arr[i] = arr[i-1];
                arr[pos] = data;
                length ++;
            }
        }

    }
    void remove(int pos) {
        if (isEmpty()) cout << "list is empty!";
        else if (pos <0 || pos > length) {cout <<"pos out of bounds!";}
        else {
            for (int i = pos; i < length; i++) {
                arr[i] = arr[i+1];
                length--;
            }
        }
    }
    void insertAtEnd(int element) {
        if (isFull()) cout << "list is full!";
        else {
            arr[length] = element;
            length++;
        }
    }
    int search(int element) {
        if (isEmpty()) cout << "list is empty!";
        else {
            for (int i = 0; i < length; i++) {
                if (element == arr[i]) {
                    return i;
                }return -1;
            }
        }
    }
    void update( int pos, int element) {
        if (isEmpty()) cout << "list is empty!";
        else if (pos <0 || pos > length) {cout <<"pos out of bounds!";}
        else {
            arr[pos] = element;


        }
    }
    int getElement(int pos) {
        if (isEmpty()) cout << "list is empty!";
        else if (pos < 0 || pos > length) {cout <<"pos out of bounds!";}
        else {
            return arr[pos];
        }
    }
    ~ArrayList() {
        delete[] arr;
    }
};



int main() {



    return 0;
}
