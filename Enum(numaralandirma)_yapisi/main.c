#include <stdio.h>
#include <stdlib.h>

enum Month{
    JANUARY=1,
    FEBRUARY,
    MARCH,
    APRIL,
    MAY,
    JUNE,
    JULY,
    AUGUST,
    SEPTEMBER,
    OCTOBER,
    NEVEMBER,
    DECEMBER
};

int main()
{
    enum Month myConst;
    myConst=JUNE;

    if(myConst==6 || myConst==7 || myConst==8){
        printf("Welcome to summer vocation\n");
    }else{
        printf("It's school time again\n");
    }
    return 0;
}
