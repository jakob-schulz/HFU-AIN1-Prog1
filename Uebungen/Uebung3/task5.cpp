#include <stdio.h>

//Uebung 5: Es wird eine Jahreszahl und einen Monat eingelesen und die Anzahl der Tage des Monats werden ausgegeben
int main()
{
    unsigned int monat; 
    unsigned int jahr; // unsigned, weil es keinen Sinn ergibt einen negativen Monat und ein negatives Jahr einzugeben
    int anzahlTage;
    printf( "Geben Sie eine Monatszahl ein:" );
    scanf( "%i", &monat );
    printf( "Geben Sie eine Jahreszahl ein:" );
    scanf( "%i", &jahr );
    switch(monat)
    {
        case 1: anzahlTage = 31; break; 
        case 2: anzahlTage = 28; break;
        case 3: anzahlTage = 31; break;
        case 4: anzahlTage = 30; break;
        case 5: anzahlTage = 31; break;
        case 6: anzahlTage = 30; break;
        case 7: anzahlTage = 31; break;
        case 8: anzahlTage = 31; break;
        case 9: anzahlTage = 30; break;
        case 10: anzahlTage = 31; break;
        case 11: anzahlTage = 30; break;
        case 12: anzahlTage = 31; break;
    }
    if ( (jahr % 4 == 0 && jahr % 100 != 0 || jahr % 400 == 0) && monat == 2) //Uebrerprueft, ob es sich um ein Schalftjahr handelt und ob der Monat ein Frebruar ist
    {
        anzahlTage = 29;
    }
    printf("Der %i. Monat im Jahr %i hat %i Tage.", monat, jahr, anzahlTage);
    return 0;
}