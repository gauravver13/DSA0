#include<iostream>
#include<vector>
using namespace std;

void insertHeap(vector<int>&maxheap)
{
    int index = maxheap.size()-1;
    int parent;

    while(index>0)
    {
        parent = (index-1)/2;
        //Parent is small
        if(maxheap[parent]<maxheap[index])
        {
            swap(maxheap[parent],maxheap[index]);
            index = parent;
        }
        //Parent is equal or big
        else
        break;
    }
};

//Delete-Heap:
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
void deleteHeap(vector<int>&maxHeap)
{
    //replace first element with last
    maxHeap[0] = maxHeap[maxHeap.size()-1];

    //delete the last element, cz after operation its the duplicate of the the main root;
    maxHeap.pop_back();

    //Heapify()-Give the inserted element to their correct position;

    Heapify(maxHeap,0);
};

int main(){
    
    vector<int>maxHeap;
    int n, element;
    //size of Heap;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        cin>>element;
        maxHeap.push_back(element);
        insertHeap(maxHeap);
    }

    cout<<"Heap: ";
    for(int i=0; i<maxHeap.size(); i++)
    {
        cout<<maxHeap[i]<<" ";
    }

    deleteHeap(maxHeap);
    deleteHeap(maxHeap);

    cout<<"Heap after deletion: ";
    for(int i=0; i<maxHeap.size(); i++)
    {
        cout<<maxHeap[i]<<" ";
    }
    return 0;
} 

