#include <stdio.h>
#include <string.h>

int main() {
    char string[100];
    int iterator1, iterator2, length;
    int palindrome = 1;

    printf("Enter a string: ");
    scanf("%s", string);

    length = strlen(string);

    for(iterator1 = 0, iterator2= length - 1; iterator1 < length / 2; iterator1++, iterator2--) {
        if(string[iterator1] != string[iterator2]) {
            palindrome = 0;
            break;
        }
    }

    if(palindrome) {
        printf("The string is a palindrome.\n");
    }
    else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}
