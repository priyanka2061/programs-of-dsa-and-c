#include<bits/stdc++.h>
using namespace std;
struct bst
{
    int data;
    bst* left;
    bst* right;
    bst( int x)
    {
       data=x;
       left=NULL;
       right=NULL;
    }
}; 
bst* search(bst*root,int n)
{
   if(root==NULL||root->data==n)  
   { 
      
    return root;
    
   }
   else if(root->data<n)
   return  search(root->right,n);
   else
   return search(root->left,n);
  
}
bst* insert(bst*root,int n)
{
  bst* newnode=new bst(n);
  bst*x=root;
  bst*y=NULL;
  while(x!=NULL)
  {
     y=x;
     if(n<x->data)
     {
        x=x->left;
     } 
     else{
        x=x->right;
     } 
  }
  if(y==NULL)
  {
   y=newnode;
  } 
  else if(n<y->data)
   y->left=newnode;
   else
   y->right=newnode;
   return y;
  }
  void inorder( bst*root)
{
    if(root==NULL)
    return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
} 
void preorder(bst*root)
{
  if(root==NULL)
  return;
  cout<<root->data<<" ";
  preorder(root->left);
  preorder(root->right);
}
void postorder( bst*root)
{  if(root==NULL)
     return;
  postorder(root->left);
  postorder(root->right);
  cout<<root->data<<" ";
}

int main()
{    
 bst*root=new  bst(8);
 root->left=new bst(4);
 root->right=new bst(9);
 root->left->left=new bst(3);
 root->right->right=new bst(14);
 root->right->left=new bst(8);
 while(1)
 {
 cout<<"\n MENU DRIVEN PROGRAM....";
 cout<<"\n1 saerch";
 cout<<"\n2 insert...";
 cout<<"\n3 inoder traverse";
 cout<<"\n4 proder traverse";
 cout<<"\n5 postorder traverse";
 cout<<"\n6 exit..";
 cout<<"\n enter a choice..";
 int ch,n,t,c;
 cin>>ch;
 switch(ch)
 {
     case 1:
     cout<<" enter a element";
     cin>>n;
     cout<<search(root,n);
     break;
     case 2:
     cout<<" enter a node ";
     cin>>t;
     insert(root,t);
     break; 
     case 3:
      inorder(root);
      break; 
      case 4:
      preorder(root);
      break;
      case 5:
      postorder(root);
      break;
     case 6:
     exit(0);
     break;
 }
 }
    return 0;

}