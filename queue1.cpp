#include <bits/stdc++.h>
using namespace std;
class Myqueue
{
public:
    int *arr;
    int size;
    int frontIndex;
    int rear;

    Myqueue(int size)
    {
        this->size = size;
        frontIndex = 0;
        rear = 0;
        arr = new int[size];
    }

    void enqueue(int x)
    {
        if (rear == size)
        {
            cout << "Queue is full";
        }
        else
        {
            arr[rear] = x;
            rear++;
        }
    }

    int dequeue()
    {
        if (frontIndex == rear)
        {
            return -1;
        }
        else
        {
            int ans = arr[frontIndex];
            arr[frontIndex] = -1;
            frontIndex++;
            if (frontIndex == rear)
            {
                frontIndex = 0;
                rear = 0;
            }
            return ans;
        }
    }

    bool isEmpty()
    {
        return frontIndex == rear;
    }

    int getFront()
    {
        if (frontIndex == rear)
        {
            return -1;
        }
        else
        {
            return arr[frontIndex];
        }
    }
};

int main()
{
    /*
    // to create a queue by stl
    queue<int> q;
    q.push(21);
    q.push(15);
    cout<<"front of q is : "<<q.front()<<endl;
    q.push(13);
    cout<<"size of the queue : "<<q.size()<<endl;
    q.pop();

    cout<<"size of queue is : "<<q.size()<<endl;
    if(q.empty()){
        cout<<"Queue is empty"<<endl;
    }
    else{
        cout<<"queue is not empty"<<endl;
    }
    */
   Myqueue q(5);
   q.enqueue(10);
   q.enqueue(20);
   q.enqueue(30);
   cout << "Front element: " << q.getFront() << endl;
   cout << "Dequeue: " << q.dequeue() << endl;
   cout << "Front element after dequeue: " << q.getFront() << endl;
   q.enqueue(40);
   q.enqueue(50);
   q.enqueue(60); 
   while (!q.isEmpty())
   {
       cout << "Dequeue: " << q.dequeue() << endl;
   }
   cout << "Trying to dequeue from empty queue: " << q.dequeue() << endl;
   return 0;
}







