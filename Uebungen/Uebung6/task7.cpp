#include <stdio.h>

int vorkommen(const char *s, const char *m);
//Prototyp

int main()
{
    char text[50];
    printf("Text eingeben:");
    fgets(text, 50, stdin);
    char inhalt[50];
    printf("Inhalt ueberpruefen:");
    fgets(inhalt, 20, stdin); //fgets wird hier verwendet, wenn man einen Text mit Leerzeichen eingibt
    printf("%i", vorkommen(text, inhalt));
}

//Ueberprueft, wie oft ein Muster m im string s vorkommt
int vorkommen(const char *s, const char *m)
{
    const char *s1 = s;
    const char *m1 = m;
    int count = 0;
    if(*m1 == '\n') //Hier wird \n als Ende der Zeichenkette ueberprueft. Grund dafuer ist fgets, denn der Zeilenumbruch wird als Zeichen mitgenommen
    {
        return 0;
    }
    while(*s1 != '\n')
    {
        if(*s1 == *m1) //Ueberpruefen, ob Zeichen identisch sind
        {
            if(*(m1+1) == '\n') //Ueberpruefen, ob Muster zu Ende ist 
            {
                m1 = m;
                s1++;
                count++; //zaehlt die Muster
            }
            else
            {
            m1++;
            s1++;
            }
        }
        else
        {
            if(m1 != m)
            {
            m1 = m; //Muster wieder auf Anfang setzen, um sicher zu stellen, dass bei der naechsten Iteration wieder das komplette Muster ueberprueft wird
            }
            else
            {
            s1++;
            }
        }
    }
    return count;
}