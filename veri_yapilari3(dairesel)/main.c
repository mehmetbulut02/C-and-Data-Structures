#include <stdio.h>
#include <stdlib.h>

struct node{
int data;
struct node *next;
};

struct node *BasaEkle(struct node *head,int data){
struct node *temp=(struct node *)malloc(sizeof(struct node));
if(head==NULL){
    temp->data=data;
    temp->next=temp;
}else{
    temp->data=data;
    temp->next=temp;
struct node *last=head;
while (last->next!=head)
        last=last->next;
    last->next=temp;


}
head=temp;
return head;
};

void SonaEkle(struct node *head,int data) {
if(head == NULL) {
    printf("Sona ekleme yapamassiniz\n\n");
    return;
}
else {
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    struct node *temp2 = head;
    temp -> data = data;

    while(temp2 -> next != head)
            temp2 = temp2 -> next;
    temp -> next = head;
    temp2 -> next = temp;
}
}

void OrtayaEkle(struct node *head,int data,int index){
if(head==NULL){
    printf("Liste bos iken ortaya ekleme yapamazsiniz..\n\n");
    return;
}
struct node *temp=(struct node*)malloc(sizeof(struct node));
struct node *temp2=head;
while(temp2->data!=index)
    temp2=temp2->next;
temp->data=data;
temp->next=temp2->next;
temp2->next=temp;
}

void Listele(struct node *head){
if(head==NULL){
    printf("Liste bos\n\n");
    return ;
}
else{

struct node *temp=head;
do{
    printf("%d\n\n",temp->data);
    temp=temp->next;

}while(temp!=head);
}

}

int main()
{
    int secim;
    int data;
    int head;
    while(1){
        printf("1-dairesel Listenin Basina Eleman Ekle\n");
        printf("2-Listenin Sonuna Eleman Ekle\n");
        printf("3-Listenin Ortasina Eleman Ekle\n");
        printf("4-Elemanlari Listele\n");
        printf("5-Listeyi sil\n");
        printf("6-Listedeki eleman sayisi\n");
        printf("7-Listeden eleman sil\n");
        printf("8-Elemanlari Duzenleme Gorme\n");
        printf("9-Listeden verilen bir degere sahip dugum silmek\n");
        printf("10-Listenin tum eleman bilgileri\n");
        printf("11-Listeyi Tersten yaz\n");
        printf("12-Listeyi kopyala\n");
        printf("13-Listeye liste ekle\n");
        printf("14-Programdan cikma\n");
        printf("Seciminiz.....?\n");
        scanf("%d",&secim);

        switch(secim){
            case 1:printf("Lutfen eklemek istediginiz degeri giriniz:");
                scanf("%d",&data);
                head=BasaEkle(head,data);
                break;
            case 2:printf("Lutfen eklemek istediginiz degeri giriniz:");
                scanf("%d",&data);
                SonaEkle(head,data);
                break;
            case 3:
                printf("Lutfen eklemek istediginiz degeri giriniz:");
                scanf("%d", &data);
                int index;
                printf("Lutfen eklemek istediginiz indeksi giriniz:");
                scanf("%d", &index);
                OrtayaEkle(head, data, index);
                break;
            case 4:
                Listele(head);
                break;
           /* case 5:
                 head=ListeyiBosalt(head);
                break;
            case 6:
                printf("Listenin eleman sayisi=%d\n\n",elemanSayisi(head));
                break;
            case 7:
                head=elemanSil(head);
                break;
           /* case 8:
                break;
            case 9:
                break;
            case 10:
                break;
            case 11:
                break;
            case 12:
                break;
            case 13:
                break;*/
    }
    }

    return 0;
}
