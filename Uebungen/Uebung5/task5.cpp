#include <stdio.h>
#include <string.h>

// Zei Zeichenketten werden eingelesen und es wird verglichen obe beide Zeichenketten gleich sind oder nicht
int main()
{
    char text1[100];
    printf("Zeichenkette 1:");
    gets(text1);
    char text2[100];
    printf("Zeichenkette 2:");
    gets(text2);
    int position = 0;
    while (position < 100 && (text1[position] != '\0' || text2[position] != '\0')) // Altenative: Mit strlen schon vorher schauen, ob Texte gleich lang sind und dann in abhaengigkeit der laenge auf Gleichheit ueberpruefen.
    {
        if (text1[position] != text2[position])
        {
            printf("Die Texte sind nicht identisch.");
            return 0;
        }
        position++;
    }
    printf("Die Texte sind identisch.");

    // Alternative
    /*if(strcmp(text1, text2) == 0)
    {
        printf("Die Texte sind identisch.");
    }
    else
    {
        printf("Die Texte sind nicht identisch.");
    }*/
    return 0;
}