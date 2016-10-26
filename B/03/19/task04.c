#include <stdio.h>

int main()
{
 int i, k, j;
 int tree_lenght;

 scanf("%d", &tree_lenght);
 //
 if(tree_lenght > 1)
 printf("%d\n", (tree_lenght - 2)*(tree_lenght - 2));
 else printf("0\n");

 for(i = 0; i < tree_lenght; i++)
 {
  for(k = tree_lenght - i; k > 0; k--)
  {
   printf(" ");
  }
   printf("*");
   for(j = 0; j < (i*2)-1; j++)
   {
    if(i == (tree_lenght - 1))printf("*");
    else  printf("#");
   }
   if(i != 0)printf("*");
   printf("\n");
 }

 return 0;
}
