#include <stdio.h>
#include <stdlib.h>


    struct top{
    int x;
    int y;
    float r;
    };
int main()
{

    struct top top1={20,10,3};
    struct top top2;
    top2.x=3;
    top2.y=5;
    top2.r=8;

    return 0;
}

