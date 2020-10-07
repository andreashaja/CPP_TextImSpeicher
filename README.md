# Text einlesen und Speicheradressen analysieren

[The Fearless Engineer : `C++`](https://www.thefearlessengineer.com/cpp-kurs)


## Worum geht es?

Dieses Projekt ist Teil eines Online-Kurses zur Programmiersprache C++. Der Code liest Text von der Konsole ein, konvertiert die eingegebenen Zeichen in Binärzahlen entsprechend der ASCII-Tabelle und zeigt, wie mit dem Adressoperator & die Speicheradresse von Variablen abgefragt und ausgegeben werden kann. Außerdem wird gezeigt, wie man auf sehr einfache Art die Laufzeit von Programmteilen ermitteln kann.

*Hinweis*: Das zugehörige Begleitheft inkl. der Links zu den Videos findest du [hier](https://go.tfe.academy/2010071).


---

## Wie kann ich den Code im Projekt nutzen?

###  **Variante A (empfohlen)** : Online-Enwicklungsumgebung repl.it

Der einfachste Weg, den Code auszuführen und zu verändern, ist über die Online-IDE `repl.it`. Mit den folgenden Links kommst du direkt zum Editor und über den `Run`-Button kann das jeweilige Programm kompiliert und ausgeführt werden. 

1. **Haupt-Programm** (`meminfo.cpp`) :  
--> [go.tfe.academy/2010072](https://go.tfe.academy/2010072)

2. **Übungen**
   - **Übung 1** (`exercises/exe_01/exe_01.cpp`) : 
   --> [go.tfe.academy/2010073](https://go.tfe.academy/2010073)
   - **Übung 2** (`exercises/exe_02/exe_02.cpp`) : 
   --> [go.tfe.academy/2010074](https://go.tfe.academy/2010074)

<br> 

###  **Variante B** : Das Projekt auf der eigenen Festplatte starten

Es besteht natürlich auch die Möglichkeit, das Projekt in einem lokalen Verzeichnis von GitHub zu klonen oder als zip-Datei herunterzuladen. 

Dazu sind die folgenden Schritte erforderlich:

0. Nur für Windows: Installation des "Windows Terminal" --> [go.tfe.academy/2008278](https://go.tfe.academy/2008278)

1. Klonen des GitHub-Repos oder Download als ZIP (`master` branch)--> [go.tfe.academy/2010075](https://go.tfe.academy/2010075)

2. Installation von Entwicklerwerkzeugen : Die Anleitungen für die erforderlichen Tools `Visual Studio Code` und `gcc` findest du unter [Tools für die lokale Installation](#Tools-für-die-lokale-Installation).
   
3. Datei mit dem gewünschten Quellcode in VS Code öffnen und mit CodeRunner ausführen

**Hinweis:** Da die lokale Installation schnell zu Fehlern führen kann, wird Einsteigern die Variante A empfohlen. 


## Tools für die lokale Installation

Im folgenden ist eine Liste der erforderlichen Entwicklungswerkzeuge aufgeführt, die zum lokalen Ausführen des Codes wie in **Variante B** beschrieben erforderlich sind. 

* **gcc/g++** >= 5.4 
	* Linux: gcc / g++ ist standardmäßig auf den meisten Linux-Distributionen installiert. 
	* Mac: [Xcode-Befehlszeilen-Tools installieren (enthalten make)](https://developer.apple.com/xcode/features/) 
	* Windows: empfohlen wird die Installation von [MinGW](http://www.mingw.org/) 

* **Visual Studio Code**
	* Download [VS Code](https://code.visualstudio.com/download)
	* In VS Code unter "Extensions" die PlugIns "C/C++" und "Code Runner" installieren



Copyright 2020, Dr. Andreas Haja
www.thefearlessengineer.com


