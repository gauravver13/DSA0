#include<iostream>
using namespace std;

class Queue
{
    int front;
    int rear;
    int *arr;
    int size;

    public:
    Queue(int size)
    {
        front=rear=0;
        this->size=size;
        arr = new int[size];
    }

    //Push Element in Queue.
    void push(int data)
    {
        //Queue is full or not
        if(rear==size)
        {
            cout<<"Queue is Full"<<endl;
            return;
        }
            arr[rear] = data;
            rear++;
    }

    //Pop Element from the array
    void pop()
    {
        if(front==rear)
        {
            cout<<"Queue is empty"<<endl;
            return;
        }
        front++;
    }

    //Empty check?
    bool empty()
    {
        return front==rear;
    }
};

int main(){
    Queue q(5);

    q.push(1);
    q.push(3);
    q.push(7);
    q.push(13);
    q.push(17);
    q.push(32);
    return 0;
}