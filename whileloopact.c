#include<stdio.h>

void pattern_a(int base)
{
    int i = 0 , j = 0;
    while (i < base)
    {
        j = 0;
        while (j <= i)
        {
            printf("*");
            j++;
        }
        printf("\n");
        i++;
    }  
}

void pattern_b(int base)
{
    int i = base , j = 0;
    while (i > 0)
    {
        j = 0;
        while (j < i)
        {
            printf("*");
            j++;
        }
        printf("\n");
        i--;
    }
    
}

void pattern_c(int base)
{
    int i = base , j = base;
    while (i > 0)
    {
        j = base;
        while (j > 0)
        {
            if(j <= i)
                printf("*");
            else
                printf(" ");
            j--;
        }
        printf("\n");
        i--;
    }
    
}

void pattern_d(int base)
{
    int i = base , j = 0;
    while (i > 0)
    {
        j = 0;
        while (j <= base)
        {
            if(j >= i)
                printf("*");
            else
                printf(" ");
            j++;
        }
        printf("\n");
        i--;
    }
    
}

int main()
{
    int base = 10;

    printf("PATTERN A:\n");
    pattern_a(base);

    printf("\nPATTERN B:\n");
    pattern_b(base);

    printf("\nPATTERN C:\n");
    pattern_c(base);

    printf("\nPATTERN D:\n");
    pattern_d(base);

    return 0;
}