#include <stdio.h>

void strcpyrevX(char *src, char *Dest)
{
    int iLength = 0;

    while(*src != '\0')
    {
        src++;
        iLength++;
    }

    src--;

    for(int iCnt = iLength ;iLength != 0;iLength--)
    {
        *Dest = *src;
        Dest++;
        src--;
    }
    *Dest = '\0';
}
int main()
{
    char Arr[20];
    char Brr[20];

    printf("Enter string : \n");
    scanf("%[^'\n']s", Arr);

    strcpyrevX(Arr, Brr);

    printf("String after copy is : %s\n", Brr);

    return 0;
}
