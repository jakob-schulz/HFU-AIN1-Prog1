#include <stdio.h>
#include<math.h>

//Uebung 3: Vorzeichen gemaess der Definition des Aufgabenblattes ausgeben
int main( int argc , char** argv) 
{
    int x ;
    int f ;
    printf( "Geben Sie eine Zahl ein \n" );
    scanf( "%i", &x ); // \n ist laut Aufgabe hier. Funktioniert aber nicht.
    if(x < 0)
    {
        f = -1;
    }
    else if(x == 0)
    {
        f = 0;
    }
    else
    {
        f = 1;
    }
    printf ( "f(%i)= %i \n", x , f ) ;
    return 0;
}



