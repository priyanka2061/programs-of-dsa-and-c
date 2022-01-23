// INSERTION SORT IN CPP
#include<bits/stdc++.h>
using namespace std;
int main ()
{   int key,i,j;
  int arr[]={ 2,4 ,5,9,2};
  int n= sizeof(arr)/sizeof(arr[0]);
  cout<<n<<endl;
 for(int i;i<n;i++)
  {
     int  current =i;
      j=i-1;
      cout<<j<<endl;
      for(int j=0;j<i;j++)
      {    if(arr[j]>arr[current])
          arr[j+1]=arr[j];
          j=j-1;
      }
      arr[j+1]=current;
  } 
  for(int i=0;i<n;i++)
  cout<<arr[i]<<" ";
    return 0;
}  
/*for(int i=0;i<n;i++)  // 2,9,8,0,3
{
    current =i;
    j=i-1;
    cout<<j;
    for(int j=0;j<i;j++)
    {
        if(arr[current]<arr[j])
        arr[j+1]=arr[j];
        j=j-1;
    } 
    arr[j+1]=current;

} 
}*/
