#include<stdio.h>
void reverse_arr();
void display();
void main()
{   int i;
    int arr[10],n;
    printf(" enter a ement,,");
    scanf("%d",&n);
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
      display(arr,n);
     reverse_arr(arr,n);
     display(arr,n);

    
}  
void reverse_arr(int a[],int n)
{
    int i,temp;
    for(i=0;i<n%2;i++)
    {
        temp=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=temp;
    

    }
} 
void display(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    printf("\n%d",a[i]);
}