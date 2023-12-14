#include"stack.h"

int stack[100];
int topposition = -1; // Repraesentiert die Position des obersten Elements des Stacks

void push(char c) // Legt den char-Wert oben auf dem Stapel ab
{
    if (topposition < 100) // Wenn das oberste Element die Position 100 haette, waere man ausserhalb des Arrays
    {
        topposition++;
        stack[topposition] = c;
    }
    else
    {
        printf("Stack overflow");
    }
}

char pop() // Entfernt den obersten char-Wert vom Stapel und gibt diesen Wert zurueck
{
    char top = stack[topposition];
    if(topposition > -1)
    {
    topposition = topposition - 1;
    return top; //Oberstes Element wird zurueck gegeben
    }
    printf("Stack is empty");
    return stack[0]; //Wenn der Array leer ist wird das Element an 0. Stelle ausgegeben
}

char top() // Liefert den Wert des obersten char-Werts vom Stapel, ohne diesen zu entfernen
{
    if(topposition > -1)
    {
        return stack[topposition];
    }
    printf("Stack is empty");
    return stack[0]; //Wenn der Array leer ist wird das Element an 0. Stelle ausgegeben
}

unsigned int size() // Liefert die Anzahl der Eintraege auf dem Stapel
{
    if(topposition == -1) //topposition == -1 gilt, wenn der array leer ist
    {
        return 0;
    }
    return topposition + 1; //+1, weil gilt position = AnzEintraege - 1
}

bool empty() // Liefert true genau dann, wenn der Stapel leer ist
{
    if (topposition == -1)
    {
        return true;
    }
    return false;
}

void clear() // Leert den Stack vollstaendig bzw. initialisiert ihn.
{
    topposition = -1;
}

void tests()
{    
    clear();
    push('a');
    push('b');
    push('c');
    printf("Oberstes Element: %c\n", top());
    pop();
    printf("Anzahl Elemente: %u\n", size());
    pop();
    printf("Oberstes Element: %c\n", top());
    pop();
    printf("Ist Stack leer? %s\n", empty() ? "ja" : "nein");

    //Zu viele Elemente einfuegen
    printf("\nTests:\nZu viele Elmente einfuegen:\n");
    for(int i = 0; i < 102; i++)
    {
        push('a');
    }
    //Zu viele Elemente entfernen
    char test;
    printf("\nZu viele Elmente entfernen:\n");
    for(int i = 0; i < 102; i++)
    {
        test = pop();
    }
    //Versuchen bei einem leeren Stack ein Element zu bekommen
    printf("\nVersuch, bei einem leeren Stack ein Element zu bekommen:\n");
    test = top();
}