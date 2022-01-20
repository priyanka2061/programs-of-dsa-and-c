/*#include<bits/stdc++.h>
using namespace std
int main ()
{ 
    int arr[10];
    int temp,n;
    cout<<" enter a array element ";
    cin>>n;
    for( int i=0;i<n;i++)
    cin>>arr[i];
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if( arr[i]>arr[j])
            {
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    } 
    for(int i=0;i<n;i++)
    cout<<arr[i];
    return 0;

}*/
#include <bits/stdc++.h>
using namespace std;

int main() {
      
    int arr[90]={ 90,30,70,40,80,10};
    int n=5;
    int temp,key,i,j;
    
    for( i=0;i<n-1;i++)
    {   
        key=i;
        for( j=i+1;j<n;j++)
            if(arr[j]<arr[key]);
             key=j;
        
        temp=arr[key];
        arr[key]=arr[i];
        arr[i]=temp;
        
    }
for( i=0;i<n;i++)
cout<<arr[i]<<" ";
    return 0;
}