#include <stdio.h>
#include <stdlib.h>

#define MAX 100

void encrypt(char *c)  // Encrypt message prrogram in C 
{
    char *ptr = c;
    while (*ptr != '\0')
    {
        /* code */
        *ptr = *ptr + 1;
        ptr++;
    }
}

int main()
{
    char str[MAX];
    printf("Enter the message what you interested to Encrypt ?\n");
    gets(str);
    encrypt(str);
    printf("\n");
    printf("\n");
    printf("Your Encrypt message is = %s", str);
    printf("\n");
    printf("\n");
    system("pause");
    return 0;
}