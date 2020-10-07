#include <stdio.h>
#include <string>

using namespace std;

int main()
{
    // Schritt 1: Definiere zwei Variablen vom Typ Integer
    int i1 = 1;
    int i2 = 2;

    // Schritt 2: Gib die Speicheradressen der beiden Variablen mit 'cout' im Terminal aus
    printf("Adresse i1 = %p, Adresse i2 = %p\n", &i1, &i2);
    

    // Schritt 3: Berechne die Differenz zwischen den beiden Hex-Adressen und konvertiere das Ergebnis in das Dezimalsystem.
    //            Wie viel Bytes belegt eine Integer-Variable im Speicher? Überprüfe dein Ergebnis mit der folgenden Ausgabe: 
    printf("Differenz der Adressen von i1 und i2 = %td\n\n", (char *)(&i1) - (char *)(&i2));


    // Schritt 4: Ändere den Datentyp der Variablen von int zu double (Fließkomma-Zahlen) und führe Schritte 2+3 erneut aus.
    //            Wie viel Bytes belegt eine Double-Variable im Speicher?
    double d1 = 1.0;
    double d2 = 2.0;
    printf("Adresse d1 = %p, Adresse d2 = %p\n", &d1, &d2);
    printf("Differenz der Adressen von d1 und d2 = %td\n\n", (char *)(&d1) - (char *)(&d2));
}