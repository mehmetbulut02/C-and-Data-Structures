#include <stdio.h>
#include <stdlib.h>

struct students{
    char myLetter;
    char* name;
    char* lastname;
    int no;
    float score;
    char parentName[40];
};

int main()
{
    struct students x={'A',"Ali","Veli",1937,55.8,"Osman"};
    struct students x2;

    x2=x;

    x.no=1767; // Verileri degistirmek icin kullanilir
    x.score=98.45;
    strcpy(x.parentName,"Ayse");



    printf("Letter:%c\n",x.myLetter);
    printf("Name:%s\n",x.name);
    printf("Last Name:%s\n",x.lastname);
    printf("No:%d\n",x.no);
    printf("Score:%.2f\n",x.score);
    printf("Parent Name:%s\n\n",x.parentName);

    printf("------------------\n");

    printf("Letter:%c\n",x2.myLetter);
    printf("Name:%s\n",x2.name);
    printf("Last Name:%s\n",x2.lastname);
    printf("No:%d\n",x2.no);
    printf("Score:%.2f\n",x2.score);
    printf("Parent Name:%s\n",x2.parentName);
    return 0;
}
