#include<iostream>
using namespace std;

int powr(int m,int n)
{
    if(m==0)
    return 1;
    if(n==0)
    return 1;
    return powr(m,n-1)*m;
}
int main(){
    int x=5,y=3,r=0;
    r=powr(5,4);
    cout<<r;
    return 0;
}