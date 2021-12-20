// implementation of doubly linkedlist
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
void create_dlist();
void display_dlist();
void add_at_beg();
 void add_at_end();
 void search_list(); 
 void count_node();
 void add_at_specific();
 void delete_begining();
 void deleteEnd();
 void delete_specific_node();




struct node
{
   struct node* prev;
   struct node *next;
   int data;
};
 struct node *temp,*start=NULL;
 struct node*p,*last;
void main()
{
    int ch;
    while(1)
    {
    
    printf(" \nM.E.N.U.....");                                          
    printf("\n1. CREATE LIST:");
    printf("\n2. DIAPLAY LIST:");
    printf("\n3 exit");
     printf("\n4 add element at begining");
     printf("\n5 add at end");
     printf("\n6 search list");
     printf("\n7 count node ");
     printf(" \n8 insert at specific position");
     printf("\n9 insert afer node  ");
     printf("\n10.insert node before:");
     printf("\n11 delete begining node");
     printf("\n12 delete end node:");
     printf("\n13 delete specific node");
     printf("\n enter a chioce...");
     scanf("%d", &ch);
    switch(ch)
    {   case 1:
        printf("\n create list");
        create_dlist();
        break;
        case 2:
        printf("\n display list:");
        display_dlist();
        break;
        case 3:
            exit(0);
            break;
            case 4:
            add_at_beg();
            break;
            case 5:
            add_at_end();
            break;
            case 6:
            search_list();
            case 7:
            count_node();
            break;
            case 8:
            add_at_specific();
            break;
            case 11:
            delete_begining();
            break;
            case 12:
            deleteEnd();
            break;
            case 13:
            delete_specific_node();
            break;
            default:
            printf(" INVAILD STATEMENT");

    }
    }  
}
    void create_dlist()
      {
         p= malloc(sizeof(struct node));
        printf("\n enter value:");
       scanf("%d",&p->data);
         p->next=NULL;
         p->prev=NULL;
      if(start==NULL)
    {
        start=temp=p;
        p->prev=start;
        p->next=start;

    }
     else
     { 
        
      temp->next=p;
      p->next=start;
      p->prev=temp;
      start->prev=p;
        temp=p;

     }
} 
void display_dlist()
{ 
    temp=start;
    
    do
    {   
        printf("\n[%d:%u]%u", temp->data,temp->next,temp);
        temp=temp->next;
    }

  while(temp!=start);
} 
void add_at_beg()
{     struct node*last;
   p= malloc(sizeof(struct node));
        printf("\n enter value:");
       scanf("%d",&p->data);
         p->next=NULL;
         p->prev=NULL;
      if(start==NULL)
    {
        start=temp=p;
        p->prev=start;
        p->next=start; 
    }
    else
    {  last=start->prev;
        p->next=temp;
        p->prev=last;
        temp->prev=p;
        last->next=p;
        start=p;
        
    }
} 
void add_at_end()
{
     p= malloc(sizeof(struct node));
        printf("\n enter value:");
       scanf("%d",&p->data);
         p->next=NULL;
         p->prev=NULL;
      if(start==NULL)
    {
        start=temp=p;
        p->prev=start;
        p->next=start; 
    } 
    else
    {
        while(temp->next!=start)
        temp=temp->next;
        temp->next=p;
        p->prev=temp;
        p->next=start;
        start->prev=p;
    }
}
void add_at_specific()
{   
    int po, i;
     p= malloc(sizeof(struct node));
        printf("\n enter value:");
       scanf("%d",&p->data);
         p->next=NULL;
         p->prev=NULL;
       printf("\n enter a position where you want insert node ");
       scanf("%d",&po);
         temp=start;
        for(i=1;i<po;i++)
        {    
            temp=temp->next;
        }
        p->next=temp->next;
        p->prev=temp;
        temp->next=p;
 } 
 
void search_list()

 {    int n;
      int  flag, c;
      printf(" \n enter a element:");
      scanf("%d",&n);
       temp= start;
    while(temp->next!=start)
    {
        c++;
        if( temp->data==n)
        {
            flag=1;
            break;
        }
        temp=temp->next;
    }
    if(flag==1)
    {
        printf("\n element are present at position %d", c);
    }
    else
    {
        printf("\n data is not present");
    }
 }
 void count_node()
 {
     int count=0;
     temp=start;
     do
     {
        count++;
         temp=temp->next;
     } 
     
     while(temp!=start);
     
     printf("\n numbers of node in list are%d ",count);
 }
void insert_node()
{
    int n,i;
    printf(" enter a position .");
    scanf("%d",&n);
    p=malloc(sizeof(struct node));
    printf("enter a element ");
    scanf("%d",&p->data);
    p->next=NULL;
    temp=start;
    for(i=1;i<n;i++)
    {
        temp=temp->next;
    }
     p->next=temp->next;
     p->prev=temp;
     temp->next=p;


} 
void delete_begining()
{
  if(start==NULL) 
    printf("\n UNDERFLOW\n");  
    
    else if(start->next == start)  
    {  
        start = NULL;   
        free(start);  
        printf("\nNode Deleted\n");  
    }  
    else  
    {  
        temp = start;   
        while(temp -> next != start)  
        {  
            temp = temp -> next;  
        }  
        temp -> next = start-> next;  
        start -> next -> prev = temp;  
        free(start);  
        start= temp -> next;  
        printf("\nNode Deleted\n");  
    }  

    }

void deleteEnd()
{ 
    if(start==NULL)
    printf("\n list is empty");
    else if(start->next==start)
    {
        temp=start;
        start=NULL;
        free(temp);
    }
 else
 {

        
    temp=start;
    last=start->prev;
    last->prev->next=temp;
    temp->prev=last->prev;

    free(last);
}
} 
void delete_specific_node()
{
    int po, i;
       printf("\n enter a position where you want insert node ");
       scanf("%d",&po);
         temp=start;
        for(i=1;i<=po;i++)
        {    
            temp=temp->next;
        } 
        temp->prev->next=temp->next;
        temp->next->prev=temp->prev;
        free(temp);
}