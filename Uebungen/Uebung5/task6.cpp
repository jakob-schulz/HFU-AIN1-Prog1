#include <stdio.h>
#include <string.h>

// Eine eingelesene Zeichenkette wird umgekehrt ausgegeben
int main()
{
    char input[100];
    printf("Geben Sie einen Text ein:");
    gets(input);
    char output[100];
    int end = strlen(input); // Laenge der Zeichenkette wird bestimmt
    for (int position = 0; position < end; position++)
    {
        output[position] = input[end - 1 - position]; // Letztes Element der Zeichenkette wird an erster Stelle der neue Zeichenkette gesetzt. (-1, weil sonst \0 an den Anfang gesetzt wird).
    }
    output[end] = '\0'; // Am Ende muss noch das Ende der Zeichenkette gekennzeichnet werden
    printf("Umgedrehter Text: %s", output);
    return 0;
}