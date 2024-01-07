#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<int>q;

    q.push(5);
    q.push(13);
    q.push(16);
    q.push(19);
    q.push(27);

    cout<<q.front()<<endl;
    q.pop();
    cout<<q.size()<<endl;
    q.pop();
    cout<<q.front();
    return 0;
}