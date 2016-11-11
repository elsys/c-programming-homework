#include <stdio.h>
#include <stdlib.h>

int main()
{
    int h,x,s,n,i;
    char a,b;
    a='*';
    b='#';
    scanf("%d",&h);
    if(h<3)printf("0");
    else{
            n=0;
            s=0;
        for(x=1;x<h;x++){
            if(x==1){
                    n=0;
                    i=1;
            }
            if(x==2){
                    n=1;
                    i=2;
            }
            if(x>2){
                    n=n+2;
                    i=2;
            }
            s=s+n;
        }


        printf("\n%d",s);
    }
       for(x=1;x<=h;x++){
            if(x==1){
                    printf("\n");
                    i=0;
                    do{
                        printf(" ");
                        i++;
                    }while(i!=h-1);
                    printf("%c",a);
            }
            if(x==2){
                if(x!=h){
                 printf("\n");
                    i=0;
                    do{
                        printf(" ");
                        i++;
                    }while(i!=h-2);
                    printf("%c",a);
                printf("%c",b);
                printf("%c",a);
                }
                else{
                     printf("\n%c",a);
                     printf("%c",a);
                     printf("%c",a);
                }
            }
            if(x>2){

                if(x!=h){
                     printf("\n");
                    i=0;
                    do{
                        printf(" ");
                        i++;
                    }while(i!=h-x);
                    printf("%c",a);
                    i=3;
                    printf("%c",b);
                    printf("%c",b);
                    printf("%c",b);
                    if(i!=x){
                         while(i<x){
                              printf("%c",b);
                              printf("%c",b);
                              i=i+1;
                         }
                    }
                    printf("%c",a);
                }
                else{
                     printf("\n");
                     i=0;
                     do{
                         printf("%c",a);
                          i++;
                    }while(i!=n+4);
                }
            }
        }
}
