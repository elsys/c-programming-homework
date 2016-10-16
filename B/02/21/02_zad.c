# include <stdio.h>
int main ()
{	float a,b,c;
 printf("\n Input a:");
 scanf ("%f",&a);
 printf("\n Input b:");
 scanf ("%f",&b);
 printf("\n Input c:");
 scanf ("%f",&c);
   if(a>b)
 {
		if (a>c)
		printf("\n max=%f\n",a);
		else printf ("\n max=%f\n",c); 
 }  else 
	{
		if(b>c)
		printf("\n max=%f\n",b);
		else printf("\n max=%f\n",c);
	}

 return 0;
}
