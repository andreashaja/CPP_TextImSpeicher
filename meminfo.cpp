/* ---------------------------------------------------------------------
 * The Fearless Engineer - Programmieren und Elektronik
 * Copyright (C) 2020, Dr. Andreas Haja.  
 *
 * Zweck : Text von der Konsole einlesen, verschlüsseln und wieder ausgeben
 *
 * Du solltest zusammen mit diesem Programm eine Kopie der MIT-Lizenz erhalten haben.
 * Falls nicht, sieh bitte hier nach: https://opensource.org/licenses/MIT.
 *
 * http://www.thefearlessengineer.com/cpp-kurs
 * ----------------------------------------------------------------------
 */

#include <iostream> // Funktionen für die Ein- und Ausgabe von Daten über das Terminal
#include <string>   // Funktionen für die Verarbeitung von Zeichenketten (= Strings)
#include "tools/tools.h" // eigene Hilfsfunktionen z.B. für Infos zum Speicher

using namespace std; // Hiermit wird die Schreibweise von einigen Standard-Befehlen verkürzt

int main()
{
  //
  // ** Schritt 1 : Dateineingabe **
  // Hier wird Text eingelesen, der vom Nutzer im Terminal eingegeben wird
  //
  cout << ">> Bitte Text eingeben: ";
  string text;
  getline(std::cin, text); // Nach diesem Befehl ist der eingegebene Text in der Variablen "text" enthalten

  //
  // ** Schritt 2 : Speicheranalyse **
  // Hier werden Informationen zum Speicher ausgegeben, in dem die Variable "text" gespeichert ist
  //
  printMemoryInfo(text);
  
  //
  // ** Schritt 3 : Verarbeitung des Text-Strings **
  // Hier wird die Anzahl der Zeichen gezählt
  //
  int numChars = text.length();

  //
  // ** Schritt 4 : Datenausgabe **
  // Hier wird die Anzahl der Zeichen im Terminal ausgegeben
  //
  printf("Anzahl Zeichen im Text = %d\n", numChars);
}