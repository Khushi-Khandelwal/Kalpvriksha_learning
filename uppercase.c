#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hi, I am Khushi.";
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
        i++;
    }
    printf("Uppercase string: %s\n", str);
    
    int j=0;
       while (str[j] != '\0') {
        if (str[j] >= 'A' && str[j] <= 'Z') {
            str[j] = str[j] + 32;
        }
        j++;
    }
    printf("Lowercase string: %s\n", str);
    return 0;
}