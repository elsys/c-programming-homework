#include<stdio.h>
int main()
{
        char input,output;
        scanf("%c",&input);
        output = 'z'- (input - 'a');
        printf("%c",output);
        return 0;
}
