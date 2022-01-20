/*#include<bits/stdc++.h>
using namespace  std;
int main()
{ 
    int arr[10];
    cout<<" enter how much element you want to enter";
    int n;
    cin>>n;
     cout<<" Binary number";
     for(int i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    int t=1,sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+(arr[i]*t) ;
        t=t*2;
    } 
    cout<<sum;
    return 0;
}*/
#include<bits/stdc++.h>
using namespace std;
int main()
{  int n,sum=0,base=1;
    cout<<" enter a binary number";
    cin>>n;
    int temp=n;
    while(temp)
    {
        int last_digit=temp%10;
        sum=sum+last_digit*base;
        base= base*8;
        temp=temp/10;
    } 
    cout<<sum;
}
