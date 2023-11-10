#include<stdio.h>

int main()
{
    int zahl;
    printf("Geben Sie eine positive Zahl ein:");
    scanf("%i", &zahl);
    if(zahl < 0)
    {
        printf("Die Zahl ist negativ.");
    }
    else
    {
        int quotient = zahl;
        int rest;
        while(quotient > 0)
        {
            rest = quotient %2;
            quotient = quotient/2;

            printf("%i", rest);
        }
    }
}