
#include <stdio.h>
#include<stdbool.h>

bool checkCapital(char cValue)
{
    if((cValue >= 'A') && (cValue <= 'Z'))
    {
        return true;
    }
    else
    {
        return false;
    }
}


int main()
{

    char ch = '\0';
    bool bRet = false;

    printf("Enter character : \n");
    scanf("%c",&ch);

    bRet = checkCapital(ch);

    if(bRet == true)
    {
        printf("%c is capital letter",ch);
    }
    else
    {
        printf("%c is not capital lettter",ch);
    }
    

    return 0;
}