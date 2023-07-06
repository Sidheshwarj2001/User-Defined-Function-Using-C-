#include <stdio.h>

void strCopyX(char *src , char *Dest)
{
    while(*src != '\0')
    {
        *Dest = *src;
        src++;
        Dest++;
    }
    *Dest = '\0';

}
int main()
{
    char Arr[20];
    char Brr[20];

    printf("Enter string : \n");
    scanf("%[^'\n']s", Arr);

    strCopyX(Arr,Brr);

    printf("String after copy is : %s\n",Brr);

    return 0;
}
