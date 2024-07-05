#include <stdio.h>
#include <stdlib.h>

int main()
{
   int *a,*b,*toplam;
   a = (int*)(malloc(sizeof(int)));
   b = (int*)(malloc(sizeof(int)));
   toplam = (int*)(malloc(sizeof(int)));

   printf("1.sayiyi giriniz:");
   scanf("%d",a);
   printf("2.sayiyi giriniz:");
   scanf("%d",b);

   *toplam=*a+*b;
   printf("Sayilarin toplami: %d\n",*toplam);
   printf("Degiskenin adresi:%p\n",toplam);
    return 0;
}
