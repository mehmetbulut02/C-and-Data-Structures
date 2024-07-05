#include <stdio.h>
#include <stdlib.h>

struct books{
    char* bookname;
    char* writer;
    int page;
    int year;
};

int main()
{
   struct books x;
   struct books* y;
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
