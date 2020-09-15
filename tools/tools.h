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

#ifndef TOOLS_H
#define TOOLS_H

#include <string>

std::string ConvertTextToBinary(std::string text);
void PrintMemoryInfo(std::string &text);
void PrintStringAddresses(std::string &text);
void PerformManyCalculations(int numOfCalculations);

#endif /* TOOLS_H */