//do while loop executes atleast once

#include <stdio.h>

int main() {
    int i = 0;  // Declare and initialize the variable

    do {
        printf("%d\n", i);
        i++;  // Increment the variable
    } while (i < 10);  // Semicolon is required at the end of while

    return 0;
}
