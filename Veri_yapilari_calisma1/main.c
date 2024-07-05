#include <stdio.h>
#include <stdlib.h>

struct dugum        // yapi olusturma  //node
{
    int veri;           // data
    struct dugum * gosterici;     //next
};

int main() {

    struct dugum * bir;  // tanimladik
    bir = (struct dugum * ) malloc ( sizeof( struct dugum )); // ilk dugumu olusturduk bellekte yer ayirdik

    struct dugum * iki;
    iki = (struct dugum * ) malloc ( sizeof( struct dugum ));

    struct dugum * uc;
    uc = (struct dugum * ) malloc ( sizeof( struct dugum ));

    struct dugum * dort;
    dort = (struct dugum * ) malloc ( sizeof( struct dugum ));

    bir->veri=11;  // veri girisi yaptik
    bir->gosterici=iki; // ikinci dugumu adres olarak gosterdik

    iki->veri=22;
    iki->gosterici=uc;

    uc->veri=33;
    uc->gosterici=dort;

    dort->veri=44;
    dort->gosterici=NULL;

    printf("%d\n%d\n%d\n%d\n",bir->veri, iki->veri, uc->veri, dort->veri);
}
