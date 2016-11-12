   #include <stdio.h>

int main()
{   int a,i;
    float s,b;
    scanf("%d", &a);
    s=0;
    i=0;
    do{
        i++;
        s=s+a%10;
        a=a/10;
        b=s;
        b=b/i;
 }while(a>0);
    if(b<7){
        printf("light\n");
    }
    else{
        printf("heavy\n");
    }
    return 0;
}
