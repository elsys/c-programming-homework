

    #include <stdio.h>
     
    int main() {
        char string[1000];
        fgets(string, 1000, stdin);
     
        int ascii_letters[26]={0};
     
        int i;
        for(i = 0; string[i] != '\n'; i++) {
            int ascii_letter = string[i];
     
            if((ascii_letter >= 'a' && ascii_letter <= 'z') || (ascii_letter >= 'A' && ascii_letter <= 'Z')) {
                if(ascii_letter >= 'A' && ascii_letter <= 'Z') {
                    ascii_letter += 32;
                }
     
                int letter_num = ascii_letter - 'a';
                ascii_letters[letter_num]++;
            }
        }
     
        for(i = 0; i < 26; i++) {
            if(ascii_letters[i] > 0) {
                char ascii_letter = i + 'a';
                printf("%c - %d\n", ascii_letter, ascii_letters[i]);
            }
        }
     
        return 0;
    }

