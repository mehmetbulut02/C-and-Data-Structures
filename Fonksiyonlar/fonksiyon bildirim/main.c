#include <stdio.h>
#include <stdlib.h>

int sumNumber(int,int); // Amac main fonksiyonunun uzerinde cok islem yapmamak
int main()
{
    int result=sumNumber(5,11);
    printf("Result is %d \n",result);
    return 0;
}

 int sumNumber(int x,int y){
    return x+y;
 }
