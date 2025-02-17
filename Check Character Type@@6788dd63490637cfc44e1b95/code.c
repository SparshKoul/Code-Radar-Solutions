// Your code here...
#include <stdio.h>
#include <ctype.h>  // For isdigit() and isalpha()

int main() {
    char ch;

    // Taking user input
    scanf("%c", &ch);

    // Check for vowels (both uppercase and lowercase)
    if ((ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') || 
        (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')) {
        printf("Vowel");
    }
    // Check for consonants (both uppercase and lowercase)
    else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        printf("Consonant");
    }
    // Check for digits
    else if (ch >= '0' && ch <= '9') {
        printf("Digit");
    }
    // If not a letter or digit, it must be a special character
    else {
        printf("Special Character");
    }

    return 0;
}
