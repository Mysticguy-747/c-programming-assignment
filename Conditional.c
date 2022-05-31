//alphabet_or_not.c
#include <stdio.h>

int main()
{
    char ch;

    printf("Enter any character: ");
    scanf("%c", &ch);

    (ch>='a' && ch<='z') || (ch>='A' && ch<='Z') 
        ? printf("Alphabet")
        : printf("Not alphabet");

    return 0;
}

//max_among_three.c

#include <stdio.h>

int main()
{
    int num1, num2, num3, max;
    printf("Enter three numbers: ");
    scanf("%d%d%d", &num1, &num2, &num3);
    max = (num1 > num2 && num1 > num3) ? num1 :
          (num2 > num3) ? num2 : num3;

    printf("Maximum among the three numbers is: %d",max);

    return 0;
}