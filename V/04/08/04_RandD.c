#include <stdio.h>
#include <math.h>

int main()
{
    float a[64],ch,sum=0;
    int i=0,br,unseen=0,seen=0;
    while(scanf("%f",&ch)!=EOF){
        if(i==0)a[unseen]=ch;
        else{
            for(br=0;br<(i-1);){
               if(a[br]==ch)seen=1;
               br++;
            }
            if(seen==0){
                unseen++;
                a[unseen]=ch;
            }
        }
            seen=0;
            i++;
        }
    printf("%d\n",unseen);
        for(i=0;i<=unseen;){
            sum=sum+fmod(a[i],unseen);
            i++;
        }
    printf("%.3f",sum);
    return 0;
}
