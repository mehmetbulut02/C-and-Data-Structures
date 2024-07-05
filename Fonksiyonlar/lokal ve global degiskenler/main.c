#include <stdio.h>
#include <stdlib.h>
void Print();
int superVariable=2;

int main()
{
     superVariable=7;
     Print();
    return 0;
}

void Print(){
    printf("%d\n",superVariable);
}
