#include <math.h>
#include "./../../tools/tools.h"

int main()
{
  // Schritt 1 : Starte die Laufzeitmessung mit der Runtime-Klasse analog zu meminfo.cpp
  
  int nTimes = 1000000; 
  int cnt = 0; 
  while(cnt<nTimes)
  {
      // Schritt 2 : Informiere dich, welche Funktionen es in der "Mathe-Bibliothek" von C++ gibt
      //             Füge alternativ zur folgenden Zeile einige Funktionsaufrufe ein (z.B. sin, cos, sqrt, ...) und vergleiche die Laufzeiten
      //             Variiere auch die Anzahl der Schleifendurchläufe, in dem du die Variable nTimes veränderst
      double res = pow(cnt,cnt); 

      cnt = cnt + 1;
  }

  // Schritt 3 : Beende die Laufzeitmessung mit der Runtime-Klasse analog zu meminfo.cpp

}