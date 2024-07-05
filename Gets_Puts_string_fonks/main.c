#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    char* messagePtr="What an interesting language";
    char myArray[30]="Hello C!";

    puts(messagePtr);
    puts(myArray);
    */

    char message[100];

    puts("Please, enter a sentence:");
    gets(message);

    puts("\nYour sentences:");
    puts(message);
    return 0;
}
