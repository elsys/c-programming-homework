#include <stdio.h>

float searching_value(float*, int);

int main()
{
  float number[100];
  float n, sum = 0;
  int i, count = 1,length = 0;  

   while(scanf("%f", &n) != EOF)
   {
    number[length] = n;
    length++;
    if(searching_value(number, length)){
    count++;
    if(count >= 64)break;
    
    float part = searching_value(number, length) - (int)searching_value(number, length);
    int rest = (int)searching_value(number, length) % count;
    sum = sum + rest + part;

    }
  }
  
  printf(" %d\n%f",count ,sum);
  
  return 0;
}

float searching_value(float arr[], int n)
{
  int i, j;
  for(i = 0;i < n - 1; i++)
  {

   for(j = i + 1;j < n; j++)
   {
     if(arr[i] == arr[j])break;
     else if(j == n - 1)
     {
       return arr[i];
     }else return 0;
   }
  }
}

