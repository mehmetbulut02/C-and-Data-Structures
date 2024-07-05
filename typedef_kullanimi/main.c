#include <stdio.h>
#include <stdlib.h>

typedef struct{    // typedef ile surekli struct yazmamiza gerek kalmayacak yerine sadece books kullanicaz
    char* bookname;
    char* writer;
    int page;
    int year;
}books;

int main()
{
   books x;
   books* y;
   y=&x;
   (*y).bookname="Bu Ulke";
   (*y).writer="Cemil Meric";
   (*y).page=256;
   (*y).year=1960;

   printf("Book Name:%s\n",(*y).bookname);
    printf("Writer:%S\n",(*y).writer);
    printf("Page:%d\n",(*y).page);
    printf("Year:%d\n\n",(*y).year);

    return 0;
}
