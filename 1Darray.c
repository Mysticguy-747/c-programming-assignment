//Program 1- to copy elements of one array to another array
#include <stdio.h>
int main()
{
    int n;
    printf("enter number of elements in array:\n");
    scanf("%d",&n);
    int array1[n];
    int array2[n];
    for(int i=0;i<n;i++)
    {
        printf("enter element %d:\n",i+1);
        scanf("%d",&array1[i]);
    }
    printf("array2:");
    for(int i=0;i<n;i++)
    {
        array2[i]=array1[i];
    }
    for(int i=0;i<n;i++)
    {
        printf("%d",array2[i]);
    }

    return 0;
}

//Program 2-to count negative elements in an array
#include <stdio.h>
#include <math.h>
int main()
{
    int n,negative=0;
    printf("enter number of elements in array:\n");
    scanf("%d",&n);
    int array1[n];
    for(int i=0;i<n;i++)
    {
        printf("enter element %d:\n",i+1);
        scanf("%d",&array1[i]);
    }
    printf("negative elements of array:");
    for( int j=0;j<n;j++)
    {
        if(array1[j]<0)
        negative+=1;

    }
    printf("%d",negative);
    return 0;
}

//Program3-to delete elements from an array
#include<stdio.h>
int main()
{
int n,pos=5;
    printf("enter number of elements in array:\n");
    scanf("%d",&n);
    int array1[n];
    for(int i=0;i<n;i++)
    {
        printf("enter element %d:\n",i+1);
        scanf("%d",&array1[i]);
    }
    
    for(int i=pos-1;i<=n-2;i++)
    {
        array1[i]=array1[i+1];
    }
    n--;
    for(int i=0;i<n;i++)
    {
        printf("%d",array1[i]);
    }
    return 0;

}

//Program 4-to find even and odd elements from an array
#include <stdio.h>
int main()
{
    int n;
    printf("enter number of elements in array:\n");
    scanf("%d",&n);
    int array1[n],even=0,odd=0;
    for(int i=0;i<n;i++)
    {
        printf("enter element %d:\n",i+1);
        scanf("%d",&array1[i]);
    }
    for(int j=0;j<n;j++)
    {
        if(array1[j]%2==0)
        { even+=1; }
        if(array1[j]%2!=0)
        { odd+=1; }
    }
    printf("even elements=%d\n",even);
    printf("odd elements=%d",odd);
    return 0;

}

//Program 5-to find frequency of an elements in an array
#include <stdio.h>
int main()
{
    int n,max;
    printf("enter number of elements in array:\n");
    scanf("%d",&n);
    int array1[n]; 
    int array2[100]={0};
    for(int i=0;i<n;i++)
    {
        printf("enter element %d:\n",i+1);
        scanf("%d",&array1[i]);
    }
    max=array1[0];
    for(int i=1;i<n;i++)
    {
        if(max<array1[i])
        { max=array1[i]; }
    }
    max++;
  
    
    for(int i=0;i<n;i++)
    {
        array2[array1[i]]++;
    }
    for(int i=0;i<max;i++)
    {
        if(array2[i]>0)
        { printf("%d= %d times\n",i,array2[i]); }
    }
    return 0;
}