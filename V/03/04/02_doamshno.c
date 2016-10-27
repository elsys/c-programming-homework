int main()
{
int n,sum,count=0,k;
scanf("%d",&n);

while(n!=0)
{
 k=n%10;
 sum=sum+k;
 n=n/10;
 count++;
}

float avg;
avg=sum/count;

if(avg<=7){
printf("light");}
if(avg>7){
printf("heavy");}

return 0;
}
