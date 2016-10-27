 #include<stdio.h>
 int main(){
 int n,m,k,sum,poreden,pr;
 scanf("%d", &n);
 scanf("%d", &m);
 scanf("%d", &k);
 poreden=0;
 pr=0;
 sum=m;
 do{ poreden++;
 if(poreden%k==0)pr=pr+2;
 sum=sum+m-(m*pr/100);
 n--;}while(n>1);
 printf("%d", sum);
 return 0;
}
