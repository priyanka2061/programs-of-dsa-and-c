#include<stdio.h>
void  array_display();
void array_rotation();
void main()
{    

     int arr[]={ 1,2,3,4,5,6,7,8,9};
     int n;
     int d= 2;
     n=sizeof(arr)/sizeof(arr[0]);
     printf("\n original array are:");
     array_display(arr, n);
     array_rotation(arr,n,d);
     printf("\n after rotation of array :");
     array_display(arr,n);

}
void array_display(int arr[],int n)
{  
    int i;
    for(i=0;i<n;i++)
    printf("%d ",arr[i]);
     
}
void array_rotation( int arr[], int n ,int c)
{
    int i;
    int temp;

    while(c!=0)
 {    temp=arr[0];
        for(i=0;i<n-1;i++)
        {
        arr[i]=arr[i+1];

          } 
          arr[n-1]=temp;
       c--;
 }

}
