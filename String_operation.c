#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
// Declare strings to store user input
 char str1[50];
 char str2[50];
 // Prompt the user to enter the first string
 printf("Enter the first string (up to 49 characters): ");
 scanf("%49s", str1);
 // Prompt the user to enter the second string
 printf("Enter the second string (up to 49 characters): ");
 scanf("%49s", str2);
 // Declare strings for various operations
 char concatStr[100];
 char copyStr[50];
 char reversedStr[50];
 char substring[20];
 char upperStr[50];
 char lowerStr[50];
 // String length
 printf("\n1. Length of '%s': %lu\n", str1, strlen(str1));
 // String Concatenation
 strcpy(concatStr, str1);
 strcat(concatStr, " ");
 strcat(concatStr, str2);
 printf("2. Concatenated String: %s\n", concatStr);

 // String Copy
 strcpy(copyStr, str1);
 printf("3. Copied String: %s\n", copyStr);

 // String Comparison
 if (strcmp(str1, str2) == 0)
 printf("4. The entered strings are equal.\n");
 else
 printf("4. The entered strings are not equal.\n");

 // String Reversal
 strcpy(reversedStr, str1);
 strrev(reversedStr);
 printf("5. Reversed '%s': %s\n", str1, reversedStr);

 // String Substring
 strncpy(substring, str1 + 1, 3);
 substring[3] = '\0';
 printf("6. Substring of '%s': %s\n", str1, substring);

 // String to uppercase
 strcpy(upperStr, str1);
 for (int i = 0; i < strlen(upperStr); i++)
 upperStr[i] = toupper(upperStr[i]);
 printf("7. Uppercase '%s': %s\n", str1, upperStr);

 // String to Lowercase
 strcpy(lowerStr, str2);
 for (int i = 0; i < strlen(lowerStr); i++)
 upperStr[i] = tolower(lowerStr[i]);
 printf("8. Lowercase '%s': %s\n", str2, lowerStr);

 return 0;
 }