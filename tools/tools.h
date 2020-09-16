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
#include <chrono>

using namespace std::chrono;

std::string ConvertTextToBinary(std::string text);
void PrintMemoryInfo(std::string &text);
void PrintStringAddresses(std::string &text);
void ComputeCosOfPi(int nTimes);
void ComputeSqrtOf2(int nTimes);

class RunTime
{
private:
    time_point<high_resolution_clock> _start, _stop;

public:
    void Start();
    void Stop();
};

#endif /* TOOLS_H */