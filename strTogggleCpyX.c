#include <stdio.h>

void strTogggleCpyX(char *src, char *Dest)
{
    int Gap = 'a' - 'A';
    while (*src != '\0')
    {
        if ((*src >= 'A') && (*src <= 'Z'))
        {
            *Dest = *src + Gap;
        }

        else if ((*src >= 'a') && (*src <= 'z'))
        {
            *Dest = *src - Gap;
        }
        else
        {
            *Dest = *src; //to add any other charcter like whitespace or etc
        }
        Dest++; // to remove the whitespace or garbages
        src++;
    }
    *Dest = '\0';
}
int main()
{
    char Arr[20];
    char Brr[20];

    printf("Enter string : \n");
    scanf("%[^'\n']s", Arr);

    strTogggleCpyX(Arr, Brr);

    printf("String after copy is : %s\n", Brr);

    return 0;
}
