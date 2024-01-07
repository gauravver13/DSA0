#include<iostream>
#include<vector>
using namespace std;

//Heapify-Function:
void Heapify(vector<int>&minHeap, int index)
{
    int smallest = index;
    int left = 2*index+1;
    int right = 2*index+2;
    int size = minHeap.size();

    if(left<size && minHeap[left]<minHeap[smallest])
        smallest = left;
    if(right<size && minHeap[right]<minHeap[smallest])
        smallest = right;
    if(smallest != index)
    {
        swap(minHeap[smallest],minHeap[index]);
        Heapify(minHeap,smallest);
    }

    return;
};

int main(){
    vector<int>minHeap;
    int n, element;

    cout<<"Enter the total no. of elements:";
    cin>>n;

    for(int i=0; i<n; i++)
    {
        cin>>element;
        minHeap.push_back(element);
    }

    for(int i=n/2-1; i>=0; i--)
    {
        Heapify(minHeap,i);
    }

    cout<<"Heap: ";
    for(int i=0; i<minHeap.size(); i++)
    {
        cout<<minHeap[i]<<" ";
    }
    return 0;
}