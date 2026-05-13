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
    printf("The string is: %s\n", str);

    int count = 0;
    while (str[count] != '\0') count++;
    printf("Number of characters in the string: %d\n", count);

    int visited[100] = {0};  // mark checked characters
    int maxCount = 0;
    char maxChar;

    for (int i = 0; i < count; i++) {

        if (visited[i] == 1)
            continue;  // skip already counted

        int currentCount = 0;

        for (int j = 0; j < count; j++) {
            if (str[i] == str[j]) {
                currentCount++;
                visited[j] = 1; // mark all occurrences
            }
        }

        if (currentCount > maxCount) {
            maxCount = currentCount;
            maxChar = str[i];
        }
    }

    printf("The character that appears the most number of times is: %c\n", maxChar);
    printf("It appears %d times\n", maxCount);

    return 0;
}