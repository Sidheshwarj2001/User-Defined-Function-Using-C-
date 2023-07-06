#include <stdio.h>

void strCopyX(char *src , char *Dest,int iLength)
{
    while((*src != '\0') && (iLength != 0))
    {
        *Dest = *src;
        src++;
        Dest++;
        iLength--;
    }
    *Dest = '\0';

}
int main()
{
    char Arr[20];
    char Brr[20];
    int iNo = 0;


    printf("Enter string : \n");
    scanf("%[^'\n']s", Arr);

    printf("Enter number of charcter that you want to copy : \n");
    scanf("%d",&iNo);

    strCopyX(Arr,Brr,iNo);

    printf("String after copy is : %s\n",Brr);

    return 0;
}
