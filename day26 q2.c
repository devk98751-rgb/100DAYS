/*  Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*

*/
#include <stdio.h>

int main() {
    int i, j;
    
    // Increasing part
    for (i = 1; i <= 5; i+=2) {
        for (j = 1; j <= i; j+=2) {
            printf("*\n");
        }
        printf("\n");  // blank line after each group
    }
    
    // Decreasing part
    for (i = 4; i >= 1; i-=2) {
        for (j = 1; j <= i; j+=2) {
            printf("*\n");
        }
        printf("\n");  // blank line after each group
    }
    
    return 0;
}
