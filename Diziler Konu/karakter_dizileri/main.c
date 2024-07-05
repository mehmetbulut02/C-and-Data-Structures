#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[30];

    printf("Enter your name:");
    // scanf("%s",&name);
    gets(name);   // scanf bosluktan sonrasini almiyor fakat gets aliyor


    printf("\n Your name is %s\n",name);
    return 0;
}
