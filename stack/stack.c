
#include<stdio.h>
#include<stdlib.h>
# define max 10
int arr[max];
int top=-1;
void push();
int pop();
void display();
void  main ()
{ 
     int ch,d;
     while(1)
   {
    printf("\n M.E.N.u .....");
    printf("\n1. PUSH OPERATION...");
    printf("\n2. POP OPERATION....");
    printf("\n3. DISPLAY ELEMENT.....");
    printf("\n4. EXIT.......");
    printf("\n enter a choice ......");
    scanf("%d",&ch);
    switch(ch)
    {
     case 1:
     push();
     break;
     case 2:
       d=pop();
      printf("\n %d pop element",d);
     break;
     case 3:
     display();
     break;
     case 4:
     exit(0);
     break;
     default:
     printf("\n invaild statement.....");
    }

    }

   } 
   void push()
   {  int x;
       printf("\n enter value");
       scanf("%d",&x);
       if(top==max-1)
       printf("\n overflow.....");
       else
       {
           top=top+1;
           arr[top]=x;


       }
   }
    int pop()
    {
        int item;
        if(top==-1)
        {
        printf("\n underflow ");
        exit(0);
        }
        item=arr[top];
        top=top-1;
        return item;
    }

void display()
{
    int i;
    if(top==-1)
    printf("\n underflow");
    for(i=top;i>=0;i--)
    printf("%d/",arr[i]);
    printf("\n");
}

