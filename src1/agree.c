// Logical operators

//#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt user to agree
    //get_char("Do you agree? ");
    char c =  'y'; 

    // Check whether agreed
    if (c == 'Y' || c == 'y')
    {
        printf("Agreed.\n");
    }
    else if (c == 'N' || c == 'n')
    {
        printf("Not agreed.\n");
    }
}
