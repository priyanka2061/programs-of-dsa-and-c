#include<bits/stdc++.h>
#include<iostream>
#include<cstdio>
using namespace std;
struct tree
{
   int data;
    tree*left;
    tree*right;
    tree(int val)
    {
        data=val;
        left=NULL;
        right=NULL;
    }
};
void inorder( tree*root)
{
    if(root==NULL)
    return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
} 
void preorder(tree*root)
{
  if(root==NULL)
  return;
  cout<<root->data<<" ";
  preorder(root->left);
  preorder(root->right);
}
void postorder( tree*root)
{  if(root==NULL)
     return;
  postorder(root->left);
  postorder(root->right);
  cout<<root->data<<" ";
}
tree* insert(tree*root)
{   int t;
   cout<<" enter a node for insertion..";
   cin>>t;
  tree*start=new tree(t);
  if(root==NULL)
  {
      root=start;
      return root;
  }
   queue<tree*>q;
   q.push(root);
   while(!q.empty())
   {
     tree*temp=q.front();
     q.pop();
     if(temp->left!=NULL)
     {
        q.push(temp->left);
     } 
     else{
        temp->left=start;
        return root;
     }
     if(temp->right!=NULL)
     {
        q.push(temp->right);
     } 
     else
     {
        temp->right=start;
        return root;
     }
   } 
}

 tree*deletion_node(tree*root,int key)
  
{
    if(root==NULL)
    return 0;
    if(root->left==NULL&&root->right==NULL)
    {
       if(root->data==key)
       return NULL;
       else
       return root;
    } 
    queue<tree*>q;
    q.push(root);
    tree* key_node =NULL,*temp,*last;
    while(! q.empty())
    {
       temp=q.front();
       q.pop();
       if(temp->data==key)
       {
          key_node=temp;
         
       } 
       if(temp->left)
       { 
          last=temp;
       q.push(temp->left);
       } 
       if(temp->right)
       {
          last=temp;
          q.push(temp->right);
       } 
       if(key_node!=NULL)
    {
        key_node->data=temp->data;
        if(last->right==temp)
            last->right=NULL;
        else
            last->left=NULL;
        delete(temp);
     }
    return root;
    }


}

  int main()
{  int ch ,x;
   tree*root=new tree(5);
   root->left=new tree(9);
   root->right=new tree(8);
   root->left->left=new tree(7);
   root->right->right=new tree(2);
   while(1)
   {
   cout<<" \nMENU DRIVEN PROGRAM...";
   cout<<"\n1 Inoder traverse..";
   cout<<"\n2 Preorder traverse..";
   cout<<" \n3 Postorder traverse....";
   cout<<"\n4 Insert node...";
   cout<<"\n6 Exit...";
   cout<<"\n7 Deletion of node..";
   cout<<"\n enter a choice..";
   cin>>ch;
   switch(ch)
   {
      case 1:
      inorder(root);
      break;
      case 2:
      preorder(root);
      break;
      case 3:
      postorder(root);
      break;
      case 4:
      insert(root);
      break;
      case 6:
      exit(0);
      case 7:
      cout<<" enter for deletion"; 
      cin>> x;
      deletion_node(root,x);
      break;

   }
   }
   return 0;
}

