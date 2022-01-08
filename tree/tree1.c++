#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,k;
    cout<<" enter a element"<<endl;
     cin>>n;
    cout<<" enter father";
    cin>>k;
    for(int i=0;i<n;i++)
    {
        int father =k;
        cout<<father<<endl;
        int left_child=(2*k)+1;
        cout<<left_child<<endl;
        int right_child=(2*k)+2;
        cout<<right_child<<endl;
        k++;
    }

}