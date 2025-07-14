#include<bits/stdc++.h>
using namespace std;

 void merge(int n,int arr[],int start,int mid,int end){

    int temp[end-start+1];
    int i=start,j=mid+1;
    int pos=0;

    while(i<=mid && j<=end)
    {
        if(arr[i]<=arr[j])
        temp[pos++]=arr[i++];
        else
        temp[pos++]=arr[j++];
    }
    while(i<=mid)
    temp[pos++]=arr[i++];
    while(j<=end)
    temp[pos++]=arr[j++];

    pos=0;
    while(start<=end)
    arr[start++]=temp[pos++];
    
    
}
void mergeSort(int n,int arr[],int start,int end){

if(start>=end)return ;
int mid=start+(end-start)/2;

mergeSort(n,arr,start,mid);
mergeSort(n,arr,mid+1,end);
merge(n,arr,start,mid,end);

     
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
    mergeSort(n,arr,0,n-1);

    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    
    return 0;
}