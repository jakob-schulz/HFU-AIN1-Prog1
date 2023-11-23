#include <stdio.h>
#include<string.h>

void dreh(const char *s);
//Prototyp

int main()
{
    printf("Zeichen eingeben:");
    char input[50];
    gets(input);
    dreh(input);
}

//Ein String wird umgedreht
void dreh(const char* s)
{
    for(int i = strlen(s) ; i >= 0; i = i -1) //ausgehend vom letztem Elemnt des Arrays wird der Wert ausgegeben
    {
        printf("%c", *(s+i));
    }
}