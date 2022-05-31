// PROGRAM-1:-C program to find sum of digits of a number
#include <stdio.h>

int main()
{
    int num, sum=0;
    printf("Enter any number to find sum of its digit: ");
    scanf("%d", &num);
    while(num!=0)
    {
        sum += num % 10;
        num = num / 10;
    }

    printf("Sum of digits = %d", sum);

    return 0;
}

// PROGRAM-2 :-C program to find sum of even numbers between 1 to n


#include <stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter last limit: ");
    scanf("%d", &n);

    for(i=2; i<=n; i+=2)
    {
        sum =sum+i;
    }
    printf("Sum of all even number between 1 to %d = %d", n, sum);
    return 0;
}
// PROGRAM-3:-C program to count frequency of digits in an integer
#include <stdio.h>
/* Constant */

int main()
{
    long long num, n;
    int i, lastDigit;
    int freq[10];
    printf("Enter any number: ");
    scanf("%lld", &num);
    for(i=0; i<10; i++)
    {
        freq[i] = 0;
    }
    n = num; 
    while(n != 0)
    {
        lastDigit = n % 10;
        n /= 10;
        freq[lastDigit]++;
    }
    printf("Frequency of each digit in %lld is: \n", num);
    for(i=0; i<10; i++)
    {
        printf("Frequency of %d = %d\n", i, freq[i]);
    }

    return 0;
}

// PROGRAM-4:-C program to find all factors of a number
#include <stdio.h>
int main()
{
    int i, num;
    printf("Enter any number to find its factor: ");
    scanf("%d", &num);
    printf("All factors of %d are: \n", num);
    for(i=1; i<=num; i++)
    {
        if(num % i == 0)
        {
            printf("%d, ",i);
        }
    }

    return 0;
}

// PROGRAM-5:-C program to print fibonacci series upto n terms

#include <stdio.h>
int main()
{
    int a, b, c, i, terms;
    printf("Enter number of terms: ");
    scanf("%d", &terms);
    a = 0;
    b = 1;
    c = 0;

    printf("Fibonacci terms: \n");
    for(i=1; i<=terms; i++)
    {
        printf("%d, ", c);

        a = b;     
        b = c;     
        c = a + b; 
    }

    return 0;
}

// PROGRAM:6- C program to find sum of prime numbers between 1 to n.....

#include <stdio.h>

int main()
{
    int i, j, end, isPrime, sum=0;
    printf("Find sum of all prime between 1 to : ");
    scanf("%d", &end);
    for(i=2; i<=end; i++)
    {
        isPrime = 1;
        for(j=2; j<=i/2 ;j++)
        {
            if(i%j==0)
            {
                isPrime = 0;
                break;
            }
        }
        if(isPrime==1)
        {
            sum += i;
        }
    }

    printf("Sum of all prime numbers between 1 to %d = %d", end, sum);

    return 0;
}

// PROGRAM:-7:-C program to find the sum of 1 to 10 using the do-while loop..

#include<stdio.h>
#include<conio.h>

void main()
{
    int i = 1,a = 0;

    do
    {
        a = a + i;
        i++;
    }
    while(i <= 10);

    printf("Sum of 1 to 10 is %d",a);
    printf();