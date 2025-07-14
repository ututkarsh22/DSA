#include<bits/stdc++.h>
using namespace std;

int main()
{
     int n,m;
     cin>>n>>m;
     vector<int>arr[n];\
     int u,v;
     for(int i =0;i<m;i++)
     {
         cin>>u>>v;
         arr[u].push_back(v);
         arr[v].push_back(u);
     }
     
     vector<bool>visited(n,0);
     vector<int>ans;
     queue<int>q;
     
     
     
     for(int i = 0;i<n;i++)
     {
         if(!visited[i])
         {
             q.push(i);
             visited[i] = 1;
             int node;
             while(!q.empty())
             {
                 node = q.front();
                 q.pop();
                 for(int j = 0;j<arr[node].size();j++)
                 {
                     if(!visited[arr[node][j]])
                     {
                         q.push(arr[node][j]);
                         visited[arr[node][j]] = 1;
                     }
                 }
                 ans.push_back(node);
             }
         }
     }
     
     for(int i = 0 ;i<n;i++)
     cout<<ans[i]<<" ";
}