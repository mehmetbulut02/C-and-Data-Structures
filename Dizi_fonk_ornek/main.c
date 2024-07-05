#include <stdio.h>
#include <stdlib.h>

int elemanVarMi(int dizi[], int n ,int aranan );
int main()
{
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

    }
    int aranan;
    printf("Aranan elemani giriniz:");
    scanf("%d",&aranan);

    if(elemanVarMi(dizi,n,aranan)){
        printf("Aranan eleman dizi icerisinde bulunuyor\n");
    }else{
        printf("Aranan eleman dizide bulunmuyor\n");
    }

return 0;
}
int elemanVarMi(int dizi[], int n ,int aranan ){
        for(int i=0;i<n;i++){
                if(dizi[i]==aranan){
                    return 1;
                }
            }
        return 0;
}
