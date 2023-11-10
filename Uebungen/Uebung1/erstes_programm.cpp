#include <stdio.h>
#include <stdlib.h>

int main( int argc, char* argv [] ) 
{
int Liste [40] ;
int Minimum;
int i;


// Fuellen der Liste mit Zufallselementen
for ( i = 0 ; i < 40; i++) 
{
Liste [i] = rand();
}

// Bisläng kleinstes Element

Minimum = Liste[0];

// Kleinstes Element der ganzen Liste suchen
for(i = 1; i<40; i++)
{
    if(Liste[i] < Minimum)
    {
        Minimum = Liste[i];
    }
}

//Ausgabe des Ergebnisses
printf("Das Minimum von ");
for(i = 0; i<40; i++)
{
    printf("%i ", Liste[i]);
}
printf("ist.\n%i\n", Minimum);

return 0;
}
