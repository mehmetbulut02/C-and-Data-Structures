#include <stdio.h>
#include <stdlib.h>

struct dugum{
    int veri;
    struct dugum * gosterici;
};

struct dugum * bas = NULL;
struct deugum gecici= NULL;

void sonaEkle(int sayi)
{
    struct dugum * eklenecek;
    eklenecek = (struct dugum * ) malloc (sizeof(struct dugum));
    eklenecek ->veri=sayi;
    eklenecek ->gosterici=NULL;
}

int main()
{

    return 0;
}
