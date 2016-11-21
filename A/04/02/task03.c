#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[1001];
    int arr[26] = {0};
    int i = 0;

    fgets(str, 1000, stdin);

    while(str[i] != '\0'){
        if(str[i] >= 'A' && str[i]<= 'Z'){
            str[i] += 32;
        }
        arr[str[i] - 'a']++;
        i++;
    }

    for(i = 0; i < 26; i++){
        if(arr[i] != 0){
            printf("%c - %d\n", (i + 'a'), arr[i] );
        }
    }


    return 0;
}
