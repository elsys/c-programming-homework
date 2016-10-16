#include <stdio.h>
int main()
{
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);
    if(a>b && a>c){
        printf("\n%.1f", a);
            }
    else if(b>a && b>c){
        printf("\n%.1f", b);
    }
    else if(c>a && c>b){
        printf("\n%.1f",c);
    }
}
