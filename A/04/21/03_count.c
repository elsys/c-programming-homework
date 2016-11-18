#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i=0,p=0,count=0,l=0;
    char b[1001],a[1001],j='a';
    fgets(a,1001,stdin);
    int k=strlen(a);
    do{
        if((a[l]>='a'&&a[l]<='z')||(a[l]>='A'&&a[l]<='Z'))
            {
            if(a[l]>='A'&&a[l]<='Z')a[l]=a[l]+32;
            b[i]=a[l];
            i++;
                }
        l++;
    }while(l<k);
   while(j<=122){
        for(p=0;p<i;p++){
                if(b[p]==j)count=count+1;

        }


             if(count>0)
            {
                printf("%c - %d\n",j,count);
            }
       count=0;
        j++;
        }
    return 0;

}
