#include <stdio.h>

//Einfuehren von Aufzaehlungskonstanten mittels enum
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

//Struktur Datum, die Tag, Monat und Jahr enthaelt
struct Datum
{
    int tag;
    monate monat;
    int jahr;
};

//Prototypen
void druckeDatum(Datum d);
void druckeDatum(Datum *d);
void druckeDatumRef(Datum &d);

int main()
{
    struct Datum bearbeitungsdatum = {7, Dezember, 2023};
    druckeDatum(bearbeitungsdatum);
    druckeDatum(&bearbeitungsdatum);
    druckeDatumRef(bearbeitungsdatum);
}

//Datum wird hier kopiert -> Werteuebergabe
void druckeDatum(Datum d)
{
    printf("Werteuebergabe: Datum der Bearbeitung: %i.%i.%i\n", d.tag, d.monat, d.jahr);
}

//Pointer auf das Datum wird hier uebergeben -> Zeigeruebergabe
void druckeDatum(Datum *d)
{
    printf("Zeigeruebergabe: Datum der Bearbeitung: %i.%i.%i\n", (*d).tag, (*d).monat, (*d).jahr);
}

//Referenz auf das Datum wird hier uebergeben -> Referenzuebergabe (Geht nur in c++)
void druckeDatumRef(Datum &d) 
{
    printf("Referenzuebergabe: Datum der Bearbeitung: %i.%i.%i", d.tag, d.monat, d.jahr);
}