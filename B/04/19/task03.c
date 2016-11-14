#include <stdio.h>
#include <string.h>
#define length 1000

void sort_string(char*, int);
void convert_to_lowercase(char*, int);

int main()
{ 
  int n, i, j, count, step = 1;
  char arr[length];

  fgets(arr, length, stdin);
  n = strlen(arr);

  convert_to_lowercase(arr ,n);
  sort_string(arr, n);


  for(i = 0; i <= n; i += step)
  {
   
    count = 0;
    for(j = 0; j <  n; j++)
    {
      if(arr[j] >= 'a' && arr[j] <= 'z')
      {
        if(arr[i] == arr[j])
        count++;
      }
    }step = 1;
   if(arr[i] >= 'a' && arr[i] <= 'z')
   {
    printf("%c - %d\n", arr[i], count);
    step += (count - 1);
   }
  }
  return 0;
}

void sort_string(char arr[], int len)
{
  int i, j;
  char swap;
    
  for(i = 0; i < len - 1; i++)
  {
    for(j = 0; j < len - i - 1; j++)
    {
      if(arr[j] > arr[j+1])
      {
	swap = arr[j];
	arr[j] = arr[j+1];
	arr[j+1] = swap;
      }
    }
  }
}

void convert_to_lowercase(char arr[], int len)
{
 int i;
 for(i = 0; i < len; i++)
 {
   if(arr[i] >= 'A' && arr[i] <= 'Z')
   arr[i] += 32;   
 }
}
