#include <stdio.h>
#include <string.h>

int main() {
    char buffer[10];  // Declare a buffer of size 10

    // Use strcpy to copy a larger string into the buffer (unsafe)
    strcpy(buffer, "This is a string longer than the buffer size!");

    printf("Buffer contents: %s\n", buffer);  // This will cause undefined behavior
    return 0;
}
