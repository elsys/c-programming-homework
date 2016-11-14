#include <stdio.h>
#include <stdlib.h>

int main()
{
  //gets number of
  int n=0,i=0,num=0,thereisamiddle=0,middle,min;
  scanf("%d",&n);
  int a[n],k=n,cpy=n;

   while(i<n)
   {
        scanf("%d",&num);
        if((num & 1) != 0)
            {
                a[i]=num;
                i++;
            }
   }

  if((cpy & 1) != 0)
    {
        thereisamiddle=1;
        middle=(n/2);
    }
  else middle=(n/2)-1;

  for(i=0,k=n-1;i<middle+1;i++,k--)
  {


    if((thereisamiddle==1)&&(i==middle))
        {
            printf("%d\n",a[i]);
            break;
        }
    else
        {
              num=a[i];
              min=a[k];
              num=num-min;
            printf("%d\n",num);
        }

  }
  return 0;
}
