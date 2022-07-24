#include <stdio.h>
#include<string.h>
#include<stdlib.h>

struct node{
int data;
struct node*next;
};
struct node *head,*newnode, *temp; 
int n=1,c=0,len;
void create(){
   head = 0;
   printf("enter the length");
  scanf("%d",&len);
  for(int i=0; i<len; i++){
    newnode = (struct node*)malloc(sizeof(struct node));
  printf("enter the element");
  scanf("%d",&newnode->data);
  newnode->next = 0;
  
  if(head == 0){
    head = temp = newnode;
  }else{
    temp->next = newnode;
    temp = newnode;
    
  }
}
}

void display(){
   temp = head;
      //display
      
      if(head == 0){
        printf("no element");
      }else{
        while(temp != 0){
      printf("%d", temp->data);
      temp = temp->next;
      c++;
    }
        }
}

void insertatbegin(){
  newnode = (struct node*)malloc(sizeof(struct node));
  printf("enter the element:");
  scanf("%d",&newnode->data);
  newnode->next = head;
  head = newnode;
}

void insertatend(){
  newnode = (struct node*)malloc(sizeof(struct node));
  printf("enter the element:");
  scanf("%d",&newnode -> data);
  temp = head;
  while(temp->next != 0){
    temp = temp->next;
  }
  temp->next = newnode;
  
}

void insertatposition(){
  int pos,i=1;
  newnode = (struct node*)malloc(sizeof(struct node));
  printf("enter the position:");
  scanf("%d",&pos);
  temp = head;
  if(i<pos){
    temp = temp->next;
    i++;
  }
  printf("enter the element:");
  scanf("%d",&newnode ->data);

  newnode-> next = temp->next;
  temp->next = newnode;
  
}

void deleteatbegin(){
  if(head ==0){
    printf("no element to delete");
  }else{
    temp = head;
    head = head->next;
    free(temp);
  }
}

void deleteatend(){
  struct node*prevnode;
  temp = head;
  while(temp->next!=0){
    prevnode = temp;
    temp = temp->next;
  }
   prevnode->next =0;
   free(temp);
}

void deleteatposition(){
  struct node*nextnode;
  int pos,i=1;
 temp = head;
  printf("enter the position:");
  scanf("%d",&pos);
  while(i<pos-1){
    nextnode = temp;
    temp = temp->next;
    i++;
  }
  nextnode ->next = temp->next;
  free(temp);
  // nextnode = temp->next;
  // temp->next = nextnode->next;
  // free(nextnode);
}

void reverse(){
  struct node*prevnode, *currentnode,*nextnode;
  prevnode = 0;
  currentnode=nextnode=head;
  while(nextnode != 0){
    nextnode = nextnode->next;
    currentnode->next = prevnode;
    prevnode = currentnode;
   currentnode = nextnode;
    }
    head = prevnode;
  
}

void count(){
  temp = head;
  c = 0;
  while(temp != 0){
    c++;
    temp = temp->next;
    
  }
  printf("count: %d\n", c);
}


int main(void) {
  while(1){
    
  
  int choice;
   printf("enter your choice\n 1.create\n 2.display\n 3.insert at begining\n 4.insertatend\n 5.insertatposition\n 6.deleteatbegin\n 7.deleteatend\n 8.deleteatposition\n 9.reverse\n 10.count");
   scanf("%d",&choice);
   switch(choice){
     case 1:
       create();
       break;
     case 2:
       display();
       break;
     case 3:
        insertatbegin();
        break;
     case 4:
        insertatend();
        break;
     case 5:
        insertatposition();
        break;
     case 6:
        deleteatbegin();
        break;
     case 7:
        deleteatend();
        break;
     case 8:
        deleteatposition();
        break;
     case 9:
        reverse();
        break;
     case 10:
        count();
        break;
       }
    }

  return 0;
}
