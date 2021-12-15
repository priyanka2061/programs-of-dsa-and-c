#include<stdio.h>
#include<malloc.h>
void list();
void display();
 void add_at_beg();
 void add_at_end();
 void search_list(); 
 void count_node();
 void insert_node();
 void insert_after();
 void insert_before();
 void delete_begining();
 void deleteEnd();
 void delete_specific_node();
 void update_node();
 void reverse_list();
 struct node
{
    int data;
    struct node*next;
};
struct node * temp,*p;
struct node * start = NULL;
void main ()
{
   int n;
   int ch;
   while(1)
   {
    printf(" \n M.E.N.U");
     printf(" \n1 insert:");
     printf(" \n2 display");
     printf("\n3 exit");
     printf("\n4 add element at begining");
     printf("\n5 add at end");
     printf("\n6 search list");
     printf("\n7 count node ");
     printf(" \n8 insert at specific position");
     printf("\n9 insert afer node  ");
     printf("\n10.insert node before:");
     printf("\n11 delete node");
     printf("\n12 delete end node:");
     printf("\n13 delete specific node");
     printf("\n14. update value");
     printf("\n15 reverse list of linkedlist:"); 
     printf( " \n enter a choice :");
     scanf("%d",&ch);
         switch(ch)
         {
             case 1:
              printf("\n insertion element : ");
              list();
              break;
             case 2:
             printf("\n display: ");
             display();
             break;
            case 3:
            exit(0);
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
            case 14:
            update_node();
            break;
            case 15:
            printf("\n reverse node");
            reverse_list();
            break;
            default:
            printf(" \n inavild statement:");

         }

     }




}
void list()
{
    p= malloc(sizeof(struct node));
    printf("\n enter value:");
    scanf("%d",&p->data);
    p->next=NULL;
    if(start==NULL)
    {
        start=p;
        temp=p;

    }
    else{
        temp-> next=p;
        temp=p;
    }
}
void display()
{
    temp=start;
    while(temp!=NULL)
    {
        printf("\n[%d:%u]%u", temp->data,temp->next,temp);
        temp=temp->next;

    }

}
void add_at_beg()
{
   p= malloc(sizeof(struct node));
    printf("\n enter value:");
    scanf("%d",&p->data);
    p->next=start;
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

 }
 void search_list()

 {    int n;
      int  flag, count;
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
        printf("\n element are present at position %d", count);
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
             p=temp;
         temp= temp->next;
         
          
         }
         
         free(temp);
        p-> next=NULL;
         
    }
}
void delete_specific_node()
{
    int n,i;
    printf("\n enter a position:");
    scanf("%d",&n);
    temp=start;
    for(i=1;i<n;i++)
    {   p=temp;
       temp=temp->next;

    }
    p->next=temp->next;
    free(temp);

}
void update_node()
{
    int n,flag=0,n1;
    printf("\n enter a value which you want to update:");
    scanf("%d",&n);
    temp=start;
    while(temp!=NULL)
    {
        if(temp->data==n)
        flag=1;
        break;
    }
    if(flag==1)
    {
        printf("\n enter value to update with:");
        scanf("%d",&n1);
        temp->data=n1;
    }
    else
    printf("\n invaild input");

}
void reverse_list()
{
 
  struct node *t1=NULL,*t2 =NULL;
  temp=start;
  while(temp!=NULL)
  {
        t2=temp->next;
        temp->next=t1;
        t1=temp;
        temp=t2;
}
start=t1;
}