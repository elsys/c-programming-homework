#include<stdio.h>

int main()
{
        char letter,c;
	printf("Enter a small letter:");
	scanf("%c",&letter);
        c='z'-(letter-'a');
        printf("Opposite letter is %c",c);
}                                           
       
