#include <stdio.h>

char stack[100];
int topposition = -1; // Repraesentiert die Position des obersten Elements des Stacks

// Prototypen
void push(char c);
char pop();
char top();
unsigned int size();
bool empty();
void clear();
void tests();

void correctBrackets();

int main()
{
    correctBrackets();
}
void correctBrackets()
{
    printf("Bitte geben Sie eine Klammerung ein:");
    char brackets[100];
    gets(brackets);
    for (int position = 0; position < 100 && brackets[position] != 0; position++)
    {
        if (brackets[position] == '(' || brackets[position] == '{' || brackets[position] == '[')
        {
            push(brackets[position]);
        }
        else
        {
            switch (brackets[position])
            {
            case ')':
                if (stack[topposition] == '(')
                {
                    pop(); //Wieso gibt das keinen Fehler? eigentlich gibt Funktion einen Wert zurueck
                }
                else
                {
                    printf("Keine korrekte Klammerung");
                    return;
                }
                break;
            case ']':
                if (stack[topposition] == '[')
                {
                    pop();
                }
                else
                {
                    printf("Keine korrekte Klammerung");
                    return;
                }
                break;
            case '}':
                if (stack[topposition] == '{')
                {
                    pop();
                }
                else
                {
                    printf("Keine korrekte Klammerung");
                    return;
                }
                break;
            default:
                printf("Keine korrekte Klammerung");
                return;
            }
        }
    }
    if (empty())
    {
        printf("Korrekte Klammerung");
    }
    else
    {
        printf("Keine korrekte Klammerung");
    }
}

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
    if (topposition > -1)
    {
        topposition = topposition - 1;
        return top; // Oberstes Element wird zurueck gegeben
    }
    printf("Stack is empty");
    return stack[0]; // Wenn der Array leer ist wird das Element an 0. Stelle ausgegeben
}

char top() // Liefert den Wert des obersten char-Werts vom Stapel, ohne diesen zu entfernen
{
    if (topposition > -1)
    {
        return stack[topposition];
    }
    printf("Stack is empty");
    return stack[0]; // Wenn der Array leer ist wird das Element an 0. Stelle ausgegeben
}

unsigned int size() // Liefert die Anzahl der Eintr¨age auf dem Stapel
{
    if (topposition == -1) // topposition == -1 gilt, wenn der array leer ist
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

void clear() // Leert den Stack vollst¨andig bzw. initialisiert ihn.
{
    topposition = -1;
}