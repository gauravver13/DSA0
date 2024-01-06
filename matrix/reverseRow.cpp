#include<iostream>
using namespace std;

int main(){
        int n=4;
        int arr[4][4] = { 1, 2, 3, 13,
                          4, 5, 6, 14,
                          7, 8, 9, 15,
                          10, 11, 12, 16};
        int i=0;
        while(i<n/2)
        {
            for(int j=0; j<n; j++)
            {
                int temp=arr[i][j];
                arr[i][j]=arr[n-i-1][j];
                arr[n-i-1][j]=temp;
            }
        i++;
        }

        //Print an array:
        for(i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    return 0;
}   