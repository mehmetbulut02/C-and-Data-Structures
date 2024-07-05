#include <stdio.h>
#include <stdlib.h>

struct node{
int data;
struct node *next;
};


struct node* BasaEkle(struct node *head,int data){
struct node *temp=(struct node *)malloc(sizeof(struct node));
temp->data=data;
temp->next=head;
head=temp;
return head;
};
void SonaEkle(struct node *head,int data){
if(head==NULL)
    printf("Liste Bos Iken Sona Ekleme Yapamassiniz..\n");
    return;


struct node* SonaEkle(struct node *head,int data){
struct node *temp=(struct node *)malloc(sizeof(struct node));
temp->data=data;
temp->next=NULL;
struct node *temp2=head;
while(temp2->next!=NULL)
    temp2=temp2->next;
temp2->next=temp;
};
}
void OrtayaEkle(struct node *head,int data,int index){
if(head==NULL){
    printf("Liste bos iken ortaya ekleme yapamazsiniz..\n");
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
    printf("Liste bos");
    return;
    }
struct node *temp2=head;
while(temp2!=NULL){
    printf("%d\n",temp2->data);
    temp2=temp2->next;
}
}
void Kunye(struct node *head){
if(head==NULL){
    return;
}
struct node *temp2=head;
while(temp2!=NULL){
    printf("%d\n",temp2->data);
    temp2=temp2->next;
}
}
struct node *ListeyiBosalt(struct node *head){
if(head==NULL){
    printf("Liste zaten bos!");
    return;
}
struct node *temp;
while(head!=NULL){
    temp=head;
    head=head->next;
    free(temp);
}
return head;
}

int elemanSayisi(struct node *head){
int counter=0;
struct node *temp=head;
while(head!=NULL){
    head=head->next;
    counter++;
}
return counter;
}
struct node *elemanSil(struct node *head,int data){
if(head==NULL){
    printf("Liste bos iken silme yapamazsiniz");
    return;
}
struct node *temp=head;
if(head->data==data){
    head=head->next;
    free(temp);
}
else{
    while(temp->next->data!=data){
        if(temp->next->next==NULL){
            printf("Silmek istediginiz veri bulunamadi\n");
            return head;
        }
        temp=temp->next;
    }
    struct node *temp2 = temp->next;
    free(temp2);
}
void elemanDuzenle(struct node *head,int index,int yeni_veri){
if(head==NULL){
    printf("Liste bos");
}
struct node *temp=head;
while(temp->data!=index){
    temp
}
}

return head;
}


int main()
{
    int secim;
    int data;
    int head;
    while(1){
        printf("1-Listenin Basina Eleman Ekle\n");
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
            case 5:
                 head=ListeyiBosalt(head);
                break;
            case 6:
                printf("Listenin eleman sayisi=%d\n\n",elemanSayisi(head));
                break;
            case 7:
                head=elemanSil(head);
                break;
            case 8:
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
                break;
    }
    }

    return 0;
}

