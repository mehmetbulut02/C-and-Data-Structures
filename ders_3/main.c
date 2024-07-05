#include <stdio.h>
#include <stdlib.h>

int FaktoriyelHesapla(){
    int sayi,faktoriyel=1;

    printf("Sayi giriniz:");
    scanf("%d",&sayi);
    if(sayi<0){
        printf("Negatif sayi girmeyiniz");
        return -1;
    }
    for(int i=1;i<=sayi;i++){
        faktoriyel *=i;
    }
    return faktoriyel;
}
int main(){
    int faktoriyel=FaktoriyelHesapla();
    if faktoriyel(!=-1){
        printf("Faktoriyel=%d\n",faktoriyel);
    }
    return 0;
}
