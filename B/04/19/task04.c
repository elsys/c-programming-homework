#include <stdio.h>

int searching_value(float*, int);

int main()
{
  float number[100];
  float n, sum = 0;
  int i, count,length = 0;  

   while(scanf("%f", &n) != EOF)
   {
    number[length] = n;
    length++;
    if((count = searching_value(number, length)) >= 64)break;
   }

  for(i = 0; i < length; i++)
  {
    float part = number[i] - (int)number[i];
    printf("part = %f\n",part);

    int rest = (int)number[i] % count;
    printf("rest %d\n", rest);
    sum = sum + rest + part;
  }
  
  printf(" %d\n%f",count ,sum);
  
  return 0;
}

int searching_value(float arr[], int n)
{
  int i, j;
  int count = 1;
  for(i = 0;i < n - 1; i++)
  {

   for(j = i + 1;j < n; j++)
   {
     if(arr[i] == arr[j])break;
     else if(j == n - 1)
     {
       count ++;
     }
   }
  }
  return count;
}

