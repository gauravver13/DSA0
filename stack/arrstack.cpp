#include<iostream>
using namespace std;

class Stack
{
    int top;
    int *arr;
    int size;

    public:
        Stack(int size)  //size<-->s,then there is no use of this->pointer, size can be accessed-no confussion
        {
            arr = new int[size];
            top = -1;
            this->size = size;
        };

        //Push element in stack.
        void push(int data)
        {
            if(top== size-1)
            {
                cout<<"Stack Overflow"<<endl;
                return;
            }
            top++;
            arr[top]=data;
        };

        //Pop an element from stack.
        void pop()
        {
            if(top == -1)
            {
                cout<<"Stack underflow"<<endl;
                return;
            }
            top--;
            return;
        };

        //Value of peek. or u can say peak, aha
        int peek(int data)
        {
            if(top == -1)
            {
                cout<<"Stack Underflow";
                return;
            }
            return arr[top];
        };

        //empty check?
        bool empty()
        {
            return top==-1;
        };
};

int main(){
    Stack S(3);

    S.push(1);
    S.push(7);
    S.push(13);
    S.push(17);


    return 0;
}