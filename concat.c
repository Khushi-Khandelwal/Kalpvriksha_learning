
#include <stdio.h>
#include <string.h>

int main() {
    char string_a[] = "Hello,I am Khushi.";
    char string_b[] = "Hello,I am ram. ";
    char string_concat[100];
    int i, j;
    
    
    for (i = 0; string_a[i] != '\0'; i++) {
        string_concat[i] = string_a[i];
    }
    
    for (j = 0; string_b[j] != '\0'; j++) {
        string_concat[i + j] = string_b[j];
    }
    
     string_concat[i + j] = '\0';
    printf("The concatenate string without strcat\n ");
    printf("%s\n", string_concat);
    
    
    strcat(string_a, string_b);
    printf("The concatenate string with strcat\n");
    printf("%s", string_a);
   
}
