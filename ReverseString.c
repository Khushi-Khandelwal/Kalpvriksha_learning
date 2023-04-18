//reversed string ways
1.
#include <stdio.h>
#include <string.h>

int main() {
   char str[] = "Hi i am Khushi";
   int len = strlen(str);
   
   for (int i = 0; i < len / 2; i++) {
      char temp = str[i];
      str[i] = str[len - i - 1];
      str[len - i - 1] = temp;
   }

   printf("Reversed string (Method 1): %s\n", str);
   
   return 0;
}


2.
#include <stdio.h>
#include <string.h>

int main() {
   char str[] = "Hi i am Khushi ";
   int len = strlen(str);
   int start = 0, end = len - 1;

   while (start < end) {
      char temp = str[start];
      str[start] = str[end];
      str[end] = temp;
      start++;
      end--;
   }

   printf("Reversed string (Method 2): %s\n", str);
   
   return 0;
}

3.
#include <stdio.h>
#include <string.h>

void reverse(char* str, int start, int end) {
   if (start >= end) {
      return;
   }

   char temp = str[start];
   str[start] = str[end];
   str[end] = temp;

   reverse(str, start + 1, end - 1);
}

int main() {
   char str[] = "Hi i am Khushi";
   int len = strlen(str);
   
   reverse(str, 0, len - 1);

   printf("Reversed string (Method 3): %s\n", str);
   
   return 0;
}


