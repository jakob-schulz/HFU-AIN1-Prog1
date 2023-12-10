#include<stdio.h>
#include<stdlib.h>
#include<string.h> //Wegen *!!

//Prototyp
int berechne(char op, int v1, int v2);

//Programm das von der Kommandozeile aufgerufen werden kann und Berechnungen wie task 1 ausfuehrt
//Beispiel Aufruf: ./task2 + 20 10

//!!Problem: * wird aufgrund der Shell nicht als * uebergeben, deshalb habe ich x fuer das Malzeichen verwendet

int main(int argc, char *argv[])
{
    if(argc == 4)
    {
        int v1 = atoi(argv[2]); //Wandelt einen Zahlen-String in eine Zahl um
        int v2 = atoi(argv[3]); 
        char op = argv[1][0]; //argv[0] beinhaltet den Programmnamen
        printf("= %i", berechne(op, v1, v2));
    }
    else
    {
        printf("Falsche Eingabe");
    }
}

int berechne(char op, int v1, int v2)
{
    switch (op)
    {
    case '+':
        return v1 + v2;
    case 'x': //x steht fuer Mal
        return v1 * v2;
    case '-':
        return v1 - v2;
    case '/':
        if(v2 == 0)
        {
            return -999;
        }
        return v1 / v2;
    default:
        return -999; //Ist der Operator ungueltig wird -999 ausgegeben
    }
}