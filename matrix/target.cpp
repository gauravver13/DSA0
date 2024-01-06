#include<iostream>
using namespace std;

int main(){
    int arr[3][3];
    int target=7;
//input:
    // cout<<"Enter the target value: ";
    // cin>>target;
    cout<<"Enter the values of matrix: ";
    for(int i=0; i<3; i++)
    for(int j=0; j<3; j++)
    cin>>arr[i][j];
    
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            if(arr[i][j]==target)
            {
                cout<<"Found";
                return 0;
            }
        }
    }
    cout<<"Not found";
    return 0;
}