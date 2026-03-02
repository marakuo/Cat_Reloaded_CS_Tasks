#include<bits/stdc++.h>
using namespace std;
const int MAX_SIZE = 100;

// implementation of circular queue array
// 0 1 2 3 4 5 [size -1] == last element
class ArrQueue {
    int rear; // addition
    int front; // deletion
    int count; // tracking
    int *arr;
    int maxSize;


public:
    ArrQueue(int size): front(0), count(0) {

        if (size <=0) maxSize = 100;
        else maxSize = size;
        arr = new int[maxSize];
        rear= maxSize-1;


    }

    ~ArrQueue() {
        delete[] arr;
    }
    // is empty
    bool isEmpty() {
        return count == 0;
    }
    // is full
    bool isFull() {
        return count == maxSize;
    }
    void enqueue(int data) {
        if (isFull()) cout << "Queue is full" << endl;
        else {
            rear = (rear +1) % maxSize;
            arr[rear] = data;
            count++;

        }
    }
    void dequeue() {
        if (isEmpty()) cout << "Queue is empty" << endl;
        else {
            front = (front + 1) % maxSize;
            count--;
        }

    }
    int peekFront() {
        assert(!isEmpty());
        return arr[front];

    }
    /*int peekRear() {
        if (isEmpty()) return -1;
        else return arr[rear];
    }*/
    int peekRear() {
        assert(!isEmpty());
        return arr[rear];

    }
    // print
    void printQueue() {
        assert(!isEmpty());
        for (int i = 0; i < count; i++)
        { cout << arr[(front + i) % maxSize] << " ";}
        cout << endl;
    }
    int search(int data) {
        assert(!isEmpty());
        for (int i =0; i < count; i++) {
            if (data == arr[(front + i) % maxSize] ) {
               return (front + i) % maxSize;
            }


        }
       return -1;
    }








};
int main() {
    ArrQueue arr(5);
    arr.enqueue(10);
    arr.enqueue(11);
    arr.enqueue(12);
    arr.enqueue(13);
    arr.printQueue(); // 10 11 12 13
    arr.dequeue();
    arr.printQueue(); // 11 12 13
    cout << arr.peekFront(); //11
    cout <<endl;
    arr.enqueue(14);
    arr.printQueue();// 11 12 13 14
    cout << arr.search(11) << endl;
    cout << arr.search(13) << endl;








    return 0;
}
