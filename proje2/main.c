#include <stdio.h>
#include <stdlib.h>

/* Kurenin yaricapini disaridan alan hacmini heasplayan C
programini yaziniz. */

int main()
{

float r,hacim,pi=3.14;

printf("yaricapi giriniz : ");

scanf("%f",&r);

hacim=(4*r*r*r*pi)/3;

printf("\nhacim = %f",hacim);

return 0;

}
