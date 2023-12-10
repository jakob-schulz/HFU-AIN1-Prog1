#include <stdio.h>

struct Vektor
{
    float x, y;
};

// Prototypen
float skalarProdukt(const Vektor &a, const Vektor &b);
Vektor vektorSumme(const Vektor &a, const Vektor &b);
Vektor kreuzProdukt(const Vektor &a, const Vektor &b);
Vektor skalierterVektor(float faktor, const Vektor &x);

int main()
{
    // Eingabe der Vektoren
    Vektor a;
    printf("x-Koordinate Vektor 1:");
    scanf("%f", &a.x);
    printf("y-Koordinate Vektor 1:");
    scanf("%f", &a.y);
    Vektor b;
    printf("x-Koordinate Vektor 2:");
    scanf("%f", &b.x);
    printf("y-Koordinate Vektor 2:");
    scanf("%f", &b.y);

    // Ausgabe der Funktionen
    printf("Skalarprodukt: %f\n", skalarProdukt(a, b));
    Vektor summe = vektorSumme(a, b);
    printf("Summen Vektor:\nx: %f\ny: %f\n", summe.x, summe.y);
    float faktor = 7;
    Vektor skaliert = skalierterVektor(faktor, a);
    printf("Vektor a skaliert mit %f:\nx: %f\ny: %f\n", faktor, skaliert.x, skaliert.y);
    return 0;
}

float skalarProdukt(const Vektor &a, const Vektor &b)
{
    return a.x * b.x + a.y * b.y;
}

Vektor vektorSumme(const Vektor &a, const Vektor &b)
{
    Vektor summe = {a.x + b.x, a.y + b.y};
    return summe;
}

// TODO bzw. nochmal nachfragen
Vektor kreuzProdukt(const Vektor &a, const Vektor &b)
{
    Vektor kreuzP = {a.x * b.y, a.y * b.x};
    return kreuzP;
}

Vektor skalierterVektor(float faktor, const Vektor &x)
{
    Vektor skaliert = {faktor * x.x, faktor * x.y};
    return skaliert;
}
