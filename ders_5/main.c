#include <stdio.h>
#include <stdlib.h>

void swap(int*a,int*b){
    int gecici=*a;
    *a=*b;
    *b=gecici;
}
int main()
{
    int sayi1,sayi2;
    printf("Ilk sayiyi giriniz:");
    scanf("%d",&sayi1);
    printf("Ikinci sayiyi giriniz:");
    scanf("%d",&sayi2);

    printf("Degistirilmeden once sayilar: sayi1= %d , sayi2= %d\n",sayi1,sayi2);
    swap(&sayi1,&sayi2);
    printf("Degistirildikten sonra sayilar: sayi1= %d , sayi2= %d\n",sayi1,sayi2);
    return 0;
}
