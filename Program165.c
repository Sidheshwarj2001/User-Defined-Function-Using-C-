#include<stdio.h>

// vowels : a e i o u /  A E I O U
int CountVowels(char *str)
{
    int iCount = 0;
    
    while(*str != '\0')
    {
        if((*str == 'i') || (*str =='I') || (*str == 'e') || (*str =='E') || (*str == 'a') || (*str =='A') || (*str == 'o') || (*str =='O') || (*str == 'U') || (*str =='u') )
        {
            iCount++;
        }
        str++;
    }
    return iCount;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter String \n");
    scanf("%[^'\n']s",Arr);

    iRet = CountVowels(Arr);

    printf("cout  of Digit are : %d\n",iRet);
    
    return 0;
}