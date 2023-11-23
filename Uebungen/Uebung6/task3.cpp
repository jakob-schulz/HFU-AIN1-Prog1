#include <stdio.h>

void fibonacci();
//Prototyp

int main()
{
    fibonacci();
}

//Befuellt einen Array mit den ersten 50 Fibonacci-Zahlen
void fibonacci()
{
    int fibonacci[50]; 
    //Eingabe der Fibonacci-Zahlen ohne []
    int *position = fibonacci;
    *position = 1;
    position++;
    *position = 1;
    position++;
    for (int i = 2; i < 50; i++)
    {
        *position = *(position - 1) + *(position - 2);
        position++;
    }
    // Ausgabe der Fibonacci-Zahlen ohne []
    position = fibonacci;
    for (int i = 0; i < 50; i++)
    {
        printf("f(%i) = %i\n", i + 1, *position);
        position++;
    }
}