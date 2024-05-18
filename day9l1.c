#include <stdio.h>
#include <string.h>
/*Have the function SearchingChallenge(str) take the str parameter being passed, which will contain only alphabetic characters and spaces, and return the first non-repeating character. For example: if str is "agettkgaeee" then your program should return k. The string will always contain at least one character and there will always be at least one non-repeating 
*/

void SearchingChallenge(char *str) {
    char var = '\0'; // Initialize var to '\0'
    int count[26] = {0};

    // Loop to count occurrences of each character
    for (int i = 0; str[i] != '\0'; i++) {
        count[str[i] - 'a']++;
    }

    // Loop to find the first non-repeating character
    for (int i = 0; str[i] != '\0'; i++) {
        if (count[str[i] - 'a'] == 1) {
            var = str[i];
            break;
        }
    }

    // Print the result
    printf("%c\n", var);
}

int main(void) {
    char str[100];
    fgets(str, sizeof(str), stdin);
    str[strlen(str) - 1] = '\0';

    // Print the original string
    

    // Call the function
    SearchingChallenge(str);
    return 0;
}
