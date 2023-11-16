#include<stdio.h>
#include<string.h>

//Programm gibt die Laenge einer Zeichenkette aus. Einmal "selbst" und einmal mittels einer Funktion
int main()
{
    char input[100];
    printf("Geben Sie eine Zeichenkette ein (max. 100 Zeichen): ");
    gets(input);
    int position = 0, anzZ = 0;
    while(input[position] != '\0') // \0 gibt in einer Zeichenkette das Ende der Zeichenkette an
    {
        anzZ++;
        position++;
    }
    printf("Berechnete Anzahl der Zeichen: %i\n Ergebnis der Funktion strlen(): %i", anzZ, strlen(input));
    return 0;
}