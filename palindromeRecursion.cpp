#include<bits/stdc++.h>
using namespace std;

bool palindr(string s,int l){

    
    if(l>=s.size()/2)return true;

    
    if(s[l]!=s[s.size()-l-1])return false;
    else{
        palindr(s,l+1);
    }

    return true;
}


int main(){
    string s;
    cin>>s;

    // if(palindr(s,0,s.size()-1))//1st type
    if(palindr(s,0))
    cout<<"true";
    else cout<<"false";
}