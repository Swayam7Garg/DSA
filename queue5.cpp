#include<bits/stdc++.h>
using namespace std;

class Queue {
    private:
        stack<int> st1, st2;
    
    public:
        // Enqueue operation (O(1))
        void push(int x) {
            st1.push(x);
        }
    
        // Dequeue operation
        int pop() {
            if (empty()) {
                cout << "Queue is empty"<<endl;
                return -1;
            }
    
            if (st2.empty()) {
                while (!st1.empty()) {
                    st2.push(st1.top());
                    st1.pop();
                }
            }
    
            int ans = st2.top();
            st2.pop();
            return ans;
        }
    
        // Peek front element 
        int front() {
            if (empty()) {
                cout << "Queue is empty!";
                return -1;
            }
    
            if (st2.empty()) {
                while (!st1.empty()) {
                    st2.push(st1.top());
                    st1.pop();
                }
            }
    
            return st2.top();
        }
    
        // Check if the queue is empty
        bool empty() {
            return st1.empty() && st2.empty();
        }
    
        // Display queue from front to rear
        void display() {
            stack<int> temp1 = st1;
            stack<int> temp2 = st2;
            vector<int> result;
    
            // First get elements from st2 (front to middle)
            while (!temp2.empty()) {
                result.push_back(temp2.top());
                temp2.pop();
            }
    
            // Then reverse st1 elements and add (middle to rear)
            vector<int> tempFromSt1;
            while (!temp1.empty()) {
                tempFromSt1.push_back(temp1.top());
                temp1.pop();
            }
    
            // Reverse to maintain correct queue order
            for (int i = tempFromSt1.size() - 1; i >= 0; --i) {
                result.push_back(tempFromSt1[i]);
            }
    
            // Print all elements
            for (int val : result) {
                cout << val << " ";
            }
            cout << endl;
        }
    };
    
    int main() {
        Queue q;
        q.push(34);
        q.push(36);
        q.push(67);
    
        q.pop();        // removes 34
        q.push(35);
        q.push(57);
        q.pop();        // removes 36
    
        cout << "Queue elements: ";
        q.display();    // should print: 67 35 57
    
        cout << "Front element: " << q.front() << endl;  // should print 67
    
        return 0;
    }