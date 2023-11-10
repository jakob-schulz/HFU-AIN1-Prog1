#include<stdio.h>

//Ueberprueft, ob ein eingegebener 13-stelliger ISBN/EAN Code korrekt ist und gibt eine entsprechende Meldung aus
int main()
{
    printf("Code eingeben:");
    char code[13];
    int sum = 0;
    scanf( "%13s", &code ); //Liest Zeichenfolge mit maximaler Laenge von 13 ein. (Deshalb 13)
    for(int position = 0; position < 13; position++)
    {   
        if(position%2 == 0)
        {
            sum += code[position];
        }
        else
        {
            sum += 3*code[position]; 
        }
    }
    if(sum%10 == 0)
    {
        printf("Die Pruefziffer ist korrekt.");
    }
    else
    {
         printf("Die Pruefziffer ist nicht korrekt.");
    }
    return 0;
}