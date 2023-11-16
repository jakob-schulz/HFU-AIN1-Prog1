#include <stdio.h>
#include <string.h>

// Zeichenketten ohne Vokale
int main()
{
    char input[100], output[100];
    printf("Geben Sie einen Text ein:");
    gets(input);
    int ipos = 0, opos = 0;
    while (input[ipos] != '\0') // wird so lange durchlaufen bis Zeichenkette zu Ende ist. Alternativ liesse sich Ende der Zeichenkette auch mitt Hilfe von strlen(input) ermitteln
    {
        if (input[ipos] != 'A' && input[ipos] != 'a' && input[ipos] != 'E' && input[ipos] != 'e' && input[ipos] != 'I' && input[ipos] != 'i' && input[ipos] != 'O' && input[ipos] != 'o' && input[ipos] != 'U' && input[ipos] != 'u')
        // Wird ueberprueft, ob Zeichenkette die Vokale enthaelt oder nicht. Wenn ja, wird Vokal nicht in die Ergebniszeichenkette eingefuegt
        {
            output[opos] = input[ipos];
            opos++;
        }
        ipos++;
    }
    output[opos] = '\0';
    printf("Die Eingabe ohne Vokale lautet: %s", output);
    return 0;
}