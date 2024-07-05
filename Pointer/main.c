#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    int x=7;
    int* ptr;
    ptr=&x;
    printf("x variable %d\n",x);
    *ptr=19;
    printf("x variable new value %d\n",x);
    */

    double x=3.14;
    double* y=&x;
    double* z=&x;

    printf("y:%f\n",*y);
    printf("z:%f\n\n",*z);
    *y=21.19;
    printf("x:%f\n\n",x);
    return 0;
}
