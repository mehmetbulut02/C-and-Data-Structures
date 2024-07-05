#include <stdio.h>
#include <stdlib.h>

/* 47 ile 121 arasýnda bulunan 5 in ve 3 ün katý olan sayýlarý
ekrana yazan programý kodlayýnýz. */

int main()
{
    int sayi1,sayi2;

    printf("1.Sayiyi giriniz: ");
    scanf("%d",&sayi1);
    printf("2.Sayiyi giriniz: ");
    scanf("%d",&sayi2);

    for(int i = sayi1; i < sayi2; i++)
    {
        if(i % 5 == 0 && i % 3 == 0){
            printf("5 ve 3' un katlari = %d\n",i);
        }
    }
}
