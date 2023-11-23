#include <stdio.h>

int hoch2(int basis);
//Prototyp

int main()
{
    for(int i = 0; i < 20; i++)
    {
        printf("hoch2(%i) = %i\n", i, hoch2(i));
    }
}

//Gibt die Quadratzahl einer uebergebenen Zahl aus
int hoch2(int basis)
{
    return basis * basis;
}