#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matrix[2][3]={
                        {2,7,19},
                        {3,8,12}

    };
    /*
    matrix[0][2]=100;
    printf("%d,",matrix[0][0]);
    printf("%d,",matrix[0][1]);
    printf("%d\n",matrix[0][2]);

    printf("%d,",matrix[1][0]);
    printf("%d,",matrix[1][1]);
    printf("%d",matrix[1][2]);
    */

    int i,j;
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("%5d",matrix[i][j]);
        }
        printf("\n\n");
    }
    return 0;
}
