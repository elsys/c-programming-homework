# include <stdio.h>
# include <math.h>
int main ()
{
        float arr[1000],numb,sum;
        int br=0,i,p=0,found=0, r=0;
        for(i=0;scanf("%f",& numb)!=EOF;)
{
        for(p=0;p<i;)
        {
                if(arr[p]!=numb)
                {found=0;p++;}else {found=1;break;}
        }
        if(found==0){arr[br]=numb;br++;}if(br>=64)break;
        found=0;
        p=0;i++;
}
        printf("%d\n",br);
        r=br;

        for(;br>=0;br--)
        {

                sum=sum+fmod(arr[br],r);
        }
        printf("%.3f",sum);

return 0;
}


