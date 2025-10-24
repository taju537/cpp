#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int vowels = 0, consonants = 0;

    // Get string input from user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Loop through the string
    for(int i = 0; str[i] != '\0'; i++) {
        char ch = toupper(str[i]); // Convert to lowercase for easy comparison

        if(ch >= 'A' && ch <= 'Z') { // Check if it's a letter
            if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    // Print results
    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);

    return 0;
}
