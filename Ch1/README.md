# Introduction to C

## main(), types, operators, control structures, i/o , simple methods/procedures

Do you have the correct settings in Dev-C++? Check [the guidelines]().

Make for every assignment a new file (<em>file > new > source file</em>) and save this as a .c-file; Don’t make projects.

1. Write a program that outputs the follwing text (delay between the different numbers is not necessary).

   ```
   Hello world!
   10 9 8 7 6 5 4 3 2 1 
   START
   ```

   **Remark**:

   Did you hardcode the output 10 9 8 7 6 5 4 3 2 1? Don’t do it!
   Can you start counting down from 100? Use a constant a startvalue for counting down.
   [Solution](https://github.com/reeveng/Programming-in-C-and-Cpp/blob/main/Ch1/Sol%20Q1%20C/Vraag1.c)

   

2. Write a program that displays all integers from 0 till 64. Each line contains an octal, decimal and hexadecimal representation of one number. Make sure the numbers are right aligned, so like this:

   | Octal | Decimal | Hexadecimal |
   | ------------- |:-------------:| -----:|
   |   0  |  0  |  0 |
   |  1   | 1  |  1 |
   |   2  |  2 |   2 |
   |   3 |   3   | 3 |
   |  ... | ... | ... |
   |  11   | 9  |  9 |
   |  12  | 10  |  a |
   |  13 |  11  |  b |
   |  14  | 12  |  c |
   |  15 |  13  |  d |
   |  16 |  14  |  e |
   |  17 |  15  |  f |
   |  20 |  16 |  10 |
   |  21  | 17  | 11 |
   |  ... | ... | ... |
   |  77 |  63  | 3f |
   | 100 |  64  | 40 |

   [Solution](https://github.com/reeveng/Programming-in-C-and-Cpp/blob/main/Ch1/Sol%20Q1%20C/Vraag2.c)

3. 
   Given the following program fragment, as a Solution for exercise 1. This provides the requested output. However, it results in penalty points on an exam. Why?

   ```c
   int main(){
        int i;
        for(i=10; i>0; i--){
             if(i==10){
                  printf("Hello world!\n");
             }
             printf("%d ",i);             
             if(i==1){
                  printf("\nSTART");
             }       
        }
   }
   ```

   [Solution](https://github.com/reeveng/Programming-in-C-and-Cpp/blob/main/Ch1/Sol%20Q1%20C/Vraag3.c)

4. Given the problem, write out all powers of 2 (starting at 2^0=1), less than 10,000.
   The code below does not provide the requested output - how can you detect this rather quickly?
   Also adjust the code so that you get the requested output.

   ```c
   #include <stdio.h>
   int main(){
       int macht = 1;
       while(macht < 10000){
           macht *= 2;
           printf("%d ",macht);
       }
       return 0;	
   }
   ```

   [Solution](https://github.com/reeveng/Programming-in-C-and-Cpp/blob/main/Ch1/Sol%20Q1%20C/Vraag4.c)


5. Unlike the previous exercise, this code does deliver the requested output. Still, this Solution yields even fewer points than the previous Solution. Why?

   ```C
   #include <stdio.h>
   int main(){
       int macht = 1;
       int i;
       for(i=0; i<20; i++){
           printf("%d ",macht);
           macht *= 2;
           if(macht > 10000){
               break;
           }		
       }	
       return 0;
   }
   ```

   [Solution](https://github.com/reeveng/Programming-in-C-and-Cpp/blob/main/Ch1/Sol%20Q1%20C/Vraag5.c)


6. In deze opgave wordt de faculteit van positieve gehele getallen berekend.
   Bereken de faculteit van de gehele getallen 2 tot en met 30 en schrijf de resultaten uit. Wat merk je op?
   Bereken de faculteit met andere gegevenstypes (geheel én reëel). Hoe exact is de berekende waarde voor de faculteit van grotere getallen?
   Pas het programma aan zodat de computer een willekeurig geheel getal kiest tussen 2 en 20 (grenzen inbegrepen). Bereken de faculteit van dit getal.
   Gebruik de functie rand(); - meer informatie zoek je online.
   Pas het programma aan zodat de gebruiker een positief geheel getal kan ingeven tussen 2 en 20 (grenzen inbegrepen). Controleer deze input! Vraag (desnoods herhaaldelijk) een nieuw getal indien de gebruiker geen geheel getal ingaf of indien het ingegeven geheel getal niet tot het interval [2,20] behoort. Vergeet niet om na elke foutieve input de resterende tekst uit de inputbuffer te verwijderen. Bereken de faculteit van dit getal.
   [Solution](https://github.com/reeveng/Programming-in-C-and-Cpp/blob/main/Ch1/Sol%20Q1%20C/Vraag6.c)

7. Bij het berekenen van de sinus van een gegeven hoek in radialen, gebruikt je computer of rekenmachine onderstaande reeksontwikkeling:
   
   ![image sum1](E:\Desktop\Programming-in-C-and-Cpp\Ch1\som1.jpg)
   
   1. Schrijf een programma dat de sinus berekent van 0.23 radialen door de eerste 10 termen van de reeksontwikkeling te berekenen. Opgelet: we kijken naar efficiëntie van je berekeningen!
      Vergelijk je berekening met het resultaat van de ingebouwde sinusfunctie uit de bibliotheek math.h - tot hoeveel decimalen is jouw berekening correct?
      Herneem de berekeningen voor 8.2 radialen, dan is de reeksontwikkeling niet nauwkeurig genoeg.
   2. In de vorige Solution heb je geen enkele zekerheid over de nauwkeurigheid van de reekssom.
      Pas je programma aan zodat je zeker bent dat de reekssom even correct is als het resultaat van de ingebouwde sinusfunctie.
   3. Nu is de waarde van x hard-gecodeerd in het programma. Pas dit aan zodat x door het programma willekeurig gekozen wordt in het interval [-3.200,3.200[. Het getal x bevat dus drie beduidende decimalen.
   Het efficiënt implementeren van een reeksontwikkeling is niet evident. Vergelijk bijvoorbeeld het aantal berekeningen dat jouw code uitvoert met het aantal berekeningen van de voorbeeldSolution.
   
   Heb je graag nog wat extra oefeningen op reeksontwikkelingen, dan vind je er op https://nl.wikipedia.org/wiki/Taylorreeks extra oefeningen, die bovendien eenvoudig te controleren zijn.
   Zo kan je bijvoorbeeld de uitkomst die jouw zelfgeprogrammeerde reeksontwikkeling van ln(1+x) geeft,
   ![image sum2](E:\Desktop\Programming-in-C-and-Cpp\Ch1\som2.jpg)

   vergelijken met de uitkomst van ln(1+x). Kies in dit geval x dan wel tussen -1 en 1 zoals de voorwaarde eist, en zoek uit hoe ln in C-taal geschreven wordt.
   
[Solution](https://github.com/reeveng/Programming-in-C-and-Cpp/blob/main/Ch1/Sol%20Q1%20C/Vraag7.c)
   
8. Schrijf een programma dat aan de gebruiker vijf positieve gehele getallen vraagt. Geeft de gebruiker echter een negatief getal in, dan stopt het programma met getallen opvragen. Nadien schrijft het programma uit of de gebruiker inderdaad vijf positieve gehele getallen opgaf. Tot slot wordt de som van de ingegeven positieve gehele getallen uitgeschreven (ook als er niet genoeg ingegeven werden).
   Test uit, onder andere met de getallenreeks 1 2 3 4 -5.

   [Solution](https://github.com/reeveng/Programming-in-C-and-Cpp/blob/main/Ch1/Sol%20Q1%20C/Vraag8.c)

9. Schrijf volgende functies en test ze uit in een eenvoudig hoofdprogramma:
   De functie cijfersom(x) berekent van een gegeven geheel getal x de som van de cijfers. Zo is cijfersom(12345) gelijk aan 15.
   Maak een recursieve versie cijfersom_rec(x) die hetzelfde doet als cijfersom(x).
   [Solution](https://github.com/reeveng/Programming-in-C-and-Cpp/blob/main/Ch1/Sol%20Q1%20C/Vraag9.c)

10. Herneem oefening 6, maar los dit nu op met twee functies:
    De functie faculteit(x) berekent de faculteit van een gegeven geheel getal x.
    De functie faculteit_rec(x) doet een recursieve berekening.
    Controleer in een eenvoudig hoofdprogramma.
    [Solution](https://github.com/reeveng/Programming-in-C-and-Cpp/blob/main/Ch1/Sol%20Q1%20C/Vraag10.c)

11. Om de grootste gemende deler (ggd) van twee getallen te berekenen, werd je allicht aangeleerd om de twee getallen eerst te ontbinden in priemfactoren, om dan de gemeenschappelijke factoren te ontdekken. Het kan ook anders, met het algoritme van Euclides dat gebruik maakt van volgende gelijkheid:
    ggd(a , b) = ggd(b , a mod b);
    De uitdrukking a mod b lees je als 'a modulo b' en stelt de rest van a bij deling door b voor. In de meeste programeertalen, ook in C (en Cpp), gebruik je de notatie % in plaats van mod.
    Het algoritme van Euclides vervangt de getallen a en b (herhaaldelijk) door de getallen b en a mod b. Indien a>b, zullen b en a mod b kleiner zijn dan a en b - en dus werd het probleem vereenvoudigd. Dit vervangen stopt van zodra een van de getallen 0 is: ggd(a,0) = a.

    Schrijf een recursieve functie ggd(a,b) die de grootste gemene deler van twee gehele getallen berekent.

    Test uit met

    ```
    ggd(-6,-8)==2
    ggd(24,18)==6
    ggd( 0,-5)==5
    ggd(6,-35)==1
    ```

    **Opmerking**: Het is wel belangrijk dat je bij het uittesten duidelijk laat merken aan de gebruiker of de test geslaagd is (zodat hij zelf niet moet zitten narekenen of de gegeven uitkomst juist is).
    In deze oefening kan je bijvoorbeeld een procedure controleer_ggd(a,b,res) toevoegen die nagaat of het restultaat dat je bekomt met ggd(a,b) overeenkomt met het meegegeven verwachte resultaat en de uitslag van de test rapporteert.
    [Solution](https://github.com/reeveng/Programming-in-C-and-Cpp/blob/main/Ch1/Sol%20Q1%20C/Vraag11.c)