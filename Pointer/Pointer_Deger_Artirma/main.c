#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name ='f';
    double y=3.1415;
    int x=7;

    char* nameptr=&name;
    double* yptr=&y;
    int* xptr=&x;

    printf("First adresses:\n\n");

    printf("name's first adress:%x\tvalue:%c\n",nameptr,*nameptr);
    printf("y's first adress:%x\t\tvalue:%f\n",yptr,*yptr);
    printf("x's first sddress:%x\tvalue:%d\n\n",xptr,*xptr);

    nameptr++; // 1 byte
    xptr+=3; // 12 byte
    yptr-=4; // 32 byte

    printf("Next adresses:\n\n");

    printf("name's next adress:%x\tvalue:%c\n",nameptr,*nameptr);
    printf("y's next adress:%x\t\tvalue:%f\n",yptr,*yptr);
    printf("x's next sddress:%x\t\tvalue:%d\n\n",xptr,*xptr);

    return 0;
}
