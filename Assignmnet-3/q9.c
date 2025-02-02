// #include <stdio.h>
// int main()
// {
//     char str[] = "Ayush kumar";
//     printf("string \%s  is", str);
//     for (int i = 0; str[i] != '\0'; i++)
//     {
//         int count = 0;
//         for (int j = 0; j < str[j] != '\0'; j++)
//         {
//             if (str[i] == str[j])
//             {
//                 count++;
//             }
//         }
//         printf(", \%c -\%d", str[i], count);
//     }

//     return 0;
// }



#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Ayush";
    int length = strlen(str);

    printf("The count of each character in the string \"%s\" is:\n", str);

    for (int i = 0; i < length; i++) {
        int count = 0;
        int isCounted = 0;

        // Check if the character has already been counted
        for (int k = 0; k < i; k++) {
            if (str[i] == str[k]) {
                isCounted = 1;
                break;
            }
        }

        // If not already counted, count occurrences
        if (!isCounted) {
            for (int j = 0; j < length; j++) {
                if (str[i] == str[j]) {
                    count++;
                }
            }
            printf("%c-%d, ", str[i], count);
        }
    }

    printf("\n");
    return 0;
}
