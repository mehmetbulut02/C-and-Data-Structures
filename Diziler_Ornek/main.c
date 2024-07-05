#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Dizinin tum elemanlarini toplayan ornek veriler kullanicidan alinacak
    int n;
    int toplam=0;

    printf("Kac eleman gireceksiniz:");
    scanf("%d",&n);

    if(n<=0){
        printf("Geçersiz!");
        return 1;
    }
    int dizi[n];

    for(int i=0;i<n;i++){
        printf("Dizinin %d. elemanini giriniz:",i+1);
        scanf("%d",&dizi[i]);
        toplam+=dizi[i];
    }
    printf("Elemanlarin toplami:%d\n",toplam);

    return 0;
}
