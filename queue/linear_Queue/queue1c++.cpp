#include <bits/stdc++.h>
using namespace std;

struct QNode {
	int data;
	QNode* next;
};

struct Queue {
	QNode *front=NULL, *rear= NULL;


	void enQueue()
	{
       cout<<"\n enter a data...   ";
       int x;
       cin>>x;
		QNode* temp = new QNode();
        temp->data=x;
        temp->next=NULL;
		if (rear == NULL) {
			front = rear = temp;
			return;
	
        }
		rear->next = temp;
		rear = temp;
	}

	void deQueue()
	{
	
		if (front == NULL)
			return;

	
		QNode* temp = front;
		front = front->next;
		//if (front == NULL)
			//rear = NULL;

		delete (temp);
	} 
  void traverse()
  { 
     while(front!=rear)
     {
      cout<<"\n"<<front->data;
      front=front->next;
     }
      cout<<"\n"<<front->data;
    
  }
  
};
int main()
{

	Queue q;
    int ch;
     while(1)
   {
    printf("\n M.E.N.u .....");
    printf("\n1. ENQUEUE OPERATION...");
    printf("\n2. DEQUEUE OPERATION....");
    printf("\n3. TRAVERSE ELEMENT.....");
    printf("\n4. EXIT.......");
    printf("\n enter a choice ......");
    scanf("%d",&ch);
    switch(ch)
    {
     case 1:
    q.enQueue();
     break;
     case 2:
     q.deQueue();
     break;
     case 3:
     q.traverse();
     break;
     case 4:
     exit(0);
     break;
     default:
     printf("\n invaild statement.....");
    }

    }
	
}
