#include<bits/stdc++.h>
using namespace std;

void fibo(string s , int t)
{
  vector<char>naya;
       for(int i =0 ;i<t;i++)
            {
                int j =0;
               while(j<s.size() || j<naya.size())
               {
                switch(i)
                {
                    case 0:
                    if(s[j] == 'z')
                        {
                            naya.push_back('a');
                            naya.push_back('b');
                        }
                        else
                        {
                            
                            naya.push_back(s[j]+1);
                        }
                        j++;        
                    default:
                    if(naya[j] != 'z')
                    {
                        int p = naya[j]+1;
                        naya.push_back(p);
                        j++;
                    }
                    else
                    {
                        int p;
                    }
                }
        

               }
               
                    
            }
        cout<<naya.size();
}


int main(){

   string s;
   int t;
   cin>>s>>t;
   fibo(s,t);

}