#include <stdio.h>

void zp(int a, int b);
// Prototyp

int main(int argc, char *argv[])
{

    // Aufgabe 6
    int a, b;
    printf("Untere Grenze eingeben:");
    scanf("%i", &a);
    printf("Obere Grenze eingeben:");
    scanf("%i", &b);
    zp(a, b);
}

// Gibt alle Zweierpotenzen in einem Intervall aus: Intervall I = [a, b]
void zp(int a, int b)
{
    // Ueberpruefung von falschen Eingaben
    if (a <= 0 && b <= 0) 
    {
        printf("Falsche Eingabe");
        return;
    }
    if (b < a)
    {
        printf("b ist kleiner als a");
        return;
    }

    int basis = 2;
    while (basis < a) //Kleinste Zweierpotenz des Intervalles wird gesucht.
    {
        basis = basis * 2;
    }
    if(basis > b) //Ueberprueft, ob es in dem Intervall Zweierpotenzen gibt
    {
        printf("In dem Intervall gibt es keine Zweierpotenzen.");
        return;
    }
    while (basis <= b) //Es wird ueberprueft, welche Zweierpotenzen in dem Intervall liegen. Diese werden dann ausgegeben
    {
        printf("%i\n", basis);
        basis = basis * 2;
    }
}
