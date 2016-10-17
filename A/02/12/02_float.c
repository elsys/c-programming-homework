#include <stdio.h>
#include <stdlib.h>

int main()
{
    //max ot 3
    float float1,float2,float3;
    scanf("%f",&float1);
    scanf("%f",&float2);
    scanf("%f",&float3);
    float max;

    if(float1>float2){
        if(float1>float3) max = float1;
        else max = float3;
    }
     else if(float2>float1){
        if(float2>float3) max=float2;
        else max=float3;
     }
     printf("%.1f",max);
}
