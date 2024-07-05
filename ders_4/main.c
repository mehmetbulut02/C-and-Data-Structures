#include <stdio.h>
#include <stdlib.h>

int EbobHesapla(int sayi1,int sayi2){
    while(sayi1 != sayi2){
        if(sayi1>sayi2){
            sayi1 -= sayi2;
        }else{
            sayi2 -= sayi1;
        }
    }
    return sayi1;
}
int main()
{
    int sayi1,sayi2;
    printf("Ilk sayiyi giriniz:");
    scanf("%d",&sayi1);
    printf("Ikinci sayiyi giriniz:");
    scanf("%d",&sayi2);

    if(sayi1<0 || sayi2<0){
        printf("Negatif sayilarin ebobu hesaplanamaz:");
    }else{
        int ebob=EbobHesapla(sayi1,sayi2);
        printf("Ebob(%d, %d)= %d\n",sayi1,sayi2,ebob);
    }

    return 0;
}
