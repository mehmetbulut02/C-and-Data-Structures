#include <stdio.h>
#include <stdlib.h>

struct node{
int data;
struct node *next;
};

void listele(struct node *head){
int i=1;
while(head!=NULL){
    printf("%d. Dugumun adresi = %p\n",i,head);
    printf("%d. Dugumun verisi = %d\n",i,head->data);
    printf("%d. Dugumun bagli oldugu dugumun adresi=%p\n\n",i,head->next);
    head=head->next;
    i++;
}
}

int main()
{
    struct node *head;
    head=(struct node*)malloc(sizeof(struct node));
    head->data=5;
    head->next=(struct node*)malloc(sizeof(struct node));
    head->next->data=6;
    head->next->next=(struct node*)malloc(sizeof(struct node));
    head->next->next->data=7;
    head->next->next->next=NULL;
    listele(head);
    printf("Hello world!\n");
    return 0;
}
