#include<bits/stdc++.h>
using namespace std;
int main()
{ 
    int arr[]={ 10,40,60,30,80};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<n<<endl;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if( arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    return 0;
}