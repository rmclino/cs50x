// Prints address of first char of a string

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string s = "HI!";
    char *p = &s[2];
    printf("%p\n", &p);
    printf("%p\n",&s);
}
