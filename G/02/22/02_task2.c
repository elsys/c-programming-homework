int main()
{
    float a,b,c,max;
    max=0;
printf("\nvuvedi 3 chisla:");
printf("\n1:");
scanf("%f", &a);
printf("\n2:");
scanf("%f", &b);
printf("\n3:");
scanf("%f", &c);
    if(a>max)
        max=a;
    if(b>max)
        max=b;
    if(c>max)
        max=c;
    printf("%.2f", max);
}
