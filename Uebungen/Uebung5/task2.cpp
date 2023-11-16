#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Gibt 100 Zufallszahlen im Bereich von 0 bis 50 aus und zaehlt, wie oft Zahlen vorkommen
int main()
{
    srand(time(0));
    int zufallA[100];
    for (int position = 0; position < 100; position++)
    {
        zufallA[position] = rand()%51; //mod 51, damit die Zufallszahlen zwischen 0 und 50 liegen
    }
    int anzahlZ[52];
    int count;
    for (int i = 0; i < 52; i++)
    {
        count = 0;
        for (int position = 0; position < 100; position++)
        {
            if(zufallA[position] == i)
            {
                count += 1;
            }
        }
        anzahlZ[i] = count;
    }
    //Ausgabe der Zufallszahlen und der Anzahl der Zufallszahlen
    printf("Zufallszahlen: ");
    for (int position = 0; position < 100; position++)
    {
        printf("%i;  ", zufallA[position]);
    }
    printf("\nAnzahl der Zufallszahlen: ");
    for (int position = 0; position < 52; position++)
    {
        printf("Zahl %i = %i; ",position,anzahlZ[position]);
    }
    return 0;
}