#include<iostream>
#include<vector>
using namespace std;

int main(){
    pair<int,int>p;
    p.first = 10;
    p.second = 20;
    p = make_pair(30,40);
    cout<<p.first<<" "<<p.second<<endl;

    // 3 data-value pair 
    pair<int, pair<char, int>>p1;
    p1.first = 1;
    p1.second.first = 'd';
    p1.second.second = 3;

    cout<<p1.first<<" "<<p1.second.first<<" "<<p1.second.second<<endl;
    return 0;
}