#include <stdio.h>
#include <stdlib.h>

struct node{
int data;
struct node *next;
};

struct node *BasaEkle(struct node *head,int data){
struct node *temp = (struct node *)malloc(sizeof(struct node));
temp->data=data;
temp->next=head;
head=temp;
};

void SonaEkle(struct node *head,int data){
    return;
}
struct node *SonaEkle(struct node *head,int veri){
struct node *temp = (struct node*)malloc(sizeof(struct node));
temp->data=veri;
temp->next=NULL;
struct node*temp2=head;
while(temp2->next!=NULL)
    temp2=temp2->next;
    temp2->next=temp;
};

int main()
{
    int secim;
    int data;
    int head;
    while(1){
        printf("1-Listenin basina eleman ekle\n");
        printf("2-Listenin sonuna eleman ekle\n");
        printf("Seciminiz\n");
        scanf("%d",&secim);

        switch(secim){
            case 1: printf("Lutfen eklemek istediginiz degeri giriniz:");
            scanf("%d",&data);
            head=BasaEkle(head,data);
        }
    }
    return 0;
}
