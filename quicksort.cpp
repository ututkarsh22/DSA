#include<bits/stdc++.h>
using namespace std;

int partition(int n,int arr[],int start,int end){

    int pos=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<=arr[end])
        {
        swap(arr[i],arr[pos]);
        pos++;
        }
    }

    return pos-1;
}
void quickSort(int n,int arr[],int start,int end){

if(start>=end)return ;
int pivot=partition(n,arr,start,end);
quickSort(n,arr,start,pivot-1);
quickSort(n,arr,pivot+1,end);
     
}


int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];

    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
    quickSort(n,arr,0,n-1);

    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    
    return 0;
}