+#include <stdio.h>
 +
 +int main()
 +{
 +float a,b,c;
 +printf("Enter number 1: ");
 +scanf("%f",&a);
 +printf("Enter number 2: ");
 +scanf("%f",&b);
 +printf("Enter number 3: ");
 +scanf("%f",&c);
 +if(a>b){
 +    if(a>c){
 +        printf("%f",a);
 +    }
 +}
 +if(b>a){
 +    if(b>c){
 +        printf("%f",b);
 +    }
 +}
 +if(c>a){
 +    if(c>b){
 +        printf("%f",c);
 +    }
 +}
 +}
