#include <stdio.h>

//Definieren einer Struktur Punkt und Wertzuweisung.
int main()
{
    //Definition der Strukturvariablen
    struct Punkt
    {
        int x, y;
    };
    //Initialisieren von Strukturvariablen
    struct Punkt p1 = {4, 5};
    struct Punkt p2 = {2, 3};
    struct Punkt summe = {p1.x + p2.x, p1.y + p2.y};
    printf("Summe:\nx-Wert:%i\ny-Wert:%i", summe.x, summe.y);
}
