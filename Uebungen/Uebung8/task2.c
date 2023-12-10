#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    srand(time(0)); //Wird benoetigt, um nicht immer die selben Zufallszahlen zu bekommen
    
    struct Punkt //Definition der Strukturvariablen
    {
        int x, y;
    };
    int temp;
    struct Punkt array[50];
    for (int pos = 0; pos < 50; pos++)
    {
        array[pos].x = rand();
        array[pos].y = rand();
    }
    int posMinimumX = 0; //Speichert die Arrayposition des Punktes mit dem kleinsten X- bzw. Y-Wert
    int posMinimumY = 0;
    for (int pos = 0; pos < 50; pos++)
    {
        if(array[posMinimumX].x > array[pos].x)
        {
            posMinimumX = pos;
        }
        if(array[posMinimumY].y > array[pos].y)
        {
            posMinimumY= pos;
        }
    }
    printf("Der Punkt mit dem kleinsten x-Wert ist an Position %i des Arrays.\nDer Punkt mit dem kleinsten y-Wert ist an Position %i des Arrays.", posMinimumX, posMinimumY);
}