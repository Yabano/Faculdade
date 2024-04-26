#include <stdio.h>
#include <string.h>

int main() {
    char word[21]; // Maximum word length is 20 characters + 1 for null terminator
    
    while (scanf("%s", word) != EOF) {
        if (strlen(word) >= 10) {
            printf("palavrao\n");
        } else {
            printf("palavrinha\n");
        }
    }
    
    return 0;
}