#include<bits/stdc++.h>
using namespace std;

//Adjacency List

int main()
{
    int vertex,edges;
    cin>>vertex>>edges;

    // vector<int>Adjlist[vertex];its for unweighted graph
    vector<pair<int,int>>Adjlist[vertex];
    int u,v,weight;

    for(int i =0; i<edges; i++)
    {
        cin>>u>>v>>weight;
        Adjlist[u].push_back(make_pair(v,weight));
        Adjlist[v].push_back(make_pair(u,weight));
    }


    for(int i =0; i<vertex;i++)
    {
        cout<<i<<" -> ";
        for(int j =0; j<Adjlist[i].size();j++)
        cout<<Adjlist[i][j].first<<' '<<Adjlist[i][j].second<<' ';

        cout<<endl;
    }
}