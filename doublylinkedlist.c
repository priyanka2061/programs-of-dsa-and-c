#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
void create_dlist();
void display_dlist();void add_at_beg();
 void add_at_end();
 void search_list(); 
 void count_node();
 void insert_node();
 void insert_after();
 void insert_before();
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
 struct node*p;
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
            insert_node();
            break;
            case 9:
                insert_after();
                break;
            case 10:
            insert_before();
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
    p=malloc(sizeof( struct node));
    printf("\nenter a element:");
    scanf("%d",&p->data);
    p->next=NULL;
    p->prev=NULL;
    if(start==NULL)
    {
    start=temp=p;
    }
    else
    {  while(temp->next!=NULL)
       temp=temp->next;
       temp->next=p;
       p->prev=temp;
    
    
    }


}
void display_dlist()
{
    temp=start;
    while(temp!=NULL)
    {
        printf("\n[%u:%d:%u]",temp->prev,temp->data,temp->next);
        temp=temp->next;
    }
} 
void add_at_beg()
{
   p= malloc(sizeof(struct node));
    printf("\n enter value:");
    scanf("%d",&p->data);
     p->prev=NULL;
     p->next=NULL;
      temp=start;
      p->next=temp;
      temp->prev=p;
      start=p;


    }
 void add_at_end()
 {
      p= malloc(sizeof(struct node));
      printf("\n enter value:");
      scanf("%d",&p->data);
      p->next=NULL;
      temp=start;
      while(temp->next!=NULL)
      {
          temp=temp->next;
      }
      temp->next=p;
      p->prev=temp;


 }
 void search_list()

 {    int n;
      int  flag, count=0;
      printf(" \n enter a element:");
      scanf("%d",&n);
       temp= start;
    while(temp->next!=NULL)
    {
        count++;
        if( temp->data==n)
        {
            flag=1;
            break;
        }
        temp=temp->next;
    }
    if(flag==1)
    {
        printf("\n element are present at position  %d", count);
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
     while(temp!=NULL)
     {
         count++;
         temp=temp->next;
     }
     printf("\n numbers of node in list are  %d ",count);
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
void insert_after()
{

    int n,i;
    printf(" enter a position .");
    scanf("%d",&n);
    p=malloc(sizeof(struct node));
    printf("enter a element ");
    scanf("%d",&p->data);
    p->next=NULL;
    temp=start;
    for(i=1;i<=n;i++)
    {
        temp=temp->next;
    }
    p->next=temp->next;
    temp->next=p; 
    


}
void insert_before()
{
    int n,i;
    printf(" enter a position .");
    scanf("%d",&n);
    p=malloc(sizeof(struct node));
    printf("enter a element ");
    scanf("%d",&p->data);
    p->next=NULL;
    temp=start;
    for(i=1;i<n-1;i++)
    {
        temp=temp->next;
    }
    p->next=temp->next;
    temp->next=p;

}
void delete_begining()
{

 if(start==NULL)
    {
        printf("\n list is empty");
    }
    else if(start->next==NULL)
    {
        temp=start;
        free(temp);
        start= NULL;
    }
    else
    {
        temp=start;
        temp->next->prev=NULL;
        start=temp->next;
        free(temp);


    }
}
void deleteEnd()
{
    if(start==NULL)
    {
        printf("\n list is empty");
    }
    else if(start->next==NULL)
    {
        temp=start;
        free(temp);
        start= NULL;
    }
    else
    { 
        temp=start;
         while(temp->next!=NULL)
         {
         temp= temp->next;
         
          
         }
         temp->prev->next=NULL;
        free(temp);
         
    }
}
void delete_specific_node()
{
    int n,i;
    printf("\n enter a position:");
    scanf("%d",&n);
    temp=start;
    for(i=1;i<=n;i++)
    {  p=temp;
       temp=temp->next;

    }
    
      p->next=temp->next;
      temp->next->prev=p;
      free(temp);
}