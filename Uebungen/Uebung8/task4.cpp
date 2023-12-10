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
bool bevor(const Datum &a, const Datum &b);

int main()
{
    Datum a = {7, Dezember, 2023};
    Datum b = {8, Dezember, 2023};
    //Die Funktion "bevor" gibt true zurueck, wenn das Datum a vor dem Datum b liegt
    if(bevor(a, b))
    {
        printf("Das erste Datum liegt vor dem zweiten Datum.");
    }
    else
    {
        printf("Das erste Datum liegt nicht vor dem zweiten Datum.");
    }
}

bool bevor(const Datum &a, const Datum &b)
{
    //Zuerst wird geschaut, ob das Jahr des Datums a kleiner ist
    if(a.jahr < b.jahr)
    {
        return true;
    }

    //Ist das nicht der Fall sind beide Jahre entweder gleich oder das Jahr a ist groesser
    //Sind beide Daten gleich muss geschaut werden, ob der Monat a kleiner ist
    if(a.monat < b.monat && a.jahr == b.jahr)
    {
        return true;
    }
    if (a.tag < b .tag && a.monat == b.monat && a.jahr == b.jahr)
    {
        return true;
    }
    //Wenn die Daten gleich sind oder wenn a im Jahr, im Monat oder im Tag groesser ist, wird false zurueckgegeben
    return false;
}