#include<iostream>
using namespace std;

int fact(int n)
{
    if(n==0)
        return 1;
    else 
        return fact(n-1)*n;
}

int Infact(int n)
{
    int r=1;
    for(int i=1;i<=n;i++)
    {
        r*=i;
    }
    return r;
}
int main(){
    int res;
    int x;
    cout<<"Enter number of your choice:";
    cin>>res;
    res=fact(res);
    cout<<res;
    cout<<endl;

    x=Infact(5);
    cout<<x;
    return 0;
}