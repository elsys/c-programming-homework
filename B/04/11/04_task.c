#include<stdio.h>
#include<math.h>
int main()
{
int i,k,c,br=0,new=0,mark=0;
float masiv1[1000],masiv2[64],sum;
for(i=0;scanf("%f",&masiv1[i])!=EOF;i++);
masiv2[0]=masiv1[0];
for(k=1;k<i;k++)
{
if(k==1)br++;
for(c=0;c<k;c++)
{
 if(masiv1[k]==masiv1[c]){mark=1;break;}
}
if(mark==1){mark=0;continue;}
br++;
if(br>=64)break;
new++;
masiv2[new]=masiv1[k];

}
sum=0;
for(new=0;new<br;new++){sum=sum+fmod(masiv2[new],br);}
printf("%d\n%.3f",br,sum);
return 0;
}
