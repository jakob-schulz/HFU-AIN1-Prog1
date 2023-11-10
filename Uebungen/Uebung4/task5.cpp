#include <stdio.h>

//Gibt ein Dreieck aus * aus, welches auf dem "Kopf steht"
int main()
{
    int zeile, spalte;
    for (zeile = 1; zeile <= 20; zeile = zeile + 1)
    {
        for (spalte = 1; spalte <= 20 - zeile; spalte = spalte + 1)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}