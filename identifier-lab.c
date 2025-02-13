#include<stdio.h>
#include<ctype.h>
#include<string.h>

int isValidIdentifier(const char *str)
{
    if(str[0]== '\0')
        return 0;

    if(!isalpha(str[0]) && str[0] !='_')
        return 0;

    for (int i=1; str[i] != '\0';i++)
    {
        if(!isalnum(str[i]) && str[i] !='_')
            return 0;
    }
    return 1;
}

int main()
{
    char str[100];

    printf("\n\n\=====program to check the Identifier is Valid or Not valid= ");

    printf("\n\n Enter string: ");
    scanf("%s", str);

    if (isValidIdentifier(str))
        printf("\"%s\" is valid identifier.\n",str);
    else
        printf("\"%s\" is Not valid identifier.\n", str);

    return 0;
}

