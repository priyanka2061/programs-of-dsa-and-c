// Implementation of graph using list adjacancy
#include<bits/stdc++.h>
using namespace std;
int main ()
{   int n,m;
    cout<<" enter a number of vertics and edge for graph ..";
    cin>>n>>m;
    vector<pair<int ,int>>graph[n];
    for(int i=0;i<m;i++)
    {
        int v1,v2 ,w;
        cout<<" enter the vertics for egde and weight "<<endl;
        cin>>v1>>v2>>w ;
        graph [v1].push_back({v2,w});
        graph[v1].push_back({v2,w});
    }
    return 0;
}