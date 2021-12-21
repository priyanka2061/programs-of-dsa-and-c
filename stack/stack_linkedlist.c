#include<stdio.h>
#include<stdlib.h>
struct stack
{
    int data;
    struct stack *next;
};
struct stack *temp;
struct stack *top=NULL;
void push();
void pop();
void display();
void found_top();
void  main ()
{ 
     int ch;
     while(1)
   {
    printf("\n M.E.N.u .....");
    printf("\n1. PUSH OPERATION...");
    printf("\n2. POP OPERATION....");
    printf("\n3. DISPLAY ELEMENT.....");
    printf("\n4. EXIT.......");
    printf("\n5  TOP ELEMENT...");
    printf("\n enter a choice ......");
    scanf("%d",&ch);
    switch(ch)
    {
     case 1:
     push();
     break;
     case 2:
       pop();
    
     break;
     case 3:
     display();
     break;
     case 4:
     exit(0);
     break;
     case 5:
     found_top();
     break;
     default:
     printf("\n invaild statement.....");
    }

    }

   }  
   void push()
   { int x;
       printf("\n enter a data ");
       scanf("%d",&x);
       temp=malloc(sizeof(struct stack));
       temp->data=x;
       temp->next=NULL;
       if(top==NULL)
       {
           top=temp;
       }
       else
       {
           temp->next=top;
           top=temp;
       }
   } 
   void pop()
   {  
    
    if(top!=NULL)
    {
        printf("%d deleted element are ",top->data);
        top=top->next;
        
    } 
    else
    {
        printf("\n underflow element..");
    }
    
   } 
   void display()
   {
       temp=top;
       while(temp!=NULL)
       {
           printf("%d->", temp->data);
           temp=temp->next;
       }
   } 
   void found_top()
   {
      printf("%d:%u",top->data,top);
   }