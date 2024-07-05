#include <stdio.h>
#include <stdlib.h>

float exponentiation(float x, int y);


int main()
{
    float base=0,result=0; // taban
    int exponent=0; // us
    // printf("Result:%f\n",exponentiation(2,7));    Bu sekilde artik tek kodla us alabiliriz
    printf("Enter base and exponent values:");
    scanf("%f%d",&base,&exponent);
    result=exponentiation(base,exponent);
    printf("Result:%f\n",result);
    return 0;
}

float exponentiation(float x, int y){
    float result=1;
    int i;
    if(y<0){
        for(i=0;i<-y;i++){
            result*=1/x;
        }
    }else{
        for(i=0;i<y;i++){
            result*=x;
        }
    }
    return result;
}
