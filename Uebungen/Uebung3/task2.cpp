#include <stdio.h>

//Umrechnung in Binaer
int main()
{
    int zahl = 130;

    if(zahl > 0 || zahl <= 255)
    {
        int binaer = 0;
        int temp = zahl;
        if(1 <= temp / 128 )
        {
            binaer = 10000000;
            temp = temp -128;
        }
        if(1 <= temp / 64)
        {
            binaer = binaer + 1000000 ;
            temp = temp -64;
        }
        if(1 <= temp / 32)
        {
            binaer = binaer + 100000;
            temp = temp -32;
        }
        if(1 <= temp / 16)
        {
            binaer = binaer + 10000;
            temp = temp -16;
        }
         if(1 <= temp / 8)
        {
            binaer = binaer + 1000;
            temp = temp -8;
        }
        if(1 <= temp / 4)
        {
            binaer = binaer + 100;
            temp = temp -4;
        }
        if(1 <= temp / 2)
        {
            binaer = binaer + 10;
            temp = temp -2;
        }
        if(1 <= temp / 1)
        {
            binaer = binaer + 1;
            temp = temp -1;
        }
        printf("Die Zahl %i ist in Binaer: %i", zahl, binaer);
    }
    else
     {
        printf("Die Zahl %i muessen wir nicht darstellen");
     }
     return 0;
}