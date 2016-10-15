#include<stdio.h>

void main()
{
        float o,t,th;
        printf("\nEnter three nubers:");
        scanf("%f %f %f",&o,&t,&th);
        if(o>=t && o>=th)
        {
                printf("\n%.2f is the largest nubmer",o);
        }
        if(t>=0 && t>=th)
        {
                printf("\n%.2f is the largest number",t);
        }
        if(th>=0 && th>=t)
        {
                printf("\n%.2f is the largest number",th);
        }
}

