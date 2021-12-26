 /*//reverse the string...
#include<bits/stdc++.h>
using namespace std;
int  main()
{
    char arr[9]={"hello"};
    for(int i=5;i>=0;i--)
    cout<<arr[i]<<endl; 
    return 0;

}
/*#include<iostream>
#include<string.h>
using namespace std;
int main()
{   
    char a[18];
    cout<<" enter string";
    cin>>a;
    int y=strlen(a);
    cout<<y;
    return 0;
}
#include<iostream>
#include<string.h>
using namespace std;
int main()
{   int count=0;
    char a[18] ={ " abracadabra"};
    int y=strlen(a);
    cout<<y<<endl;
    for(int i=0;i<=y;i++)
    {
        if(a[i] =='a')
        count++;
    
        
    } 
    cout<<count;
    return 0;
}*/ 
#include<iostream>
#include<string.h>
using namespace std;
int main()
{   

    char a[10]={"eric"};
    int y=strlen(a);
    for(int i=0;i<y;i++)
    {
    for(int j=0;j<=i;j++)
    cout<<a[j]<<"\n";
    }
    cout<<"\n";
    int n=7;
    cout<<n/2;


    return 0;
}