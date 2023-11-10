#include <stdio.h>

//Gibt die Fibonacci-Zahlen bis 20 und den Quotienten fk/fk-1 aus. Dieser Quotient strebt fuer steigendes k gegen den goldenen Schnitt. fk ist hier faktuell
int main()
{
    int f1 = 1;
    int f2 = 1;
    int faktuell;
    float quotient;
    for (int monatK = 3; monatK <= 20; monatK++)
    {
        faktuell= f1 + f2;
        quotient = static_cast<float>(faktuell)/static_cast<float>(f2); //Hier muss ein explizieter cast durchgefuert werden, denn faktuell und f2 sind Integer. "Quotient" ist wiederrum float.
        printf("f_%i = %i %f \n", monatK, faktuell, quotient);
        f1 = f2;
        f2 = faktuell;
    }
}