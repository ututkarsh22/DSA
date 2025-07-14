#include<bits/stdc++.h>
using namespace std;

void reverseArray(int n, int arr[],int i){

    if(i>=n/2)return ;

    swap(arr[i],arr[n-i-1]);
    reverseArray(n,arr,i+1);


}
int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    cin>>arr[i];
    
    for(int i=0; i<n; i++)
    cout<<arr[i]<<" ";
    cout<<endl;    
    // reverseArray(n,arr,0,n-1); //1st type
    reverseArray(n,arr,0);//2nd type


    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}