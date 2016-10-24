#include <stdio.h>
int main()
{
    float x, y, z;
    scanf("%f %f %f", &x, &y, &z);
    if(x>y && x>z)
		{
        printf("\n%.1f", x);
            	}
    else
	 if(y>x && y>z)
	{
        printf("\n%.1f", y);
    	}
    else
	 if(z>x && z>y)
	{
        printf("\n%.1f",z);
    	}
}
