#include <stdio.h>

//Prototypen
long ggTW(long x, long y);
long ggTRek(long x, long y);

int main()
{
    long zahl1;
    long zahl2;
    printf("Zahl1 eingeben:");
    scanf("%li", &zahl1); //long wird eingelesen
    printf("Zahl2 eingeben:");
    scanf("%li", &zahl2); //long wird eingelesen
    printf("Ergebnis der Funkktion mit der Schleife: %li\nErgebnis der rekursiven Funktion: %li", ggTW(zahl1, zahl2), ggTRek(zahl1, zahl2));
    //Bei beiden Methoden wird der Algorithmus von Euklid angewandt.
}

//Berechnung des ggT mittels einer While- Schleife
long ggTW(long x, long y)
{
    while (x != y)
    {
        if (x > y)
        {
            x = x - y;
        }
        else
        {
            y = y - x;
        }
    }
    return x;
}

//Rekursive Berechnung des ggT
long ggTRek(long x, long y)
{
    if (x == y)
    {
        return x;
    }
    if (x > y)
    {
        return ggTRek(x - y, y);
    }
    return ggTRek(x, y - x);
}