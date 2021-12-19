// implementation of circular_linkedlist
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
void create_list();
void display_list();
void add_at_beg();
void add_at_end();
 void search_list(); 
 void count_node();
 void insert_at_specific();
 void delete_begining();
 void deleteEnd();
 void delete_specific_node();
 void reverse_node();

struct node
{
   
   struct node *next;
   int data;
};
 struct node *temp,*start=NULL;
 struct node*p,*t;
void main()
{
    int ch;
    while(1)
    {
    
    printf(" \nM.E.N.U.....");                                          
    printf("\n1. CREATE LIST:");
    printf("\n2. DIAPLAY LIST:");
    printf("\n3. exit");
     printf("\n4. add element at begining");
     printf("\n5. add at end");
     printf("\n6. search list");
     printf("\n7. count node ");
     printf(" \n8. insert at specific position");
     printf("\n9. delete begining node");
     printf("\n10. delete end node:");
     printf("\n12. delete specific node");
     printf("\n13 reverse node");

    printf("\n enter a chioce...");

    scanf("%d", &ch);
    switch(ch)
    {   case 1:
        printf("\n create list");
        create_list();
        break;
        case 2:
        printf("\n display list:");
        display_list();
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
            insert_at_specific();
            break;
           case 9:
            delete_begining();
            break;
            case 10:
            deleteEnd();
            break;
            case 12:
            delete_specific_node();
            break;
         case 13:
          reverse_node();
          break;
            default:
            printf(" INVAILD STATEMENT");


    }
    }
} 
void create_list()
{    struct node*t;
    p= malloc(sizeof(struct node));
    printf("\n enter value:");
    scanf("%d",&p->data);
    p->next=NULL;
    if(start==NULL)
    {
        start=temp=p;

    }
     else
     { 
        
      temp->next=p;
      p->next=start;
      temp=p;
        

     }
} 
void display_list()
{ 
    struct node*t;
    t=start;
    
    do
    {   
        printf("\n[%d:%u]%u", t->data,t->next,t);
        t=t->next;
    } 
    while( t!=start);
} 
void add_at_beg()
{
     p= malloc(sizeof(struct node));
    printf("\n enter value:");
    scanf("%d",&p->data);
    p->next=NULL;
    if(start==NULL)
    {
        start=temp=p;

    }
    
    else
    {   temp=start;
        p->next=temp;
        while(temp->next!=start)
        temp=temp->next;
        temp->next=p;
        start=p;
}
 } 
 void add_at_end()
 { 
     p= malloc(sizeof(struct node));
    printf("\n enter value:");
    scanf("%d",&p->data);
    p->next=NULL;
    if(start==NULL)
    {
        start=temp=p;

    }
    else
    
    {
        temp=start;
        while(temp->next!=start)
         temp=temp->next;
         temp->next=p;
         p->next=start;
    }
 } 
 void insert_at_specific()
 {
    int i,n;
      p= malloc(sizeof(struct node));
    printf("\n enter value:");
    scanf("%d",&p->data);
    printf(" \n enter a position:");
    scanf("%d",&n);
    if(start==NULL)
    {
        start=temp=p;

    } 
    for(i=1;i<n;i++)
     temp=temp->next;
     p->next=temp->next;
     temp->next=p;
 } 
 void  search_list()
 {
     int n,count=0,flag;
     temp=start;
     printf("\n enter  the data which you want to search it.. ");
     scanf("%d",&n);
     do{
         count++;
     
     if(temp->data==n)
    {     flag=1;
         break;
    
     } 
     temp=temp->next;
     }
     while(temp!=start);
     if(flag==1)
     {
         printf("\n%d at location",count);

     }


 } 
 void count_node()
 {  int count=0;
     temp=start;
     do{

        count++;
        temp=temp->next;
    
     }
     while(temp!=start);
     
     printf("%d number of node are there",count);

 }  
 void delete_begining()
 {   temp=t=p=start;
     if(start==NULL)
     {
         printf("\n list is empty..");
     }
     else if(temp->next->next==start)
     {
         start=temp->next;
         start->next=NULL;
         free(temp);
     } 
     else
     {
         p=p->next;
         start=p;
         while(temp->next!=t)
         temp=temp->next;
         temp->next=start;
         free(t);
     }
 } 
 void deleteEnd()

 {
    temp=start;
    if(start==NULL)
    {
        printf("\n list is empty");
                
    } 
    else if(temp->next==start)
    {   
        temp=temp->next;
        p->next=NULL;
        start=p;
        free(temp);
        
 }
 else
 {
      
      while(temp->next!=start)
      {   p=temp;
          temp=temp->next;
        
      } 
      p->next=start;
      free(temp);
      
 } 
 }
void delete_specific_node()
{
    temp=p=start;
    int i,n;
    printf("\n enter the position for deletion of node.");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
      p=temp;
      temp=temp->next; 
    }
    p->next=temp->next;
    free(temp);
} 
void reverse_node()
{      struct node *current,*prev=NULL,*nextn;
           current= start;
           do
           {
             nextn=current->next;
             current->next=prev;
             prev=current;
             current=nextn;
            
           } 
           while(current!=start);           
           start->next=prev;
           start=prev;

}