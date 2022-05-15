
// Implementatiob of graph using a mtrix adjacancy
#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<" plase enter number of vertics and edge..";
    int n,m;  // n is vertics and m is edge number .
    cin>>n>>m;
     int graph[n+1][n+1];
     for(int i=0;i<m;i++)
     {
         int v1,v2;
         cout<<" \nenter the vertics for edge";
         cin>>v1>>v2;
         graph[v1][v2]=1;
         graph[v2][v1]=1; // for weighted graph enter  here weight of graph.
     }
     

    return 0;
}