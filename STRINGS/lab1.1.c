/*Write a C program to: declare a character array as a string, initialize it with a value, display the
string, count the number of characters in the string, and find and display the character that
appears the most number of times in the string.
Sample input and output:
The string is: programming
Number of characters in the string: 11
The character that appears the most number of times is: r
It appears 2 times
*/
#include <stdio.h>

int main() {
    char str[] = "programming";

    int freq[256] = {0};
    int count = 0;

    while (str[count] != '\0') {
        freq[str[count]]++;
        count++;
    }

    int max = 0;

    // find max frequency
    for (int i = 0; i < 256; i++) {
        if (freq[i] > max) {
            max = freq[i];
        }
    }

    printf("Characters with highest frequency:\n");

    // print all with max frequency
    for (int i = 0; i < count; i++) {
        if (freq[str[i]] == max) {
            printf("%c ", str[i]);
            freq[str[i]] = -1; // avoid duplicate printing
        }
    }

    printf("\nIt appears %d times\n", max);

    return 0;
}