#include <stdio.h>

void test();
int berechne(char op, int v1, int v2);
//Prototypen

int main()
{
    test();
}

//Berechne Funktion, liefert das Ergebnis eines Ausdrucks v1 op v2 zurueck
int berechne(char op, int v1, int v2)
{
    switch (op)
    {
    case '+':
        return v1 + v2;
    case '*':
        return v1 * v2;
    case '-':
        return v1 - v2;
    case '/':
        if(v2 == 0)
        {
            return -999;
        }
        return v1 / v2;
    default:
        return -999; //Ist der Operator ungueltig wird -999 ausgegeben
    }
}

//berechne Funktion wird auf Funktionsweise getestet
void test()
{
    char op = '+';
    printf("Die berechne-Funktion gibt aus: %i\nDer Wert sollte sein %i\n", berechne(op, 123, 456), 123 + 456);
    op = '-';
    printf("Die berechne-Funktion gibt aus: %i\nDer Wert sollte sein %i\n", berechne(op, 987, 123), 987 - 123);
    op = '*';
    printf("Die berechne-Funktion gibt aus: %i\nDer Wert sollte sein %i\n", berechne(op, 45, 56), 45 * 56);
    op = '/';
    printf("Die berechne-Funktion gibt aus: %i\nDer Wert sollte sein %i\n", berechne(op, 225, 15), 225 / 15);
    op = '$';
    printf("Die berechne-Funktion gibt aus: %i\nDer Wert sollte sein %i", berechne(op, 111, 111), -999);
}