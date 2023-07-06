#include <stdio.h>
/*
    1. travel till end of dest
    2.copy the data from scr to dest
    3. write '\0' at the end of string
*/
void strCatX(char *src, char *Dest, int iLength)
{
    // 1. travel till end of dest

    while (*Dest != '\0')
    {
        Dest++;
    }

    // 2.copy the data from scr to dest

    while ((*src != '\0') && (iLength != 0))
    {
        *Dest = *src;
        Dest++;
        src++;

        iLength--;
    }

    // 3. Write '\0' at end of dest

    *Dest = '\0';
}
int main()
{
    char Arr[20];
    char Brr[20] = "Demo";
    int iValue = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s", Arr);

    printf("Enter how many character you want to copy : \n");
    scanf("%d", &iValue);

    strCatX(Arr, Brr, iValue);

    printf("String after copy is : %s\n", Brr);

    return 0;
}