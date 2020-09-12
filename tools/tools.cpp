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

//
// Wandelt eine Zeichenkette in eine Binärfolge entsprechend der ASCII-Tabelle um
//
std::string convertTextToBinary(std::string text)
{
  // define string which holds the result of the conversion
  std::string binary;

  // loop over string and convert each indivdual character into an 8bit number
  for(int i = 0; i < text.size(); i++) 
  {
    char c = text[i];
    binary += std::bitset<8>(c).to_string();
    binary += " ";
  }

  // return converted string
  return binary;
}

//
// Gibt Informationen zum Speicher aus, in dem die übergebene Zeichenkette gespeichert ist
//
void printMemoryInfo(std::string &text)
{
for(int i = 0; i < text.size(); i++) 
  {
    char c = text[i];
    printf("%c --> Addresse : %p, ASCII-Code: %d, Binärzahl : %s\n", c, &c, int(c), std::bitset<8>(c).to_string().c_str());
  }
}

//
// Gibt die Start- und Endadresse des übergebenen Strings aus sowie die Differenz zwischen den beiden in Bytes
//
void printStringAddresses(std::string &text)
{
  char *startAdress = &(*text.begin());                                                             // Speicheradresse des ersten Zeichens ...
  char *endAdress = &(*text.end());                                                                 // ... und des letzten Zeichens im Text-String
  printf("Adresse des Text-Strings im Speicher-> Start = %p, Ende = %p\n", startAdress, endAdress); // Speicheradresse des Text-Strings ausgeben
  printf("Differenz zwischen Start- und End-Adresse in Bytes = %lu\n", endAdress - startAdress);
}