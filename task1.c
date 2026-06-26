#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string name = "message";
    int length = strlen(name);

    for (int i = 0; i < length; i++)
    {
        printf("%c\n", name[i]);
    }
}
