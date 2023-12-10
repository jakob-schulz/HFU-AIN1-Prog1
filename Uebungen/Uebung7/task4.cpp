#include <stdio.h>

// Prototypen
bool prim(int x);

int main()
{
    int input;
    printf("Zahl, die ueberprueft werden soll:");
    scanf("%i", &input);
    if (prim(input))
    {
        printf("Die Zahl ist prim.");
    }
    else
    {
        printf("Die Zahl ist nicht prim.");
    }
    return 0;
}

// ueberprueft, ob eine eingegebene Zahl eine Primzahl ist
bool prim(int x)
{
    for (int quotient = 2; quotient * quotient <= x; quotient++)
    // Die hoechste Zahl, die man Pruefen muss, ob sie Teiler der eingegeben Zahl ist, ist die Wurzel der eingegebenen Zahl
    // Grund: Zieht man die Wurzel sind beide Teiler groesstmoeglich. Fuer jeden Teiler, der groesser als die Wurzel ist, ist der andere kleiner als die Wurzel
    // Weiteres Beispiel: Fuer eine eingegebene Zahl t muesste gelten: sqrt(t+x) * sqrt(t) = t. Ergebnis der Gleichung: t*x = t. Somit gibt es keine Teilerkombination bestehend aus einer Zahl
    // groesser Wurzel n und gleich Wurzel n
    {
        if ((x % quotient) == 0)
        {
            return false;
        }
    }
    return true;
}