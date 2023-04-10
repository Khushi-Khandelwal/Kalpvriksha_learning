#include <stdio.h>

int main() {
    char str[100];
     int num;
     char ch;
    printf("Enter a string:\n");
    
    printf("USING SCANSET \n");
    scanf("%[^\n]s", str);
    printf("You entered: %s\n", str);
    
    

    printf("USING FGETS\n");
    fgets(str, 100, stdin);
    printf("You entered: %s\n", str);
 
 
    printf("USING GETCHAR\n ");
    printf("Enter a character:\n ");
    ch = getchar();
    printf("You entered: %c\n", ch);
    
   
    printf(" USING SCANF \n");
    printf("Enter a number: \n");
    scanf("%d", &num);
    printf("You entered: %s\n", str);

        // printf("USING GETS ");
    // gets(str);
    // printf("You entered: %s", str);


  

    return 0;
}