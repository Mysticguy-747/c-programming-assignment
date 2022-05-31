//program 1-to concatenate 2 strings
#include <stdio.h>
int main()
{
    char str1[100], str2[100];
    int i, j;
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);
    i=0;
    while(str1[i] != '\0')
    {
        i++;
    }
    j = 0;
    while(str2[j] != '\0')
    {
        str1[i] = str2[j];
        i++;
        j++;
    }
    str1[i] = '\0';
    printf("Concatenated string = %s", str1);
    return 0;
}

//program 2-to copy a string
#include <stdio.h>
int main()
{
    char text1[100];
    char text2[100];
    int i;
    printf("Enter any string: ");
    gets(text1);
    for(i=0; text1[i]!='\0'; i++)
    {
        text2[i] = text1[i];
    }
    text2[i] = '\0';
    printf("First string = %s\n", text1);
    printf("Second string = %s\n", text2);
    printf("Total characters copied = %d\n", i);
    return 0;
}

//program 3- to find length of a string
#include <stdio.h>
int main()
{
    char a[100];
    printf("Enter any string: ");
    gets(a);
    int i,c=0;
    for(i=0;a[i];i++)
    {
        c++;
    }
    printf("The length is: %d",c);
}

//program 4-to convert lower case string to upper case and vice versa
  #include <stdio.h>
int main()
{
    int i;
    char a[100];
    printf("Enter the string: ");
    gets(a);
    for(i=0;a[i];i++)
    {
        if(a[i]>=65 && a[i]<=90)
        {
            a[i] = a[i]+32;
        }
        else if(a[i]>=97 && a[i]<=122)
        {
            a[i] = a[i]-32;
        }
    }
    printf("%s",a);
    return 0;
}

//program 5-to reverse a string
#include <stdio.h>
int main()
{
    int i,len,j=0;
    char a[100];
    printf("Enter the string: ");
    gets(a);
    char b[100];
    len = strlen(a);
    for(i=len-1;i>=0;i--)
    {
        b[j]=a[i];
        j++;
    }
    printf("Reversed string: %s",b);
    return 0;
}

//program 6-to check if the string is a palindrome 
#include <stdio.h>
int main()
{
    char a[100];
    int len,start,end;
    printf("Enter any string: ");
    gets(a);
    len = 0;
    while(a[len] != '\0') len++;
    start = 0;
    end = len-1;
    

    while(start<=end)
    {
        if(a[start] != a[end])
            break;

        start++;
        end--;
    }

    if(start>=end)
    {
        printf("String is Palindrome.");
    }
    else
    {
        printf("String is Not Palindrome.");
    }

    return 0;
}

//program 7-to count digits, alphabets, and other characters in a given string
#include <stdio.h>
int main()
{
    char a[100];
    int alp=0,dig=0,others=0, i;
    printf("Enter any string : ");
    gets(a);
    for(i=0;a[i];i++)
    {
        if((a[i]>='a' && a[i]<='z') || (a[i]>='A' && a[i]<='Z'))
        {
            alp++;
        }
        else if(a[i]>='0' && a[i]<='9')
        {
            dig++;
        }
        else
        {
            others++;
        }    }

    printf("Alphabets = %d\n", alp);
    printf("Digits = %d\n", dig);
    printf("Special characters = %d", others);

    return 0;
}

//program 8-to count total number of upper case characters
#include <stdio.h>
int main()
{
    char a[100];
    printf("enter the string: ");
    gets(a);
    int i,c;
    for(i=0;a[i];i++)
    {
        if(a[i]>=65&&a[i]<=90)
        {
            c = c+1;
        }
    }
printf("%d",c);
}

//program 9-to count total words in a string
#include <stdio.h>
int main()
{
    char a[100];
    int i,words=1;
    printf("Enter any string: ");
    gets(a);
    for(i=0;a[i];i++)
    {
        if(a[i]==' ' || a[i]=='\n' || a[i]=='\t')
        {
            words++;
        }
    }
    printf("Total number of words = %d", words);

    return 0;
}

//program 10-to count number of vowels and consonants in string
#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    int i, len, v, c;
    printf("Enter any string: ");
    gets(a);
    v = 0;
    c = 0;
    len = strlen(a);

    for(i=0; i<len; i++)
    {
        if((a[i]>='a' && a[i]<='z') || (a[i]>='A' && a[i]<='Z'))
        {
            if(a[i] =='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u' || 
               a[i] =='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U'  )
                v++;
            else
                c++;
        }
    }

    printf("Total number of vowel = %d\n", v);
    printf("Total number of consonant = %d\n", c);

    return 0;
}