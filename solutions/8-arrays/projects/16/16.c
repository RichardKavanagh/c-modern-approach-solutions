#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define ALPHABET 26

int main(void) {

    char ch;
    bool difference;
    int letters_used[ALPHABET] = { 0 };

    printf("%s", "Enter first word: ");
    while ((ch = getchar()) != '\n') {
        if (isalpha(ch)) {
            letters_used[tolower(ch) - 'a']++;
        }
    }

    printf("%s", "Enter second word: ");
    while ((ch = getchar()) != '\n') {
        if ((isalpha(ch))) {
            letters_used[tolower(ch) - 'a']--;
        }
    }

    difference = false;
    for (int i = 0; i < ALPHABET; ++i) {
        if (letters_used[i] != 0) {
            difference = true;
            break;          
        }
    }

    if (difference) {
        printf("%s\n", "The words are not anagrams.");
    } else {
        printf("%s\n", "The words are anagrams.");
    }
    return 0;
}
