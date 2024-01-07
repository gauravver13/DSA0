#include<iostream>
#include<vector>
using namespace std;

//Heapify-Function:
void Heapify(vector<int>&maxHeap, int index)
{
    int largest = index;
    int left = 2*index+1;
    int right = 2*index+2;
    int size = maxHeap.size();

    if(left<size && maxHeap[left]>maxHeap[largest])
        largest = left;
    if(right<size && maxHeap[right]>maxHeap[largest])
        largest = right;
    if(largest != index)
    {
        swap(maxHeap[largest],maxHeap[index]);
        Heapify(maxHeap,largest);
    }

    return;
};


int main(){
    
    vector<int>maxHeap;
    int n, element;

    cout<<"Enter the Element: ";
    cin>>n;

    for(int i=0; i<n; i++)
    {
        cin>>element;
        maxHeap.push_back(element);
    }

    
    for(int i=n/2-1; i>=0; i--)
    {
        Heapify(maxHeap,i);
    }

    cout<<"Heap: ";
    for(int i=0; i<maxHeap.size()-1; i++)
    {
        cout<<maxHeap[i]<<" ";
    }
    
    return 0;
}