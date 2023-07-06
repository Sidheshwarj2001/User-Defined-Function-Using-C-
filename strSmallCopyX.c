#include <stdio.h>

void strSmallCopyX(char *src, char *Dest)
{
    while (*src != '\0')
    {
        if ((*src >= 'a') && (*src <= 'z'))
        {
            *Dest = *src;
            Dest++; // to remove the whitespace or garbages
        }

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

    strSmallCopyX(Arr, Brr);

    printf("String after copy is : %s\n", Brr);

    return 0;
}
