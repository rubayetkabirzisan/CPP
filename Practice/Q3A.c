#include <stdio.h>
#include <string.h>

int isPalindrome(const char *str,int length)
{
    int i,j;
    for(i=0,j=length-1;i<j;i++,j--)
    {
        if(str[i]!=str[j])
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    char str[100];
    int length;

    printf("Enter the string: ");
    gets(str);

    length = 0;
    while(str[length]!='\0')
    {
        length++;
    }

    if(length>0&&str[length-1]=='\n')
    {
        str[length-1]='\0';
        length--;
    }

    if(isPalindrome(str,length))
    {
        printf("The string is a palindrome.\n");
    }
    else
    {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}
