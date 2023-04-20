#include <stdio.h>

void decimalToRoman(int number) {
    int i;
    int decimalNumber[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    char *romanNumber[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    for(i = 0; number > 0; i++) {
        while(number >= decimalNumber[i]) {
            printf("%s", romanNumber[i]);
            number -= decimalNumber[i];
        }
    }
}

int main() {
    
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("In Roman number: ");
    decimalToRoman(number);
}
