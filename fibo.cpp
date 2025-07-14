#include<bits/stdc++.h>
using namespace std;

void fibo(int n, int a ,int b)
{
    if(n==0)
    return ;

    int c;
    cout<<a<<" ";
    c = a+b;
    fibo(n-1,b,c);
}


int main(){

    int n;
    cin>>n;
    fibo(n,0,1);

}