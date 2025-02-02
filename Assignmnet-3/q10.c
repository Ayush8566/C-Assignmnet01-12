#include <stdio.h>
#include <string.h>

int main() {
    char binary[]="1111"; // To handle up to 64-bit binary numbers
    int decimal = 0;
    int length;

    // Input binary number
    // printf("Enter a binary number: ");
    // scanf("%s", binary);

    length = strlen(binary);

    // Convert binary to decimal iteratively
    for (int i = 0; i < length; i++) {
        decimal = decimal * 2 + (binary[i] - '0');
    }

    // Convert decimal to hexadecimal and print
    printf("Hexadecimal: %X\n", decimal);

    return 0;
}
