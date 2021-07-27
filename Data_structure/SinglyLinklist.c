/*
Purpose:wrtie a program for singly link list
Date:17/07/2021
Author:Shubham Bhandari
Version:1.0
*/

#include <stdio.h>
#include <stdlib.h>

struct node{
  int data;
  struct node *next;
};
typedef struct node Node;
Node *head,*newnode,*temp;



void create_node()
{
   newnode=(Node*)malloc(sizeof(Node));
   printf("enter the data: ");
   scanf("%d",&newnode->data);
   newnode->next=0;
   if(head==0)
   {
     head=temp=newnode;
   }
   else
   {
     temp->next=newnode;
     temp=newnode;
   }
}

int display()
{
   temp=head;
   while(temp!=0)
   {
      printf("%d\t",temp->data);
      temp=temp->next;
   }
}

void addatbeg()
{
  newnode=(Node*)malloc(sizeof(Node));
  printf("enter the data: ");
  scanf("%d",&newnode->data);
  newnode->next=head;
  head=newnode;
}

void addatend()
{
  newnode=(Node*)malloc(sizeof(Node));
  printf("enter the data: ");
  scanf("%d",&newnode->data);
  temp=head;
  while(temp->next!=0)
  {
    temp=temp->next;
  }
  temp->next=newnode;
}

void addatpos()
{
   int pos,i=1;
   int cnt=1;
   newnode=(Node*)malloc(sizeof(Node));
   printf("enter the position: ");
   scanf("%d",&pos);
   temp=head;
   while(temp!=0)
   {
      temp=temp->next;
      cnt++;
   }
   if(pos>cnt)
   {
     printf("invalid position");
   }
   else
   {
     temp=head;
     while(i<pos)
     {
       temp=temp->next;
       i++;
     }
   }
   printf("enter the data: ");
   scanf("%d",&newnode->data);
   newnode->next=temp->next;
   temp->next=newnode;
}

void dltatbeg()
{
   Node *tmp;
   tmp=head;
   head=head->next;
   free(tmp);
}

void dltatend()
{
  Node *tmp,*prevnode;
  tmp=head;
  while(tmp->next!=NULL)
  {
    prevnode=tmp;
    tmp=tmp->next;
  }   
  if(tmp==head)
  {
    head=0;
  }
  else
  {
    prevnode->next=0;
  }
  free(tmp);
}

void dltatpos()
{
  Node *nextnode,*tmp;
  int pos,i=1;
  tmp=head;
  printf("enter the position: ");
  scanf("%d",&pos);
  while(i<pos-1)
  {
     tmp=tmp->next;
     i++;
  }
  nextnode=tmp->next;
  tmp->next=nextnode->next;
  free(nextnode);
}

void reverse()
{
   Node *prevnode,*currentnode,*nextnode;
   prevnode=0;
   currentnode=nextnode=head;
   while(nextnode!=0)
   {
      nextnode=nextnode->next;
      currentnode->next=prevnode;
      prevnode=currentnode;
      currentnode=nextnode;
   }
   head=prevnode;
}

int main()
{
   create_node();
   create_node();
   create_node();
   display();

//-----Add at begining fuction------------------------//
   printf("\n");
   printf("Add at beginning ");
   addatbeg();
   display();
//-------Add at end function-------------------//
   printf("\n");
   printf("Add at ending ");
   addatend();
   display();
//-------Add at any position function------------//
   printf("\n");
   printf("Add at any position ");
   addatpos();
   display();
//------Delete at beginning fuction--------------//
   printf("\n");
   printf("Delete at beginning: ");
   dltatbeg();
   display();
   
//---------Delete form end function-----------//
   printf("\n");
   printf("Delete at end: ");
   dltatend();
   display();
   
//------Delete at any position function----------//
   printf("\n");
   printf("Delete at position ");
   dltatpos();
   display();
   
//---------Reverse linklist-----------------//
   printf("\n");
   printf("Reverse linklist ");
   reverse();
   display();

}

















