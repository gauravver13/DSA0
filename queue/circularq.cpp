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
        front=rear=-1;
        this->size=size;
        arr=new int[size];
    }

    //push element in queue.
    void push(int data)
    {
        if(empty())
        {
            front=rear=0;
        }
        else if(full())
        {
            cout<<"Queue is full";
        }
        else
        {
            rear=(rear+1)%size;
            arr[rear] = data;
        }
    }

    //pop element in queue.
    void pop()
    {
        if(empty())
        {
            cout<<"queue is empty";
        }
        else if(front==rear)
        {
            front=rear=-1;
        }

    }

    bool full()
    {
        // if(front==(rear+1)%size);
        //     return 1; same code below--;
        return front==(rear+1)%size;
    }
    bool empty()
    {
        if(front==-1 && rear==-1)
            return 1;
    }
};

int main(){
    
    return 0;
}