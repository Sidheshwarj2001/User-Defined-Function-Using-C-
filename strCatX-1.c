#include <stdio.h>
/*
    1. travel till end of dest
    2.copy the data from scr to dest
    3. write '\0' at the end of string
*/
void strCatX(char *src, char *Dest)
{
    // 1. travel till end of dest

    while (*Dest != '\0')
    {
        Dest++;
    }
    *Dest = ' ';
    Dest++;
    // 2.copy the data from scr to dest

    while (*src != '\0')
    {
        *Dest = *src;
        Dest++;
        src++;
    }
    *Dest = '\0';
}
int main()
{
    char Arr[20];
    char Brr[20] = "Demo";

    printf("Enter string : \n");
    scanf("%[^'\n']s", Arr);

    strCatX(Arr, Brr);

    printf("String after copy is : %s\n", Brr);

    return 0;
}
