//circular queue implementation
#include <bits/stdc++.h>
using namespace std;

class Mycircularqueue {
    int* arr;
    int size;
    int front;
    int rear;

public:
    Mycircularqueue(int size) {
        this->size = size;
        arr = new int[size];
        front = rear = -1;//initailly front and rear are -1 
    }

    bool enqueue(int x) {
        if ((front == 0 && rear == size - 1) || ((rear + 1) % size == front)) {
            cout << "Queue is full" << endl;
            return false;
        }
        //inserting first element
        if (front == -1) { 
            front = rear = 0;
        }
        //if the rear is at the end of the queue and front is not on the 0th index 
        else if (rear == size - 1 && front != 0) {
            rear = 0;
        } 
        else {
            rear = (rear + 1) % size;
        }

        arr[rear] = x;
        return true;
    }

    int dequeue() {
        //if the queue is empty
        if (front == -1) {
            cout << "can't pop queue is empty" << endl;
            return -1;
        }

        int ans = arr[front];//storing the front value 
        arr[front] = -1;

        if (front == rear) {
            front = rear = -1;
        } else {
            front = (front + 1) % size;
        }

        return ans;
    }
};

int main() {
    Mycircularqueue q(5);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);

    q.enqueue(60); // should print "Queue is full"

    cout << "Dequeued: " << q.dequeue() << endl;
    cout << "Dequeued: " << q.dequeue() << endl;

    q.enqueue(60);
    q.enqueue(70);
    q.enqueue(80); // might be full again

    while (q.dequeue() != -1) {
        // keep dequeuing
    }

    q.dequeue(); // one more to test empty case

    return 0;
}
