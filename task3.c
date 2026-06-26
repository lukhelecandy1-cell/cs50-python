#include <cs50.h>
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char c = 'B';
    if (isupper(c))
    {
        printf("it is uppercase\n");
    }
    else
    {
        printf("it is lowercase\n");
    }
}
