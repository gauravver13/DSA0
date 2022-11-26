#include<iostream>
using namespace std;

int sum(int n)
{
    if(n==0)
        return 0;
    else
        return sum(n-1)+n;
}
int main(){
    int r;
    cout<<"enter a number:";
    cin>>r;
    r=sum(10);
    cout<<r;
    return 0;
}