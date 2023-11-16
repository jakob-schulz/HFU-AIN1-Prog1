#include <stdio.h>
#include <string.h>

// Fuegt zwei Zeichenketten zusammen. Einmal selbst implementiert. Einmal mit Hilfe einer Funltion
int main()
{
    char text1[50], text2[50], output[100];
    printf("Erste Zeichenkette eingeben:");
    gets(text1);
    printf("Zweite Zeichenkette eingeben:");
    gets(text2);
    // selbst implementiert
    strcpy(output, text1);
    int end = strlen(output);
    int text2pos = 0;
    while (end < 100 && text2[text2pos] != '\0')
    {
        output[end] = text2[text2pos];
        end++;
        text2pos++;
    }
    printf("Zusammengfuegter Text: %s", output);
    // Funktion:
    char output2[100];
    strcpy(output2, text1);
    strcat(output2, text2);
    printf("\nZusammengfuegter Text mittels Funktion: %s", output);
    return 0;
}