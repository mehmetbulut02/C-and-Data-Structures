#include <stdio.h>
#include <stdlib.h>

struct node* basaEkle(struct node *head,data){
struct node* temp=(struct *node)(malloc(struct node));
    if(head==NULL){
        temp->data=data;
        temp->next=NULL;
        temp->prev=NULL;
    }else{
    temp->data=data;
    temp->next=head;
    temp->prev=NULL;
    head->prev=temp;
    }
    head=temp;
    return head;
};

void sonaEkle(struct node *head,int data){
if(head=NULL){
    printf("liste bos");
    return 0;
struct node *temp=struct node *(malloc(struct node));
struct node *temp2=head;
while(temp2->next!=NULL)
    temp2=temp2->next;
temp->data=data;
temp->next=NULL;
temp->prev=temp2;
temp2->next=temp;
}
}

int main()
{

    return 0;
}
