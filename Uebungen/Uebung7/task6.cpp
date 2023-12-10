#include<stdio.h>
#include<ctype.h>

//Prototyp
void stat(const char *s, int *z, int *w);

int main()
{
    char input[100];
    int zeichen, worte;
    printf("Bitte einen Text eingeben:");
    fgets(input, 98, stdin); 
    //Liest die Eingabe. Bedeutung: Speicheradresse, Laenge der Zeichhenkette mit \n und \0, Art der Eingabe: "standard input"
    stat(input, &zeichen, &worte);
    printf("Anzahl der Zeichen = %i\nAnzahl der Worte = %i", zeichen, worte);
}

//Uebergibt eine Statistik einer Zeichenketzte s an die angegebenen pointer
//Worte sind durch eine oder mehrere Leerstellen getrennt. Leerstellen zaehlen nicht als Zeichen
void stat(const char *s, int *z, int *w)
{
    int countwords = 0; //Zaehlt die Woerter
    int countchars = 0; //Zaehlt die Zeichen
    bool word = false; 
    while(*s != '\n')
    {
        if(isspace(*s) == 0)
        {
            //Wenn es kein Leerzeichen ist, werden die Zeichen erhoeht. Zudem handelt es sich um ein Wort (word = true;)
            word = true;
            countchars++;
        }
        else
        {
            if(word)
            {
                //Wenn es sich um ein Leerzeichen handelt und davor ein Wort war (if(word)), wird die Anzahl der Woerter erhoeht.
                //Zudem befindet man sich nicht mehr in einem Wort (word = false)
                countwords++;
                word = false;
            }
        }
        s++; //Naechstes Zeichen wird angesehen
    }
    if(word) 
    {
        //Wenn man am Ende der Zeichenkette ist, kann es sein, dass davor noch ein Wort war, deshalb wir die Anzahl der Woerter ehoeht.
        countwords++;
    }
    *z = countchars;
    *w = countwords;
}