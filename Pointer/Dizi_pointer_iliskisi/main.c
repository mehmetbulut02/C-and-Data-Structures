#include <stdio.h>
#include <stdlib.h>

int main()
{
    char myLetters[7]={'a','b','c','d','e','f','x'};

    printf("Ilk elemanin adresi:%x\n",&myLetters[0]);
    printf("Ilk elemanin adresi:%x\n",myLetters);

    printf("Ikinci elemanin adresi:%x\n",&myLetters[1]);
    printf("Ikinci elemanin adresi:%x\n",myLetters+1);

    printf("Ucuncu elemanin adresi:%x\n",&myLetters[2]);
    printf("Ucuncu elemanin adresi:%x\n",myLetters+2);

    printf("Ilk elemanin deger:%c\n",myLetters[0]);
    printf("Ilk elemanin adresi:%c\n",*myLetters);

     printf("Ikinci elemanin deger:%c\n",myLetters[1]);
    printf("Ikinci elemanin adresi:%c\n",*myLetters+1);

     printf("Ucuncu elemanin deger:%c\n",myLetters[3]);
    printf("Ucuncu elemanin adresi:%c\n",*myLetters+3);

    return 0;
}
