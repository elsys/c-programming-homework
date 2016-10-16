#include<stdio.h>

int main()
{
        float o,t,th;
        scanf("%f %f %f",&o,&t,&th);
        if(o>=t && o>=th)
        {
                printf("\n%.1f",o);
        }
        if(t>=0 && t>=th)
        {
                printf("\n%.1f",t);
        }
        if(th>=0 && th>=t)
        {
                printf("\n%.1f",th);
        }
}
