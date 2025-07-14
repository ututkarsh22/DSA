#include<bits/stdc++.h>
using namespace std;

//checking vowel
int cntV(string s, int i)
{
    if(i==-1)
    return 0;

    if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]== 'o' || s[i]== 'u')
    return 1 + cntV(s,i-1);
    else 
    return cntV(s,i-1);
}


//is palindrome
// bool palin(string name , int s, int l)
// {
//     if(name[s]!=name[l])
//     return 0;

//     if(s>l)
//     return 1;

//     return palin(name, s+1,l-1);
// }
//recursion in array
// void printArr(int n, int arr[],int i)
// {
//     if(i==n) 
//     return ;

//     cout<<arr[i]<<" ";
//     printArr(n,arr,i+1);
// }
// void printArr2nd(int n, int arr[])
// {
//     if(n<0)
//     return ;

//     printArr2nd(n-1,arr);
//     cout<<arr[n]<<" ";
// }
int main()
{
    // int arr[6] = {5,2,6,7,52,74};
    // printArr(6,arr,0);
    // cout<<endl;
    // printArr2nd(5,arr);

    string s = "india has the great leadership";
    cout<<cntV(s,s.size()-1);

}