#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *dizi;
    dizi=(int*)(5,sizeof(int));
        for(int i=0;i<5;i++){
            dizi[i]=i*10;
        }
    printf("Dizi elemanlari:");
    for(int i=0;i<5;i++){
           printf("%d",dizi[i]);
        }
    return 0;
}
