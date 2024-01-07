#include<iostream>
#include<map>
using namespace std;

int main(){
    
    map<int,int>m;

    m[2] = 21;
    m[5] = 11;
    m[7] = 13;
    m[10] = 0;
    m[0] = 17;
    // cout<<m[2]<<" "<<m[7]<<endl;
    // cout<<m[10];
    cout<<m.size()<<endl;
    cout<<m.count(0)<<endl;

    for(auto i = m.begin(); i != m.end(); i++)
    {
        cout<<i->first<<" "<<i->second<<endl;
    }

    // cout<<m.count(10);
    return 0;
}