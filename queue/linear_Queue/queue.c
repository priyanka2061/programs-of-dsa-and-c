#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int queue[MAX];
int rear=-1,front=-1;
void enqueue();
void dequeue();
void traverse();
void main ()
{
     int ch,d;
     while(1)
   {
    printf("\n M.E.N.u .....");
    printf("\n1. ENQUEUE OPERATION...");
    printf("\n2. DEQUEUE OPERATION....");
    printf("\n3. DISPLAY ELEMENT.....");
    printf("\n4. EXIT.......");
    printf("\n enter a choice ......");
    scanf("%d",&ch);
    switch(ch)
    {
     case 1:
     enqueue();
     break;
     case 2:
     dequeue();
     break;
     case 3:
     traverse();
     break;
     case 4:
     exit(0);
     break;
     default:
     printf("\n invaild statement.....");
    }

    }

   } 
    void enqueue()
    {
      int x;
       printf("\n enter value");
       scanf("%d",&x);
       if(rear==MAX-1)
       {
         printf("\n overflow");
        
       }  
       else
       {
         if(rear==-1)
         front=rear=0;
         else 
         rear=rear+1;
        queue[rear]=x;
         
       }
    } 
    void dequeue()
    { 
      int x;
      if(front==-1)
      
        {
         printf("\n underflow");
        
       }  
       else
       {
         if(rear==front)
         {
         x= queue[rear];
        printf("%d" ,x);
         front=rear=-1;
         }
         else 
         {
        x= queue[rear];
        printf("%d" ,x);
        front=front+1;
         }
    }  
    }
void traverse()
{
  if(front==-1)
  printf("\n underflow");
  else
  {
    while(front!=rear)
    {
      printf("%d" ,queue[front]);
      front=front+1;

    } 
    printf("%d",queue[front]);
  }
}
