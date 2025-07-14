#include<bits/stdc++.h>
using namespace std;


void towerOfhanoi(int n, char source, char helper, char destination)
{
    if(n==0)
    return ;

    towerOfhanoi(n-1,source,destination,helper);
    cout<<"Moivng the cell in "<<n<<" from rod "<<source <<" to rod "<<helper<<endl;

    towerOfhanoi(n-1, destination , helper,source);
}
int main()
{
    int n;
    cin>>n;

    towerOfhanoi(n, 'A','C','B');
}