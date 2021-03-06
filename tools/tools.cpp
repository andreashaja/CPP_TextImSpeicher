/* ---------------------------------------------------------------------
 * The Fearless Engineer - Programmieren und Elektronik
 * Copyright (C) 2020, Dr. Andreas Haja.  
 *
 * Zweck : In dieser Datei sind einige Tools enthalten, die von den Übungsprogrammen
 *         in diesem Projekt verwendet werden
 *
 * Du solltest zusammen mit diesem Programm eine Kopie der MIT-Lizenz erhalten haben.
 * Falls nicht, sieh bitte hier nach: https://opensource.org/licenses/MIT.
 *
 * http://www.thefearlessengineer.com/cpp-kurs
 * ----------------------------------------------------------------------
 */

#include <stdio.h>
#include <bitset>
#include <chrono> 
#include <math.h> 
#include "tools.h"

using namespace std;
using namespace std::chrono;
//
// Wandelt eine Zeichenkette in eine Binärfolge entsprechend der ASCII-Tabelle um
//
string ConvertTextToBinary(string text)
{
    // define string which holds the result of the conversion
    string binary;

    // loop over string and convert each indivdual character into an 8bit number
    for (int i = 0; i < text.size(); i++)
    {
        char c = text[i];
        binary += bitset<8>(c).to_string();
        binary += " ";
    }

    // return converted string
    return binary;
}

//
// Gibt Informationen zum Speicher aus, in dem die übergebene Zeichenkette gespeichert ist
//
void PrintMemoryInfo(string &text)
{
    for (int i = 0; i < text.size(); i++)
    {
        char c = text[i];
        printf("%c --> Addresse : %p, ASCII-Code: %d, Binärzahl : %s\n", c, &c, int(c), bitset<8>(c).to_string().c_str());
    }
}

//
// Gibt die Start- und Endadresse des übergebenen Strings aus sowie die Differenz zwischen den beiden in Bytes
//
void PrintStringAddresses(string &text)
{
    char *startAdress = &(*text.begin());                                                             // Speicheradresse des ersten Zeichens ...
    char *endAdress = &(*text.end());                                                                 // ... und des letzten Zeichens im Text-String
    printf("Adresse des Text-Strings im Speicher-> Start = %p, Ende = %p\n", startAdress, endAdress); // Speicheradresse des Text-Strings ausgeben
    printf("Differenz zwischen Start- und End-Adresse in Bytes = %lu\n", endAdress - startAdress);
}

//
// Funktionen zur Berechnung der Laufzeit von Programmen 
// Kapselung in eigener Klasse erleichert die Nutzung der Funktionen
//
void RunTime::Start()
{
    // Record start time
    _start = high_resolution_clock::now();
}

void RunTime::Stop()
{
    // Record end time
    _stop = high_resolution_clock::now();

    // Print runtime to terminal
    duration<double> elapsed = duration_cast<microseconds>(_stop - _start);
    printf("Laufzeit = %f Mikrosekunden\n", elapsed.count());
}    

void ComputeSqrtOf2(int nTimes)
{
    for(int i=0; i<nTimes; i++)
    {
        double res = sqrt(2.0);
    }
}

void ComputeCosOfPi(int nTimes)
{
    for(int i=0; i<nTimes; i++)
    {
        double res = cos(M_PI);
    }
}