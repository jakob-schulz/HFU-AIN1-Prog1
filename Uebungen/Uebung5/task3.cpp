#include<stdio.h>

//Eine Ganzzahl wird eingelesen und in Binaerdarstellung umgewandelt und ausgegeben
int main()
{
    int binary[32];
    int unsigned decimal; //unsigned, weil negative Zahlen nicht gebraucht werden
    int rest;
    printf("Bitte eine positive Ganzzahl eingeben:");
    scanf("%u", &decimal);
    int unsigned quotient = decimal;
    for(int position = 31; position >= 0; position = position-1)
    {
        rest = quotient % 2;  //Umwandeln per Divisionsverfahren
        quotient = quotient/2;
        binary[position] = rest;
    }
    printf("Die Zahl %u ist in Binaer: ", decimal);
    for(int position = 0; position < 32; position++)
    {
        printf("%i", binary[position]);
    }
    return 0;
}