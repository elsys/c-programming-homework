#include <stdio.h>
int main ()
{
        int p;
     	printf ("Input number:");
      	scanf("%d",&p);


        if (p==0) printf ("zero\n");
        else if (p==1)  printf ("one\n");
        else if (p==2) printf ("two\n");
        else if (p==3) printf ("three\n");
        else if (p==4) printf ("four\n");
        else if (p==5) printf ("five\n");
        else if (p==6) printf ("six\n");
        else if (p==7) printf ("seven\n");
        else if (p==8) printf ("eight\n");
        else if (p==9) printf ("nine\n");
	else if (p==-1) printf ("minus one\n");
	else if (p==-2) printf ("minus two\n");
	else if (p==-3) printf ("minus three\n");
	else if (p==-4) printf ("minus four\n");
	else if (p==-5) printf ("minus five\n");
	else if (p==-6) printf ("minus six\n");
	else if (p==-7) printf ("minus seven\n");
	else if (p==-8) printf ("minus eight\n");
	else if (p==-9) printf ("minus nine\n");
        else printf ("Error\n");

        return 0;
}

