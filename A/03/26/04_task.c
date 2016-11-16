#include <stdio.h>

int main()
{
    int NumOfRows, row, colSpace, i, broi, diez;
    scanf("%d", &NumOfRows);
    broi=(NumOfRows-2)*(NumOfRows-2);
    printf("%d\n", broi);
    for (row=1; row<=NumOfRows; row++) {
        for(colSpace=NumOfRows-row; colSpace>=1; colSpace--) {
            printf(" ");
        }
              printf("*");
    if(row>=2){
            if(row==NumOfRows)
                for(i=0, diez=(2*row)-3; i<diez; i++){
                printf("*");
                }
            else if(row>=2)
            for(i=0, diez=(2*row)-3; i<diez; i++){
            printf("#");
    }
            printf("*");
        }
    printf("\n");
    }
    return 0;
}
