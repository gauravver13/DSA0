#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int main(){
    
    // max heap
    priority_queue<int>p;
    //1: Push insert - log n
    p.push(4);
    p.push(8);
    p.push(2);
    p.push(7);

    p.pop();
    cout<<p.top()<<" ";;
    cout<<p.size()<<endl;
    cout<<p.empty();
    cout<<endl;
    //2: Pop - log n
    //3: Find value of max element top element
    //4: Size of Heap
    //5: Is Heap empty

    // min heap
    priority_queue<int, vector<int>, greater<int> >p1;
    p1.push(3);
    p1.push(12);
    p1.push(7);
    p1.push(1);
    p1.pop();
    cout<<p1.top();
    return 0;
}