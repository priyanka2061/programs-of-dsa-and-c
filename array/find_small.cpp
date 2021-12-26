#include<bits/stdc++.h>
using namespace std;
int main()
{  int n,temp;
    int arr[30];
    cout<<" enter a number of element ..";
    cin>>n;
    for(int i=0;i<n;i++)
    cin>>arr[i];
    
      temp=arr[0];
       for(int i=0;i<n;i++)
       {
            if(arr[0]<arr[i])
            { 
                arr[0]=arr[0];
            }
            else
            {
                arr[0]=arr[i];
            }
       }
       cout<<"small:"<<arr[0];
    return 0;
}