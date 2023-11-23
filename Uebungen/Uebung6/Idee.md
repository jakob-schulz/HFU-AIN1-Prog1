# Alternative Idee:  
Mann kann einzelne Aufgaben auch in eine datei machen und dann mit Hilfe des Terminals die einzelnen Aufgaben bzw. Funktionen aufrufen
```c++
int main()
{ 
    switch(argv[1][0])
    {
    case '1':
        funktion();
        break;
    default: printf("keine Einagbe");
    }
}