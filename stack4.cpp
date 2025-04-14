//2 stack in one array
#include <bits/stdc++.h>
using namespace std;
class Mystack
{
public:
    int *arr;
    int size;
    int top1;
    int top2;

    Mystack(int size)
    {
        this->size = size;
        top1 = -1;
        top2 = size;
        arr = new int[size];
    }

    void push1(int num)
    {
        if ((top2 - top1) > 1)
        {
            top1++;
            arr[top1] = num;
        }
        else
        {
            cout << "stack overflow " << endl;
        }
    }
    void push2(int num)
    {
        if (top2 - top1 > 1)
        {
            top2--;
            arr[top2] = num;
        }
        else
        {
            cout << "stackoverflow" << endl;
        }
    }
    int pop1()
    {
        if (top1 >= 0)
        {
            int ans = arr[top1];
            top1--;
            return ans;
        }
        else
        {
            return -1;
        }
    }
    int pop2()
    {
        if (top2 < size)
        {
            int ans = arr[top2];
            top2++;
            return ans;
        }
        else
        {
            return -1;
        }
    }
};

int main()
{
    Mystack s(10); // Created a stack of size 10

    // Push elements to stack 1
    s.push1(5);
    s.push1(10);
    s.push1(15);

    // Push elements to stack 2
    s.push2(100);
    s.push2(90);
    s.push2(80);

    // Pop elements from stack 1
    cout << "Popped from stack 1: " << s.pop1() << endl; 
    cout << "Popped from stack 1: " << s.pop1() << endl; 

    // Pop elements from stack 2
    cout << "Popped from stack 2: " << s.pop2() << endl; 
    cout << "Popped from stack 2: " << s.pop2() << endl; 
    return 0;
}