#include <iostream>
using namespace std; // normalerweise muesste man std::cout verwenden. Nun kann man nur cout verwenden
#include"safeArray.hpp"
#include"safeArray.hpp" //Aufgrund der Praeprozessor Anweisungen in der Header Datei kann man den Header mehrmals einfuegen, ohne das es zu einem Fehler kommt

// Prototypen
void testMethods();
void testConstructor();

int main()
{
    testConstructor();
    testMethods();
}



void testMethods()
{
    cout << "\nTesten des einfuege Operators:" << endl;
    safeArray test;
    if (test.setAt(-2, 3))
    {
        cout << "Einfuegen an negativer Position war moeglich." << endl;
    }
    else if (test.setAt(103, 3))
    {
        cout << "Einfuegen ausserhalb des Arrays war moeglich." << endl;
    }
    else if (test.setAt(0, 567) && test.setAt(50, -12345))
    {
        cout << "Einfuegen an den Stellen 0 und 50 war moeglich." << endl;
    }
    else
    {
        cout << "Es konnte nichts eingefuegt werden." << endl;
    }
    cout << "(Erwuenschtes Ergebnis: Einfuegen an den Stellen 0 und 50 war moeglich.)" << endl;


    cout << "\nTesten des ausgabe Operators:" << endl;
    if (test.getAt(-2) != -99)
    {
        cout << "Ausgabe an negativer Position war moeglich." << endl;
    }
    else if (test.getAt(103) != -99)
    {
        cout << "Ausgabe ausserhalb des Arrays war moeglich." << endl;
    }
    else if (test.getAt(0) != 567 || test.getAt(50) != -12345)
    {
        cout << "Ausgabe an den Stellen 0 und 50 war moeglich." << endl;
    }
    else
    {
        cout << "An der Position 0 ist der Wert " << test.getAt(0) << " gespeichert und an Position 50 ist der Wert " << test.getAt(50) << " gespeichert" << endl;
    }
    cout << "(Erwuenschtes Ergebnis: An der Position 0 ist der Wert 567 gespeichert und an Position 50 ist der Wert -12345 gespeichert)" << endl;


    cout << "\nTesten des minimum Operators:" << endl;
    for(int pos = 0; pos <99; pos ++)
    {
        test.setAt(pos, pos);
    }
    test.setAt(99, -1); //Der kleinste Wert ist -1 und ist an der Stelle 99.
    cout << "Der kleinste Wert im Array ist " << test.getMinimum() << endl;
    cout << "(Erwuenschtes Ergebnis: Der kleinste Wert im Array ist -1)" << endl; 


    cout << "\nTesten des fill Operators:" << endl;
    if(test.fill(-2, 3, -2))
    {
        cout <<"Befuellen des Arrays an negativer Posititon war moeglich" <<endl;
    }
    if(test.fill(5, 2, 10))
    {
        cout <<"Befuellen eines leeren Indexbereichs war moeglich" << endl;
    }
    if(test.fill(5,5, 10))
    {
        cout << "Befuellen an einer Stelle war moeglich. (Stelle 5 Wert 10)" << endl;
    }
    if(test.fill(50, 105, 10))
    {
        cout << "Befuellen ausserhalb des Arrys war moeglich." << endl;
    }
    if(test.fill(0, 29, 10))
    {
        cout << "Befuellen der ersten 30 Stellen war moeglich. (Wert 10)" << endl;
    }
    cout << "(Erwuentschtes Ergebnis:\nBefuellen an einer Stelle war moeglich. (Stelle 5 Wert 10)\nBefuellen der ersten 30 Stellen war moeglich. (Wert 10))" << endl;
}
void testConstructor()
{
    safeArray negativ(-10);
    for (int pos = 0; pos < 100; pos++)
    {
        cout << "array[" << pos << "] = " << negativ.getAt(pos) << endl;
    }
    safeArray positiv(10);
    for (int pos = 0; pos < 100; pos++)
    {
        cout << "array[" << pos << "] = " << positiv.getAt(pos) << endl;
    }
    safeArray null(0);
    for (int pos = 0; pos < 100; pos++)
    {
        cout << "array[" << pos << "] = " << null.getAt(pos) << endl;
    }
    safeArray defaultAarray;
    for (int pos = 0; pos < 100; pos++)
    {
        cout << "array[" << pos << "] = " << defaultAarray.getAt(pos) << endl;
    }
}
