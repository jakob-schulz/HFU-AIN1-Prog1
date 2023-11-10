#include <stdio.h>

// Gibt an, ob ein Jahr ein Schaltjahr ist oder nicht
int main( int argc , char** argv)
{
unsigned int jahr = 2024;
if ( jahr % 4 == 0 && jahr % 100 != 0 || jahr % 400 == 0)
{
    printf ("Das Jahr %u ist ein Schaltjahr !\n" , jahr ) ;
}
else
{
printf ("Das Jahr %u ist kein Schaltjahr !\n" , jahr ) ;
}
return 0 ;
}