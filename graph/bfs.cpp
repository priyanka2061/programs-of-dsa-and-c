// Implementation of Breath FIRST Search using list adjacancy.
#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
vector<int>graph[N];
 int visited[N];
 int level[N];
 void bfs(int source)
 {  int current;
     queue<int> q;
     q.push(source);
     visited[source]=1;
     while(!q.empty())
     {
        current=q.front();
        cout<<current<<" ";
        q.pop();
        for(int i:graph[current])
        {
            if(visited[i]!=1)
            {
                q.push(i);
                visited[i]=1;
            }
            level[i]=level[current]+1;
        }

         
     }


 }
 int main()
 {
     int m,n;
     cout<<" \n enter the number of vertex and edge"<<endl;
     cin>>n>>m;
     for(int i=1;i<=m;i++)
     {
         int  v1,v2;
         cout<<"\n enter the edge  vertax"<<endl;
         cin>>v1>>v2;
         graph[v1].push_back(v2);
          graph[v2].push_back(v1);

     }
     bfs(1);
    
 }