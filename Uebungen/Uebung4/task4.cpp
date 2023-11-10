#include <stdio.h>
#include <math.h>

// Heron-Verfahren -> Iteratives Verfahren zur Berechnung der Quadratwurzel einer positiven Zahl
int main()
{
    float radikand; // radikant -> Zahl unter der Wurzel
    float approximation = 1;
    printf("Zahl eingeben, aus der Wurzel gezogen werden soll: ");
    scanf("%f", &radikand);

    // Teilaufgabe 1: Heron Verfahren mit for-Schleife
    /*for (int k = 1; k < 11; k++)
    {
        approximation = (approximation + (radikand / approximation)) / 2;
        printf("x_%i = %f\n", k, approximation);
    }*/


    // Teilaufgabe 2: for-Schleife durch do-while Schleife ersetzen
    /*float xk;
    float xk1 = approximation; // xk1 und xk werden zum Verstaendins eingefuehrt
    int count = 1;
    do
    {
        xk = xk1; // Muss uebernommen werden, damit xk immer der aktuelle radikant ist
        xk1 = (xk + (radikand / xk)) / 2;
        printf("x_%i = %f\n", count, xk1);
        count++;
    } while (fabs(xk1 - xk) >= 0.000001);*/
    return 0;
}