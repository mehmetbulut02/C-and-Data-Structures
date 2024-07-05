#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct node{
int data;
struct node *next;
};

struct node* BasaEkle(struct node *head, int data){
struct node *temp=(struct node *)malloc(sizeof(struct node));

if(head==NULL){
    temp->data=data;
    temp->next=temp;

}else{
    struct node *last=head;
    while(last->next!=head)
        last=last->next;
    temp->data=data;
    temp->next=head;
    last->next=temp;
}
head=temp;
return head;
}

void SonaEkle(struct node *head, int data){
if(head==NULL){
    printf("Liste Bo� iken Sona Ekleme Yapamazs�n�z...\n");
    return;
}

struct node *temp=(struct node *)malloc(sizeof(struct node));
struct node *last=head;
while(last->next!=head)
    last=last->next;
temp->data=data;
temp->next=head;
last->next=temp;
}

void OrtayaEkle(struct node* head, int data, int index){
if(head==NULL){
    printf("Liste Bo� iken Sona Ekleme Yapamazs�n�z...\n");
    return;
}
struct node *temp=(struct node *)malloc(sizeof(struct node));
struct node *temp2=head;
while(temp2->data!=index)
    temp2=temp2->next;
temp->data=data;
temp->next=temp2->next;
temp2->next=temp;
}

void ListeyiYazdir(struct node *head){
if(head==NULL){
    printf("Listede Eleman Yok..");
    return;
    }
    printf("Listenin Elamanlar�:   \n");
    printf("__________________________________\n");
    struct node* temp=head;
    do{
        printf("%d  ",temp->data);
        temp=temp->next;
    }while(temp!=head);

    printf("\n");
}

void ElamanDuzenle(struct node* head, int data, int index){
if(head==NULL){
    printf("Liste Bo� iken Sona Ekleme Yapamazs�n�z...\n");
    return;
}
struct node *temp=head;
while(temp->data!=index)
    temp=temp->next;
temp->data=data;
}

struct node* ElemanSil(struct node* head, int data){
if(head==NULL){
    printf("Liste Bo� iken Silme ��lemi Yapamazs�n�z...\n");
    return;
}

struct node* temp=head;
if(head->data==data){
    struct node *last=head;
    if(head->next==head){
    printf("Listenin T�m elemanlar� silinmi�tir.\n");
    head=NULL;
    return head;
}
    while(last->next!=head)
        last=last->next;
    head=head->next;
    last->next=head;
    free(temp);
}
else{
    while(temp->next->data!=data){
            if(temp->next->next==head){
                printf("Silmek istedi�iniz veri bulunamad�...\n");
                return head;
            }
            temp=temp->next;
    }
        struct node *temp2 = temp -> next;
        temp -> next = temp -> next -> next;
        free(temp2);
}
    return head;
}

struct node* listeyiBosalt(struct node* head){
if(head==NULL){
    printf("Liste Zaten Bo�.");
    return;
    }
do{
head=ElemanSil(head,head->data);
}while(head!=NULL);
return head;
}


int elemanSayisi(struct node* head){
int sayac=0;
while(head->next!=head){
    head=head->next;
    sayac++;
}
return sayac;
}

void listeBilgisiYazdir(struct node* head){
if(head==NULL){
    printf("Listede Eleman Yok..");
    return;
    }
int sayac=1;
struct node* temp=head;
do{
    printf("Listenin %d . eleman�n�n adresi=%p\n",sayac,temp);
    printf("Listenin %d . eleman�n�n de�eri=%d\n",sayac,temp->data);
    printf("Listenin %d . elman�na ba�l� olan liste adresi= %p\n",sayac,temp->next);
    sayac++;
    temp=temp->next;
}while(temp!=head);
}
int main()
{
    setlocale(LC_ALL,"Turkish");
    int secim,data,index;
    struct node *head=NULL;
    struct node *head2=NULL;
    while(1){
    printf("\nCIRCLE LINKED LIST\n");
    printf("\n-----A�a��daki i�lemlerden birini se�iniz...---\n");
    printf("1-Listenin Ba��na Eleman Ekleme\n");
    printf("2-Listenin Sonuna Eleman Ekleme\n");
    printf("3-Listenin Ortas�na Eleman Ekleme\n");
    printf("4-Elemanlar� Listele\n");
    printf("5-Verilen Adresteki eleman� D�zenle\n");
    printf("6-Listenden �stenilen Elaman� Sil\n");
    printf("7-Listeyi Sil\n");
    printf("8-Listenin Eleman Say�s�\n");
    printf("9-Listenin T�m elemanlar�n�n Bilgilerini Yazd�r\n");
    printf("10-Listeyi Tersten Yazd�r.\n");
    printf("11-�ki Listeyi Birle�tir\n");
    printf("12-Listeyi Kopyala\n");
    printf("13-Programdan ��k\n");
    scanf("%d", &secim);
            switch(secim){
                case 1:printf("L�tfen Eklemek �stedi�iniz De�eri Giriniz...");
                    scanf("%d",&data);
                    head=BasaEkle(head,data);
                    break;
                case 2:printf("L�tfen Eklemek �stedi�iniz De�eri Giriniz...");
                    scanf("%d",&data);
                    SonaEkle(head,data);
                    break;
                case 3:printf("L�tfen Eklemek �stedi�iniz De�eri Giriniz...");
                    scanf("%d",&data);
                    printf("L�tfen Ekleme Yap�lacak Posizyon Bilgisini Giriniz.....");
                    scanf("%d",&index);
                    OrtayaEkle(head,data,index);
                    break;
                case 4:ListeyiYazdir(head);
                    break;
                case 5:printf("L�tfen De�i�tirmek �stedi�iniz Yeni De�eri Giriniz...");
                    scanf("%d",&data);
                    printf("L�tfen De�eri De�i�tirilmek �stenen Posizyon Bilgisini Giriniz.....");
                    scanf("%d",&index);
                    ElamanDuzenle(head,data,index);
                    break;
                case 6:printf("L�tfen Silmek �stedi�iniz Elman�n De�erini Giriniz...");
                    scanf("%d",&data);
                    head=ElemanSil(head,data);
                    break;
                case 7:head=listeyiBosalt(head);
                    break;
                case 8: printf("Listenin Elaman Say�s�=%d", elemanSayisi(head));
                    break;
                case 9: listeBilgisiYazdir(head);
                    break;
                case 10:
                    break;
                case 11:
                    break;
                case 12:
                    break;
                case 13:exit(0);
                    break;
                default: printf("Yanlis secim\n");
            }
    }
    return 0;
}


