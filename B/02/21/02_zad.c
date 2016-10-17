# include <stdio.h>
int main ()
{	float a,b,c;
 scanf ("%f",&a);
 scanf ("%f",&b);
 scanf ("%f",&c);
   if(a>b)
 {
		if (a>c)
		printf("\n%.1f\n",a);
		else printf ("\n%.1f\n",c); 
 }  else 
	{
		if(b>c)
		printf("\n%.1f\n",b);
		else printf("\n%.1f\n",c);
	}

 return 0;
}
