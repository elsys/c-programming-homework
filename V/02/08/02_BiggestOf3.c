#include <stdio.h>

int main()
{
        float a,b,c;
        scanf("%f",&a);
        scanf("%f",&b);
        scanf("%f",&c);
        if(a>b && a>c){
                printf("%.1f",a);
        }
        else if(b>a && b>c){
                printf("%1.f",b);
        }
        else if(c>a && c>b){
                printf("1.%f",c);
        }
        return 0;
}

