#include<iostream>
#include<vector>
using namespace std;

void insertHeap(vector<int>&minHeap)
{
    int index = minHeap.size()-1;
    int parent;

    while(index>0)
    {
        parent = (index-1)/2;

        if(minHeap[parent]>minHeap[index])
        {
            swap(minHeap[parent],minHeap[index]);
            index = parent;
        }
        else
            break;
    }
};

//delete-Heap:
void Heapify(vector<int>&minHeap,int index)
{
    int smallest = index;
    int left = 2*index+1;
    int right = 2*index+2;
    int size = minHeap.size()-1;

    if(left<size && minHeap[left]<minHeap[smallest])
        smallest = left;
    if(right<size && minHeap[right]<minHeap[smallest])
        smallest = right;
    if(smallest != index)
    {
        swap(minHeap[smallest],minHeap[index]);
        Heapify(minHeap,smallest);
    }
};

void deleteHeap(vector<int>&minHeap)
{
    //replace first element of heap with last one:
    minHeap[0] = minHeap[minHeap.size()-1];

    //delete the last duplicate element which is copied in the first(root):
    minHeap.pop_back();

    //Heapify- correct the position of inserted element in the root
    Heapify(minHeap,0);
};

int main(){
    vector<int>minHeap;
    int n, element;
    cout<<"Enter total no. of elements in an array:";
    cin>>n;

    for(int i=0; i<n; i++)
    {
        cin>>element;
        minHeap.push_back(element);
        insertHeap(minHeap);
    }

    cout<<"Min Heap:";
    for(int i=0; i<minHeap.size(); i++)
    {
        cout<<minHeap[i]<<" ";
    };

    deleteHeap(minHeap);
    deleteHeap(minHeap);
    deleteHeap(minHeap);

    cout<<endl;
    cout<<"Min Heap after deletion:";
    for(int i=0; i<minHeap.size(); i++)
    {
        cout<<minHeap[i]<<" ";
    };

    return 0;
}