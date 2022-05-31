// Program-1: Program to swap two numbers using call by reference  ......
#include <stdio.h>
void swap(int *num1, int *num2);

int main()
{
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    swap(&num1, &num2);
    return 0;
}
void swap(int *num1, int *num2)
{
    int temp;
    temp = *num1;
    *num1= *num2;
    *num2= temp;

    printf("After swapping in swap function n");
    printf("Value of num1 = %d \n", *num1);
    printf("Value of num2 = %d \n\n", *num2);
}


// PROGRAM-2:- Program to find length of string using pointer........
	
#include<stdio.h>
int string_ln(char*);
void main() {
   char str[20];
   int length;
   printf("\nEnter any string : ");
   gets(str);
   length = string_ln(str);
   printf("The length of the given string %s is : %d", str, length);
}
int string_ln(char*p) 
{
   int count = 0;
   while (*p != '\0') {
      count++;
      p++;
   }
   return count;
}

// PROGRAM-3:- C Program to Add Two Numbers Using Pointer !...

#include<stdio.h>
 
int main() {
   int *ptr1, *ptr2;
   int num;
 
   printf("\nEnter two numbers : ");
   scanf("%d %d", ptr1, ptr2);
 
   num = *ptr1 + *ptr2;
 
   printf("Sum = %d", num);
   return (0);
}

//PROGRAM-4:-C Program to Compute sum of the array elements using pointers !.....
#include<stdio.h>
#include<conio.h>
void main() {
   int numArray[10];
   int i, sum = 0;
   int *ptr;
 
   printf("\nEnter 10 elements : ");
 
   for (i = 0; i < 10; i++)
      scanf("%d", &numArray[i]);
 
   ptr = numArray;
 
   for (i = 0; i < 10; i++) {
      sum = sum + *ptr;
      ptr++;
   }
 
   printf("The sum of array elements : %d", sum);
}

// PROGRAM-5:- Program to concatenate two strings using pointer
#include <stdio.h>
int main()
{
    char str1[100], str2[100];
    char * s1 = str1;
    char * s2 = str2;
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);
    while(*(++s1));
    while(*(s1++) = *(s2++));

    printf("Concatenated string = %s", str1);

    return 0;
}