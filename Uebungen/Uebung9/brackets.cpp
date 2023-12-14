#include"stack.h"

//Prototypen
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
        if (brackets[position] == '(' || brackets[position] == '{' || brackets[position] == '[') //Wenn sich Klammer geoeffnet ist, dann wird ein Element hinzugefuegt
        {
            push(brackets[position]);
        }
        else
        {
            switch (brackets[position]) //Wenn Klammer geschlossen wird, muss ueberprueft werden, welche Klammer auf dem Stack ist. 
            {
            case ')':
                if (top() == '(' && !empty())
                {
                    pop(); //Rueckgabewert wird einfach weg geworfen
                }
                else
                {
                    printf("\nKeine korrekte Klammerung");
                    return;
                }
                break;
            case ']':
                if (top() == '[' &&!empty()) //Zusaetzlich wird jedes mal ueberprueft, ob der stack noch nicht leer ist. (Ansonsten wuerde bei ()) kein korrektes Ergebnis kommen)
                {
                    pop();
                }
                else
                {
                    printf("\nKeine korrekte Klammerung");
                    return;
                }
                break;
            case '}':
                if (top() == '{' && !empty())
                {
                    pop();
                }
                else
                {
                    printf("\nKeine korrekte Klammerung");
                    return;
                }
                break;
            default:
                printf("\nKeine korrekte Klammerung");
                return;
            }
        }
    }
    if (empty()) //Wenn das Programm bis hierhin laeuft und der stack am Ende leer ist, wurde korrekt geklammert
    {
        printf("Korrekte Klammerung");
    }
    else
    {
        printf("Keine korrekte Klammerung");
    }
}
