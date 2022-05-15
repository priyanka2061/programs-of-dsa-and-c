// traverse graph using depth first  serach
#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
vector<int>graph[N];
bool visited[N];
void dfs(int v)

{    
     // take action on vertex after entering the vertex
cout<<v<<endl;
         // if(visited[v]==true)
            //return ;
       visited[v]=true;
        for(int i : graph[v])
        {  
             cout<<v<<" "<<i<<endl;
             //  take action on child befor entering the child node
            if(visited[i]==true)
             continue;
            dfs (i);
            // take action on child after exiting child node
        }
     
        //  take action on vertex after exiting the node
}
int main()
{
     int n,m;
    cout<<" enter a number of vertics and edge for graph ..";
    cin>>n>>m;
        int v,v1,v2 ,w;
    for(int i=0;i<m;i++)
    {
        cout<<" enter the vertics for egde "<<endl;
        cin>>v1>>v2 ;
        graph [v1].push_back(v2);
        graph[v2].push_back(v1);
    }
    cout<<"\n enter the vertex  want to traverse from..";
    cin>>v;
    dfs(v);
    return 0;
}
// time compexity is o(v+E);
/**
 * it call dfs function v time and under each call run loop 2E time therfore  overall timecomplexity is o(V+E )  **/