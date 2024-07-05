#include <stdio.h>
#include <stdlib.h>
int faktoriyel(int sayi){
    if(sayi=1 || sayi=0)
    {
        return 1;
    else{
        return sayi*faktoriyel(sayi-1);
    }
        }
}

int main()
{
    int sayi;
    printf("Bir tam sayi giriniz:");
    scanf("%d",&sayi);
    printf("%d!= %d\n",sayi,faktoriyel(sayi));
    return 0;
}
