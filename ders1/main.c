#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159

void AlanveCevre(float yaricap)
{

    float alan = PI*(yaricap*yaricap);
    float cevre = 2*PI*yaricap;
    printf("Dairenin alani: %2f\n",alan);
    printf("Dairenin cevresi: %2f\n",cevre);
}
int main()
{

    float yaricap;
    printf("Dairenin yaricapini giriniz:");
    scanf("%f",&yaricap);
    AlanveCevre(yaricap);


    return 0;
}
