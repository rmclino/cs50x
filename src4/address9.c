// Prints a string's chars

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string s = "HI!";
    char a;
    a = &s[1];
    *a = s[1];


    printf("%p\n", s);
    printf("%p\n", &s[0]);
    printf("%p\n", &s[1]);
    printf("%p\n", &s[2]);
    printf("%p\n", &s[3]);
    printf("Agora os strings!\n");
    printf("%c\n", s[0]);
    printf("%c\n", s[1]);
    printf("%c\n", s[2]);
}
