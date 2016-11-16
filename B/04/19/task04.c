#include <stdio.h>

float searching_value(float*, int);
float summation(float*, int);

int main()
{
  float number[100];
  int length = 0;  

   while(scanf("%f", &number[length]) != EOF)
   {
    if(length == 0)length++;
    else if(number[length] == searching_value(number, length))
         {
           length++;
           if(length >= 64)break;           
         }
  }
  
  printf("%d\n%.3f", length, summation(number, length)); 
  return 0;
}

float searching_value(float arr[], int n)
{
  int j;


   for(j = 0;j < n; j++)
   {
     if(arr[n] == arr[j])break;
     else if(n == j + 1) return arr[n];
   } 
 return 0;
}

float summation(float arr[], int n)
{
   int i;
   float part, rest, sum = 0;
   for(i = 0; i < n; i++)
   {
     part = arr[i] - (int)arr[i];
     rest = (int)arr[i]%n;
     sum = sum + rest + part;  
   }
  return sum;
}
