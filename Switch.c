//Write a C program to print name of year name using switch case.
#include <stdio.h>
int main(){
    int mon;
    printf("Enter a Month:");
    scanf("%d",&mon);
    switch(mon)
    {
        case 1: printf("Its January");
        break;
        case 2: printf("Its February");
        break;
        case 3: printf("Its March");
        break;
        case 4: printf("Its April");
        break;
        case 5: printf("Its May");
        break;
        case 6: printf("Its June");
        break;
        case 7: printf("Its July");
        break;
        case 8: printf("Its August");
        break;
        case 9: printf("Its September");
        break;
        case 10: printf("Its October");
        break;
        case 11: printf("Its November");
        break;
        case 12: printf("Its December");
        break;
        default: printf("Not a valid choice");
    }
}

//Write a C program print total number of days in a month using switch case.
#include <stdio.h>

int main()
{
    int month;

    /* Input month number from user */
    printf("Enter month number(1-12): ");
    scanf("%d", &month);

    switch(month)
    {
        case 1: 
            printf("31 days");
            break;
        case 2: 
            printf("28/29 days");
            break;
        case 3: 
            printf("31 days");
            break;
        case 4: 
            printf("30 days");
            break;
        case 5: 
            printf("31 days");
            break;
        case 6: 
            printf("30 days");
            break;
        case 7: 
            printf("31 days");
            break;
        case 8: 
            printf("31 days");
            break;
        case 9: 
            printf("30 days");
            break;
        case 10: 
            printf("31 days");
            break;
        case 11: 
            printf("30 days");
            break;
        case 12: 
            printf("31 days");
            break;
        default: 
            printf("Invalid input! Please enter month number between 1-12");

    }

    return 0;
}

//C program to check vowel or consonant using switch case
#include <stdio.h>

int main()
{
    char ch;

    /* Input an alphabet from user */
    printf("Enter any alphabet: ");
    scanf("%c", &ch);

    /* Switch value of ch */
    switch(ch)
    {
        case 'a': 
            printf("Vowel");
            break;
        case 'e': 
            printf("Vowel");
            break;
        case 'i': 
            printf("Vowel");
            break;
        case 'o': 
            printf("Vowel");
            break;
        case 'u': 
            printf("Vowel");
            break;
        case 'A': 
            printf("Vowel");
            break;
        case 'E': 
            printf("Vowel");
            break;
        case 'I': 
            printf("Vowel");
            break;
        case 'O': 
            printf("Vowel");
            break;
        case 'U': 
            printf("Vowel");
            break;
        default: 
            printf("Consonant");
    }

    return 0;
}