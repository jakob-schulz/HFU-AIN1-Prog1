#include "safeArray.hpp"

safeArray::safeArray() // Default Konstruktor, welcher alle Werte des Arrays auf 0 setzt
{
    for (int pos = 0; pos < 100; pos++)
    {
        array[pos] = 0;
    }
}
safeArray::safeArray(int value) // Konstruktor, welcher den Array mit einem beliebigen Wert befuellt
{
    for (int pos = 0; pos < 100; pos++)
    {
        array[pos] = value;
    }
}
bool safeArray::setAt(unsigned int pos, int val)
{
    if (pos > 99) // pos < 0 muss man nicht ueberpruefen, da es sich um unsigned handelt
    {
        return false;
    }
    array[pos] = val;
    return true;
}
int safeArray::getAt(unsigned int pos)
{
    if (pos < 100)
    {
        return array[pos];
    }
    return -99; // Ist die Position auserhalb des arrays wird -99 ausgegben
}
int safeArray::getMinimum() //Minimum des Arrays wird bestimmt
{
    int minimum = array[0];
    for (int pos = 1; pos < 100; pos++)
    {
        if (array[pos] < minimum) //Ist eib Wert kleiner als der bisher gefundene wird der kleinere Wert abgespeichert
        {
            minimum = array[pos];
        }
    }
    return minimum;
}
bool safeArray::fill(unsigned int pos1, unsigned int pos2, int value)
{
    if (pos1 <= pos2 && pos2 < 100) //Es muss ueberprueft werden, ob Position 1 geringer als Position 2 ist und ob Position 2 innerhalb der Arrays ist
    {
        for (pos1; pos1 <= pos2; pos1++)
        {
            array[pos1] = value;
        }
        return true;
    }
    return false;
}

