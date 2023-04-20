#include <stdio.h>
#include <string.h>

#define AlphabetLength 26

int pangram(char *string) {
    
    int frequecy[AlphabetLength] = {0} ,count = 0 ,lengthOfString = strlen(string);

    for(int i = 0; i < lengthOfString; i++) 
    {
        if(string[i] >= 'a' && string[i] <= 'z') 
        {
            int index = string[i] - 'a';
            if(frequecy[index] == 0)
            {
                count++;
            }
            frequecy[index]++;
        }
        
        else if(string[i] >= 'A' && string[i] <= 'Z') {
            int index = string[i] - 'A';
            if(frequecy[index] == 0) {
                count++;
            }
            frequecy[index]++;
        }
        
       
    }

    return count == AlphabetLength;
}

int main() {
    char string[100];

    printf("Enter a string: ");
    fgets(string, sizeof(string), stdin);
    
    if(pangram(string)) {
        printf("The string is a pangram.\n");
    }
    else {
        printf("The string is not a pangram.\n");
    }

    return 0;
}
