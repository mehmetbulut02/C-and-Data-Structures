#include <stdio.h>
#include <stdlib.h>

struct node{
int data;
struct node *next;
struct node *prev;
};

struct node *BasaEkle(struct node *head,int data){
struct node *temp=(struct node*)malloc((sizeof)struct node);

if(head==NULL){
    head->data=data;
    head->next=NULL;
    head->prev=NULL;
}else{
    temp->data=data;
    temp->next=head;
    temp->prev=NULL;
    head=temp;
}
return head;
}

void SonaEkle(struct node*head,int data){
if(head==NULL){
    printf("Liste bos iken ekleme yapamassiniz");
    return;
}
struct node *temp=(struct node*)malloc((sizeof)struct node);
struct node *last=head;

while(last->next!=NULL){
    last=last->next;
temp->data=data;
temp->next=NULL;
temp->prev=last;
last->next=temp;
}


}


int main()
{
    printf("Hello world!\n");
    return 0;
}
