
#include <stdio.h>
#include<stdbool.h>

bool checkSmaller(char cValue)
{
    if((cValue >= 'a') && (cValue <= 'z'))
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

    bRet = checkSmaller(ch);

    if(bRet == true)
    {
        printf("%c is Small letter",ch);
    }
    else
    {
        printf("%c is not small lettter",ch);
    }
    

    return 0;
}
