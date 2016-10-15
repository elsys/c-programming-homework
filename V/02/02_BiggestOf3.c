#include <stdio.h>

int main()
{
        float a,b,c;
        printf("Enter 1st number:");
        scanf("%f",&a);
        printf("Enter 2nd number:");
        scanf("%f",&b);
        printf("Enter 3rd number:");
        scanf("%f",&c);
        if(a>b && a>c){
                printf("Biggest: %.1f",a);
        }
        else if(b>a && b>c){
                printf("Biggest: %1.f",b);
        }
        else if(c>a && c>b){
                printf("Biggest: %f",c);
        }
        return 0;
}

