//cube.c
#include <stdio.h>
double cube(double var);

int main()
{
    int var;
    double c;
    printf("Enter any number: ");
    scanf("%d", &var);
    
    c = cube(var);

    printf("Cube of %d is %.2f", var, c); 
    
    return 0;
}
double cube(double var)
{
    return (var*var*var);
}

//evenodd.c

#include <stdio.h>

int even(int num)
{
    return !(num & 1);
}
int main()
{
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);
    if(even(num))
    {
        printf("The number is even.");
    }
    else
    {
        printf("The number is odd.");
    }
    
    return 0;
}

//list_all_prim_number.c
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

#include <stdio.h>

int isPrime(int var);
void prime(int start, int end);
int main()
{
    int start, end;
    printf("Enter the start and end to list primes: ");
    scanf("%d%d", &start, &end);
    prime(start,end);
    
    return 0;
}
void prime(int start, int end)
{
    printf("All prime number between %d to %d are: ", start,end);
    
    while(start <= end)
    {
        if(isPrime(end))
        {
            printf("%d, ", end);
        }
        
        end++;
    }
}
int isPrime(int num)   
{  
    int i;  
    for(i=2; i<=num/2; i++)    
    {     
        if(num % i == 0)    
        {  
            return 0;  
        }    
    }   
      
    return 1;   
}

//list_all_strong_number.c

#include <stdio.h>

/* Function declaration */
long long fact(int num);
void strongnumber(int start, int end);


int main()
{
    int start, end;
    printf("Enter the lower limit to find strong number: ");
    scanf("%d", &start);
    printf("Enter the upper limit to find strong number: ");
    scanf("%d", &end);
    printf("All strong numbers between %d to %d are: \n", start, end);
    strongnumber(start, end);
    
    return 0;
}

void strongnumber(int start, int end)
{
    long long sum;
    int num;
    while(start != end)
    {
        sum = 0;
        num = start;
        while(num != 0)
        {
            sum += fact(num % 10);
            num /= 10; 
        }
        if(start == sum)
        {
            printf("%d, ", start);
        }
        
        start++;
    }
}

long long fact(int num)
{
    if(num == 0)
        return 1;
    else
        return (num * fact(num-1));
}

//max_min.c

#include <stdio.h>
int max(int num1, int num2);
int min(int num1, int num2);
int main() 
{
    int num1, num2, maximum, minimum;
    printf("Enter any two numbers: ");
    scanf("%d%d", &num1, &num2);
    
    maximum = max(num1, num2);  
    minimum = min(num1, num2);  
    printf("\nMaximum = %d\n", maximum);
    printf("Minimum = %d", minimum);
    
    return 0;
}
int max(int num1, int num2)
{
    return (num1 > num2 ) ? num1 : num2;
}

int min(int num1, int num2) 
{
    return (num1 > num2 ) ? num2 : num1;
}