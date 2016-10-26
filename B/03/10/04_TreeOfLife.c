



#include <stdio.h>

int main() {

  int rows = 1, hash = 0, spaces = 0, number = 0;

  scanf("%d", &number);
  number -= 1;
  int stars = number, end = 0 ;


  for (rows = 1; rows <= number * 2; rows += 2) {
    if (rows > 2) {
      end = end + (rows - 2);
    }
  }
  printf("%d\n", end );

  for (rows = 1; rows <= number * 2; rows += 2) {

    for (spaces = 1; spaces <= stars; spaces++) {
      printf(" ");
    }
    if (hash > 1) {
      printf("*");
    }

    for (hash = 2; hash < rows; hash++) {
      printf("#");

    }

    printf("*");
    printf("\n");
    stars -= 1;
  }

  for (int i = 0; i < rows; ++i)
  {
    printf("*");
  }

  return 0;
}