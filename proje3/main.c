#include <stdio.h>
#include <stdlib.h>

/* Kullanicinin verdigi 5 adet sayinin ortalamasini bulan C
programini yaziniz. */

int main()
{
    int sayi;
    float toplam = 0;

    for(int i=0 ; i<5 ; i++){
        printf("%d. sayiyi giriniz : ", i+1);
        scanf("%d", &sayi);

        toplam = toplam + sayi;
    }

    printf("Girilen sayilarin ortalamasi : %f \n", toplam/5);
}
