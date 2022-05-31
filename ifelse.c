//write a program to check your age is eligible for voting or not
#include <stdio.h>
int main(){
    int age;
    printf("Enter your age:");
    scanf("%d",&age);
    printf("You have entered %d as your age\n",age);
    if(age<18){
        printf("You cannot vote");
    }
    else{
        printf("You can Vote");
    }

}

//write a program to check given year is leap year or not

#include<stdio.h> 
int main() 
{ 
    int year;
	printf("Enter the year:");
    scanf("%d",&year);
    if(year%400==0 && year%100!=0)
    {
        printf("%d is a Leap year",year);
    }
    else if(year%4==0)
    {
        printf("%d is a Leap year",year);
    }
    else
    {
        printf("%d is not a Leap year",year);
    }

} 

//write a program to check max of 3 no
#include<stdio.h> 
int main() 
{ 
    int a,b,c;
	printf("Enter First no:");
    scanf("%d",&a);
    printf("Enter Second no:");
    scanf("%d",&b);
    printf("Enter Third no:");
    scanf("%d",&c);
    if(a>b && a>c)
    {
        printf("%d is Greatest",a);
    }
    else if(b>a && b>c)
    {
        printf("%d is Greatest",b);
    }
    else
    {
        printf("%d is Greatest",c);
    }

} 



// C program to check positive negative or zero using simple if statement


#include <stdio.h>

int main()
{
    int num;
    
    printf("Enter any number: ");
    scanf("%d", &num);
    

    if(num > 0)
    {
        printf("Number is POSITIVE");
    }
    if(num < 0)
    {
        printf("Number is NEGATIVE");
    }
    if(num == 0)
    {
        printf("Number is ZERO");
    }

    return 0;
}


// C program to check divisibility of any number


#include <stdio.h>

int main()
{
    int num;

    printf("Enter any number: ");
    scanf("%d", &num);

    if((num % 5 == 0) && (num % 11 == 0))
    {
        printf("Number is divisible by 5 and 11");
    }
    else
    {
        printf("Number is not divisible by 5 and 11");
    }

    return 0;
}