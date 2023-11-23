#include <stdio.h>

int length(char string[]);
//Prototyp

int main()
{
    printf("Zeichenkette eingeben:");
    char zeichen[100];
    gets(zeichen);
    printf("Der Text enthaelt: %i Zeichen:", length(zeichen));
    return 0;
}

// Ermittelt die Laenge eines Strings. Drer Array-Index-Operator [] darf nicht verwendet werden.
int length(char string[])
{
    char *character = string;
    int pos = 0;               // Zaehlt die Laenge des Strings
    while (*character != '\0') // Pointer wird dereferenziert und es wird ueberprueft, ob das Ende des Arrays erreicht wurde
    {
        character++; // Der pointer wird erhoeht
        pos++;
    }
    return pos;
}