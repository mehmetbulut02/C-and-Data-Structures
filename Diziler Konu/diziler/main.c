#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Dizi Ornek
/*
    double avarage=0,numbers[3];

    printf("Enter Three Numbers:");
    scanf("%lf%lf%lf",&numbers[0],&numbers[1],&numbers[2]);

    avarage=(numbers[0]+numbers[1]+numbers[2])/3;
    printf("Avarage:%3f\n",avarage);
*/

    int i,mySquare[5];

    for(i=0;i<5;i++){
        mySquare[i]=i*i;
        printf("mySquare[%d]:%d\n",i,mySquare[i]);
    }

    return 0;
}
