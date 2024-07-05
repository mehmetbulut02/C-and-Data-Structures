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
    struct students x;   // struct ile kendi veriable turumuzu olusturuyoruz students gibi daha sonra her farkli kullanim icin farkli degerler atiyoruz( x x2)
    struct students x2={'B',"Ali","Veli",1937,55.8,"Osman"};

    x.myLetter='A';
    x.name="Mehmet";
    x.lastname="Bulut";
    x.no=2002;
    x.score=96.5;
    strcpy(x.parentName,"Ahmet");





    printf("Letter:%c\n",x.myLetter);
    printf("Name:%s\n",x.name);
    printf("Last Name:%s\n",x.lastname);
    printf("No:%d\n",x.no);
    printf("Score:%.2f\n",x.score);
    printf("Parent Name:%s\n\n",x.parentName);

    printf("Letter:%c\n",x2.myLetter);
    printf("Name:%s\n",x2.name);
    printf("Last Name:%s\n",x2.lastname);
    printf("No:%d\n",x2.no);
    printf("Score:%.2f\n",x2.score);
    printf("Parent Name:%s\n",x2.parentName);
    return 0;
}
