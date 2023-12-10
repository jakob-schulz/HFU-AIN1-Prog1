#include <stdio.h>
#include <string.h>

// Einfuehren von Aufzaehlungskonstanten mittels enum
enum monate
{
    Januar = 1,
    Februar,
    Maerz,
    April,
    Mai,
    Juni,
    Juli,
    August,
    September,
    Oktober,
    November,
    Dezember
};

// Struktur Datum, die Tag, Monat und Jahr enthaelt
struct Datum
{
    int tag;
    enum monate monat;
    int jahr;
};

struct Person
{
    char name[30];
    char vorname[30];
    struct Datum geburtsdatum;
}wichtig[30];

//Prototypen
void findeGeburtsdatum(char name[], char vorname[]);

int main()
{
    int laenge = 30;
    wichtig[0] = {"Newton", "Isaac", {4, Januar, 1643}};
    wichtig[1] = {"Leibniz", "Gottfried", {1, Juli, 1646}};
    wichtig[2] = {"Einstein", "Albert", {14, Maerz, 1879}};
    wichtig[3] = {"Curie", "Marie", {7, November, 1867}};
    wichtig[4] = {"Galilei", "Galileo", {15, Februar, 1564}};
    printf("Vorname Eingeben:");
    char vorname[30];
    gets(vorname);
    printf("Nachname Eingeben:");
    char name[30];
    gets(name);
    findeGeburtsdatum(name, vorname);
}

void findeGeburtsdatum(char name[], char vorname[])
{
    int personenanzahl = sizeof(wichtig)/sizeof(wichtig[0]); //Die Anzahl der Bytes des gesamten array wird durch die Anzahl eines eintrags des arrays geteilt. Als Ergebnis erhaelt man die Gesamtanzahl der Eintraege
    Person gefunden;
    for (int pos = 0; pos < personenanzahl; pos++)
    {
        if (strcmp(name, wichtig[pos].name) == 0 && strcmp(vorname, wichtig[pos].vorname) == 0)
        {
            printf("%s %s wurde am %i.%i.%i", wichtig[pos].name, wichtig[pos].vorname, wichtig[pos].geburtsdatum.tag, wichtig[pos].geburtsdatum.monat, wichtig[pos].geburtsdatum.jahr);
            return;
        }
    }
    printf("Person nicht gefunden.");
    return; 


    //Alternative zum bestimmen der Personenanzahl
    //wichtig[30] = {0}; // Array fuer die Personen wird initialisiert und deklariert -> Jeder wert ist 0;
    /*int personenanzahl = 0;
    int pos = 0;*/
    /*while (*(wichtig[pos].name) != '\0' && *(wichtig[pos].vorname) != '\0' && pos < 30)
    {
        personenanzahl++;
        pos++;
    }
    printf("%i", personenanzahl);*/
}