#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Dizilerde eleman sayisini bulma

    int numbers[]={1,2,3,4,5,6,7,8,9};

        printf("%d",sizeof(numbers)/sizeof(numbers[0]));
    return 0;
}
