#include <stdio.h>
#include<math.h>

//Uebung 4: Mitternachtsformel
int main()
{
    double p = 5;
    double q = 1;
    double x1;
    double x2;          
    if((p/2)* (p/2) - q < 0) //ueberprueft, ob Term unter der Wurzel negativ ist
    {
        return 0;
    }
    else
    {
        double wurzel = sqrt((p/2)* (p/2) - q);
        x1 = -(p/2) + wurzel;
        x2 = -(p/2) - wurzel;
        printf("x1 = %f; x2 = %f \n", x1, x2);
        //Ergaenzung, die ueberprueft, ob x1 und x2 tatsaechlich Nullstellen sind
        if((0 == pow(x1, 2) + p* x1 + q && 0 == pow(x2, 2) + p* x2 + q )) //Beachte, float ist nicht genau und kann Fehler enthalten
        {
            printf("Die  Stellen %f und %f sind tatsaechlich Nullstellen", x1, x2);
        }
        else
        {
            printf("Die  Stellen %f und %f sind keine Nullstellen", x1, x2);
        }
        return 0;
    } 
}