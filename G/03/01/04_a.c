#include <stdio.h>
#include <stdlib.h>

int main()
{
    int broi,broiSpace,broiDies,i,j,sumaDies=0;
    do{
    scanf("%d",&broi);
    }while(broi<3);
    int koloni=2*broi-1;
    for(i=0;i<broi;i++){
        if(i==0 || i==broi-1){
        broiDies=0;
        }
        else{
        broiDies=2*i-1;
        }
    sumaDies+=broiDies;
    }
    printf("%d",sumaDies);
    for(i=0;i<broi;i++){
    printf("\n");
    broiSpace=broi-(i+1);
    
    for(j=0;j<koloni;j++){
    if(i!=broi-1&&(j<broiSpace||j>=koloni-broiSpace))
        printf(" ");
    else
        if(j==broiSpace||j==koloni-broiSpace-1||i==broi-1)
            printf("*");
    else
        printf("#");
}
    }
	printf("\n");
	return 0;
}
