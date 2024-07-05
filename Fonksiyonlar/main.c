#include <stdio.h>
#include <stdlib.h>

    void myMessage(){  // return dondurmeyecegimiz zaman void kullaniriz
        printf("Now I can write a function\n");
    }
    void nameList(char name[],int age){
        printf("%s you are %d years old\n",name,age);
    }
    void allNumbers(int myNumbers[6]){
        for(int i=0;i<6;i++){
            printf("%d\n",myNumbers[i]);
        }
    }
    int sumNumbers(int x, int y){
        return x+y;
    }

int main()
{
    int myNumber=sumNumbers(1,6)*5;
    printf("Result is %d\n",myNumber);

   // int myNumbers[6]={10,20,30,40,50,60};
   // allNumbers(myNumbers);

    /*
    nameList("Fehmi",32);
    nameList("Ahmet",34);
    nameList("Aynur",30);
    */

    return 0;
}
