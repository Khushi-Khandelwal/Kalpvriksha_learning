
#include <stdio.h>
#include<string.h>

int main() {
    char str1[] = "Hello";
    char str2[] = "Hello";
    int i = 0, flag = 0;
    
    printf("String comparison without strcmp\n");
    
    while (str1[i] != '\0' || str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            flag = 1;
            break;
        }
        i++;
    }
    
    if (flag == 0) {
        printf("The strings are equal\n");
    } else {
        printf("The strings are not equal\n");
    }
    
    
    printf("String comparison with strcmp\n");
    
     int result = strcmp(str1, str2);
    if (result == 0) {
        printf("The strings are equal.");
    } else if (result > 0) {
        printf("The first string is greater than the second string\n");
    } else {
        printf("The second string is greater than the first string\n");
    }
    return 0;
}