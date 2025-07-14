#include<bits/stdc++.h>
using namespace std;

class Heap{

    int *arr;
    int size;
    int total_size;

    public:

    Heap(int n){
        arr = new int[n];
        size = 0;
        total_size = n;

    }

    void insert(int val)
    {
        if(size == total_size)
        {
            cout<<"Heap OverFlow\n";
            cout<<endl;
            return;
        }
        arr[size] = val;
        int index = size;
        size++;

        while(index>0 && arr[index]>arr[(index-1)/2])
        {
            swap(arr[index],arr[(index-1)/2]);
            index = (index - 1)/2;
        }

        cout<<val << " is inserted into the heap";
        cout<<endl;
    }
    void print(){
        for(int i = 0; i<size; i++)
        cout<<arr[i]<<" ";

        cout<<endl;
    }

    void Heapify(int index){

        int largest = index;
        int left = 2 * index + 1;
        int right = 2 * index + 2;

        if(left<size && arr[left]>arr[largest])
        {
            largest = left;
        }
        if(right<size && arr[right]>arr[largest])
        {
            largest = right;
        }

        if(largest != index)
        {
        swap(arr[index],arr[largest]);
        Heapify(largest);
        }
    }

    void Delete()
    {
        if(size == 0)
        {
            cout<<"Heap Underflow";
            return;
        }

        cout<<arr[0]<<" is deleted from the heap";
        cout<<endl;
        arr[0] = arr[size - 1];
        size--;
        Heapify(0);
        

    }

};



int main(){

        int p;
        cin>>p;
        Heap h1(p);
        int a;
        for(int i =0; i<p;i++)
        {
            cin>>a;
            h1.insert(a);
        }
        h1.print();
        h1.Delete();
        h1.Delete();
        h1.Delete();
        h1.print();
}