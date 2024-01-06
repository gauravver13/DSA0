#include<iostream>
using namespace std;

int main(){
    
    int arr[3][4];

    cout<<"Enter the input value: ";
    for(int i=0; i<3; i++)
    for(int j=0; j<4; j++)
    cin>>arr[i][j];

    //row wise matrix printing.
    cout<<"Row wise printing: "<<endl;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<4; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    //column wise matrix printing.
    cout<<"column wise printing of an array:"<<endl;
    for(int j=0; j<4; j++)
    {
        for(int i=0; i<3; i++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}