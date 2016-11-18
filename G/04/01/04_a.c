#include <stdio.h>
#include <stdlib.h>

int main()
{
 float Number,Search[64],ostatuk,sum=0;
 int i,isExist,br=0;
 while (scanf("%f", &Number) != EOF && br<64)
 {
     isExist = 0 ;
     for(i=0;i<br;i++){
        if(Search[i] == Number){
            isExist = 1;
                break;
        }
     }
    if(isExist == 0){
        Search[br] = Number; br++;
        }
}
for(i=0;i<br;i++){
    ostatuk =Search[i]-((int)Search[i]/br)*br ;
    sum = sum + ostatuk;
}
printf("%d\n",br);
printf("%.3f\n",sum);
return 0;
}
