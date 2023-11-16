#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Fuellt ein Array mit Zufallszahlen. Gibt diese dann aus und berechnet dann die Summe aller geraden und die Summe aller ungeraden Zahlen des Arrays.
int main()
{
    srand(time(0));
    int zufallA[20];
    for (int position = 0; position < 20; position++)
    {
        zufallA[position] = rand();
    }
    printf("Array: ");
    for (int position = 0; position < 20; position++)
    {
        printf("%i;  ", zufallA[position]);
    }
    int sum_even = 0, sum_odd = 0; //sum_even: Summe der geraden Zahlen. sum_odd: Summe der ungeraden
    for (int position = 0; position < 20; position++)
    {
        if(zufallA[position]%2 == 0)
        {
            sum_even = sum_even + zufallA[position];
        }
        else
        {
            sum_odd = sum_odd + zufallA[position];
        }
    }
    printf("\nSumme der geraden Zahlen: %i\nSumme der ungeraden Zahlen: %i", sum_even, sum_odd);
    return 0;
}