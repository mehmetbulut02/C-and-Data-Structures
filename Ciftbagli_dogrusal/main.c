#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct node{
int data;
struct node *next;
struct node *prev;
};

struct node* BasaEkle(struct node *head, int data){
struct node *temp=(struct node *)malloc(sizeof(struct node));

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
}

void SonaEkle(struct node *head, int data){
if(head==NULL){
    printf("Liste bos iken sona ekleme yapamassiniz...\n");
    return;
}

struct node *temp=(struct node *)malloc(sizeof(struct node));
struct node *last=head;
while(last->next!=NULL)
    last=last->next;
temp->data=data;
temp->next=NULL;
temp->prev=last;
last->next=temp;
}

void OrtayaEkle(struct node* head, int data, int index){
if(head==NULL){
    printf("Liste bos iken sona ekleme yapamassiniz...\n");
    return;
}

struct node *temp=(struct node *)malloc(sizeof(struct node));
struct node *temp2=head;
while(temp2->data!=index)
    temp2=temp2->next;
temp->data=data;
temp->next=temp2->next;
temp->prev=temp2;
temp2->next=temp;
}

void ListeyiYazdir(struct node *head){
if(head==NULL){
    printf("Listede Eleman Yok..");
    return;
    }
    printf("Listenin Elamanlari:   \n");
    printf("__________________________________\n");
    struct node* temp=head;
    do{
        printf("%d  ",temp->data);
        temp=temp->next;
    }while(temp!=NULL);
    printf("\n");
}

void ElamanDuzenle(struct node* head, int data, int index){
if(head==NULL){
    printf("Liste bos iken sona ekleme yapamassiniz...\n");
    return;
}
struct node *temp=head;
while(temp->data!=index){
    if(temp->next==NULL){
        printf("Silmek istediginiz veri bulunamadi....");
        return;
    }

    temp=temp->next;
}
temp->data=data;
}

struct node* ElemanSil(struct node* head, int data){
if(head==NULL){
    printf("Liste bos iken sona ekleme yapamassiniz...\n");
    return;
}

struct node* temp=head;
if(head->data==data){
    struct node *last=head;
    if(head->next==NULL){
    printf("Listenin Tüm elemanlari silinmistir.\n");
    head=NULL;
    return head;
}else{
    head=head->next;
    head->prev=NULL;
    free(temp);}
}
else{
    while(temp->next->data!=data){
            if(temp->next->next==NULL){
                printf("Silmek istediginiz veri bulunamadi...\n");
                return head;
            }
            temp=temp->next;
    }
        struct node *temp2 = temp -> next;
        temp -> next = temp2->next;
        if(temp->next!=NULL)
            (temp->next)->prev=temp;
        free(temp2);
}
    return head;
}



struct node* listeyiBosalt(struct node* head){
if(head==NULL){
    printf("Liste Zaten Bos.");
    return;
    }
struct node *temp=NULL;
while(head!=NULL){
temp=head;
head=head->next;
free(temp);
}
return head;
}


int elemanSayisi(struct node* head){
int sayac=0;
while(head!=NULL){
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
    printf("Listenin %d . elemaninin adresi=%p\n",sayac,temp);
    printf("Listenin %d . elemaninin degeri=%d\n",sayac,temp->data);
    printf("Listenin %d . elmanina bagli olan önceki liste adresi= %p\n",sayac,temp->prev);
    printf("Listenin %d . elmanina bagli olan sonraki liste adresi= %p\n",sayac,temp->next);
    sayac++;
    temp=temp->next;
}while(temp!=NULL);
}

struct node* head2_olustur(struct node* head2){

    head2=(struct node *) malloc (sizeof(struct node));
    head2->prev=NULL;
    head2->data=4;
    head2->next=(struct node*)malloc(sizeof(struct node));
    head2->next->data=5;
   (head2->next)->prev=head2;
    head2->next->next=NULL;
return head2;
}

struct node* Listeyi_Tersten_Yazdir(struct node* head, struct node* head2){
if(head==NULL){
    printf("Kopyalanacak Liste Bostur...");
    return;
}
struct node* temp=head;
while(temp!=NULL){
    head2=BasaEkle(head2,temp->data);
    temp=temp->next;
}
printf("Listenin Tersi \n");
ListeyiYazdir(head2);
return head2;
}

struct node* Listeyi_Kopyala(struct node* head, struct node* head2){
if(head==NULL){
    printf("Kopyalanacak Liste Bostur...");
    return;
}
head2=BasaEkle(head2,head->data);
struct node* temp=head->next;
while(temp!=NULL){
    SonaEkle(head2,temp->data);
    temp=temp->next;
}
printf("Kopyalanmis Liste\n");
ListeyiYazdir(head2);
listeyiBosalt(head2);
return head2;
}

Listeyi_Birlestir(struct node* head, struct node* head2){
if(head==NULL){
    printf("Kopyalanacak Liste Bostur...");
    return;
}
printf("Birlestirmeden önce Listeler \n");
ListeyiYazdir(head);
ListeyiYazdir(head2);
printf("\n");
struct node* temp=head;
while(temp->next!=NULL)
    temp=temp->next;
temp->next=head2;
head2->prev=temp;

printf("Birlestirilmis Liste \n");
ListeyiYazdir(head);
listeyiBosalt(head2);
}

int main()
{
    setlocale(LC_ALL,"Turkish");
    int secim,data,index;
    struct node *head=NULL;
    struct node *head2=NULL;

    while(1){
    printf("\nCIRCLE LINKED LIST\n");
    printf("\n-----Asagidaki islemlerden birini seçiniz...---\n");
    printf("1-Listenin Basina Eleman Ekleme\n");
    printf("2-Listenin Sonuna Eleman Ekleme\n");
    printf("3-Listenin Ortasina Eleman Ekleme\n");
    printf("4-Elemanlari Listele\n");
    printf("5-Verilen Adresteki elemani Düzenle\n");
    printf("6-Listenden istenilen Elamani Sil\n");
    printf("7-Listeyi Sil\n");
    printf("8-Listenin Eleman Sayisi\n");
    printf("9-Listenin Tüm elemanlarinin Bilgilerini Yazdir\n");
    printf("10-Listeyi Tersten Yazdir.\n");
    printf("11-Ýki Listeyi Birlestir\n");
    printf("12-Listeyi Kopyala\n");
    printf("13-Programdan Çik\n");
    scanf("%d", &secim);

            switch(secim){
                case 1:printf("Lütfen Eklemek Ýstediginiz Degeri Giriniz...");
                    scanf("%d",&data);
                    head=BasaEkle(head,data);
                    break;
                case 2:printf("Lütfen Eklemek Ýstediginiz Degeri Giriniz...");
                    scanf("%d",&data);
                    SonaEkle(head,data);
                    break;
                case 3:printf("Lütfen Eklemek Ýstediginiz Degeri Giriniz...");
                    scanf("%d",&data);
                    printf("Lütfen Ekleme Yapilacak Posizyon Bilgisini Giriniz.....");
                    scanf("%d",&index);
                    OrtayaEkle(head,data,index);
                    break;
                case 4:ListeyiYazdir(head);
                    break;
                case 5:printf("Lütfen Degistirmek Ýstediginiz Yeni Degeri Giriniz...");
                    scanf("%d",&data);
                    printf("Lütfen Degeri Degistirilmek Ýstenen Posizyon Bilgisini Giriniz.....");
                    scanf("%d",&index);
                    ElamanDuzenle(head,data,index);
                    break;
                case 6:printf("Lütfen Silmek Ýstediginiz Elmanan Degerini Giriniz...");
                    scanf("%d",&data);
                    head=ElemanSil(head,data);
                    break;
                case 7:head=listeyiBosalt(head);
                    break;
                case 8: printf("Listenin Elaman Sayisi=%d", elemanSayisi(head));
                    break;
                case 9:  listeBilgisiYazdir(head);
                    break;
                case 10: head2=Listeyi_Tersten_Yazdir(head,head2);
                    head2=listeyiBosalt(head2);
                    break;
                case 11: head2=head2_olustur(head2);
                    Listeyi_Birlestir(head, head2);
                    break;
                case 12: Listeyi_Kopyala(head,head2);
                    break;
                case 13:exit(0);
                    break;
                default: printf("Yanlis secim\n");
            }
    }
    return 0;
}


