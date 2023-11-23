#include <stdio.h>

void tausch();
// Prototyp

int main()
{
    tausch();
}

// Zwei Werte werden getauscht mit der Vorgabe, dass die Variablen m und n nicht direkt Ziele von Zuweisungen sind
void tausch()
{
    int m = 9;
    int n = 10;
    int *pm;
    int *pn;
    int temp;
    pm = &m;
    pn = &n;
    temp = *pm;
    *pm = *pn; // Da die Variablen in der Aufgabe nicht direkt Ziele von Zuweisungen sein duerfen, erfolgt die Zuweisung durch die Dereferenzierung von Pointern
    *pn = temp;
    printf("m = %i, n = %i. ", m, n);
}
