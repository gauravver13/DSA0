#include<iostream>
using namespace std;

int main()
{
    int n=3;
    int arr[3][3] = { 1, 2, 3,
                      4, 5, 6,
                      7, 8, 9};
        
     for(int i=0; i<n; i++)
	    {
	        int k = n-1;
	        for(int j=0; j<n; j++)
	        {
	            int temp = arr[i][j];
	            arr[i][j] = arr[k][i];
	            arr[k][i] = temp;
	            k = k-1;
	        }
        }
    
    //print:
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}       