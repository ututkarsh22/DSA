#include<bits/stdc++.h>
using namespace std;

//Adjacency List

int main()
{
    int vertex,edges;
    cin>>vertex>>edges;

    vector<int>Adjlist[vertex];
  
    int u,v;

    for(int i =0; i<edges; i++)
    {
        cin>>u>>v;
        Adjlist[u].push_back(v);
        Adjlist[v].push_back(u);
    }


    for(int i =0; i<vertex;i++)
    {
        cout<<i<<" -> ";
        for(int j =0; j<Adjlist[i].size();j++)
        cout<<Adjlist[i][j]<<" ";

        cout<<endl;
    }

    queue<int>q;
    vector<int>arr(vertex,0);
    vector<int>bfs;
    q.push(0);
    arr[0] = 1;
    int first;
    while(!q.empty())
    {   first = q.front();
        q.pop();
        bfs.push_back(first);
        for(int  i =0; i<Adjlist[first].size();i++){
            if(arr[Adjlist[first][i]] ==0)
            {
             arr[Adjlist[first][i]] = 1;   
            q.push(Adjlist[first][i]);
            }

        }
    }
        cout<<endl;
    for(int i =0; i<bfs.size();i++)
    cout<<bfs[i]<<" ";
// 9 9
// 0 1
// 0 2
// 1 5
// 1 7
// 2 3
// 2 4
// 5 6
// 6 8
// 7 8
}