#include <stdio.h>
#include <stdlib.h>

int topla(int sayi1,sayi2){
    return sayi1 + sayi2
}
int cikar(int sayi1,sayi2){
    return sayi1 - sayi2
}
float bolme(int sayi1,sayi2){
     if(sayi2 !=0){
        return (float)sayi1 / sayi2
     }else{
        printf("Hata");
        return 0;
     }

}
int carp(int sayi1,sayi2){
    return sayi1 * sayi2
}

int main()
{
    int sayi1,sayi2;
    char karakter;

    printf("Ýlk sayiyi giriniz:");
    scanf("%d",&sayi1);

    printf("Ýkinci sayiyi giriniz:");
    scanf("%d",&sayi2);

    printf("Hangi islemi yapmak istersiniz (+,-,*,/):");
    scanf(" %c",&karakter);

    switch(karakter){
    case '+':
        printf("%d + %d = %d\n",sayi1,sayi2,topla(sayi1,sayi2));
        break;
    case '-':
        printf("%d - %d = %d\n",sayi1,sayi2,cikar(sayi1,sayi2));
        break;
    case '/':
        printf("%d / %d = %d\n",sayi1,sayi2,topla(sayi1,sayi2));
        break;
    case '*':
        printf("%d * %d = %d\n",sayi1,sayi2,topla(sayi1,sayi2));
    }
}
