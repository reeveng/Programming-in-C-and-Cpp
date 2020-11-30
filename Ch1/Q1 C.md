Kennismaking met C
main(), types, operatoren, controlestructuren, i/o , eenvoudige functies/procedures
Heb je de juiste instellingen gedaan in Dev-C++ ? Zie richtlijnen installatie.
Maak voor elke opgave en nieuw bronbestand (Bestand > Nieuw > Broncode ) en sla dit op als .c-bestand; Maak géén projecten.

Schrijf een programma dat volgende tekst op het scherm brengt (delay bij uitschrijven van de verschillende getallen is niet nodig).
Hello world!
10 9 8 7 6 5 4 3 2 1 
START
Opmerkingen:
Heb je de output 10 9 8 7 6 5 4 3 2 1 hardgecodeerd? Niet doen!
Kan je het aftellen laten beginnen op 100? Gebruik een constante voor de startwaarde van het aftellen.
oplossing

Schrijf een programma dat alle (gehele) getallen van 0 tot en met 64 uitschrijft. Per regel komt zowel octale, decimale, als hexadecimale voorstelling van één getal. Zorg ervoor dat de getallen rechts gealligneerd zijn, dus zo:
   0    0    0
   1    1    1
   2    2    2
   3    3    3
  ...
  11    9    9
  12   10    a
  13   11    b
  14   12    c
  15   13    d
  16   14    e
  17   15    f
  20   16   10
  21   17   11
  ...
  77   63   3f
 100   64   40
oplossing

Gegeven volgend programmafragment, als oplossing voor oefening 1. Dit levert de gevraagde output. Het levert echter op een examen strafpunten op. Waarom?
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
oplossing

Gegeven de opgave schrijf alle machten van 2 (beginnend bij 2^0=1), kleiner dan 10.000 uit.
De onderstaande code geeft niet de gevraagde uitvoer - hoe kan je dit heel snel detecteren?
Pas de code ook aan zodat je de gevraagde uitvoer bekomt.
#include <stdio.h>
int main(){
    int macht = 1;
    while(macht < 10000){
        macht *= 2;
        printf("%d ",macht);
    }
    return 0;	
}
oplossing

Deze code levert, in tegenstelling tot vorige oefening, wél de gevraagde output. Toch levert deze oplossing nog minder punten op dan de vorige oplossing. Waarom?
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
oplossing

In deze opgave wordt de faculteit van positieve gehele getallen berekend.
Bereken de faculteit van de gehele getallen 2 tot en met 30 en schrijf de resultaten uit. Wat merk je op?
Bereken de faculteit met andere gegevenstypes (geheel én reëel). Hoe exact is de berekende waarde voor de faculteit van grotere getallen?
Pas het programma aan zodat de computer een willekeurig geheel getal kiest tussen 2 en 20 (grenzen inbegrepen). Bereken de faculteit van dit getal.
Gebruik de functie rand(); - meer informatie zoek je online.
Pas het programma aan zodat de gebruiker een positief geheel getal kan ingeven tussen 2 en 20 (grenzen inbegrepen). Controleer deze input! Vraag (desnoods herhaaldelijk) een nieuw getal indien de gebruiker geen geheel getal ingaf of indien het ingegeven geheel getal niet tot het interval [2,20] behoort. Vergeet niet om na elke foutieve input de resterende tekst uit de inputbuffer te verwijderen. Bereken de faculteit van dit getal.
oplossing

Bij het berekenen van de sinus van een gegeven hoek in radialen, gebruikt je computer of rekenmachine onderstaande reeksontwikkeling:
som sinus
Schrijf een programma dat de sinus berekent van 0.23 radialen door de eerste 10 termen van de reeksontwikkeling te berekenen. Opgelet: we kijken naar efficiëntie van je berekeningen!
Vergelijk je berekening met het resultaat van de ingebouwde sinusfunctie uit de bibliotheek math.h - tot hoeveel decimalen is jouw berekening correct?
Herneem de berekeningen voor 8.2 radialen, dan is de reeksontwikkeling niet nauwkeurig genoeg.
In de vorige oplossing heb je geen enkele zekerheid over de nauwkeurigheid van de reekssom.
Pas je programma aan zodat je zeker bent dat de reekssom even correct is als het resultaat van de ingebouwde sinusfunctie.
Nu is de waarde van x hard-gecodeerd in het programma. Pas dit aan zodat x door het programma willekeurig gekozen wordt in het interval [-3.200,3.200[. Het getal x bevat dus drie beduidende decimalen.
Het efficiënt implementeren van een reeksontwikkeling is niet evident. Vergelijk bijvoorbeeld het aantal berekeningen dat jouw code uitvoert met het aantal berekeningen van de voorbeeldoplossing.

Heb je graag nog wat extra oefeningen op reeksontwikkelingen, dan vind je er op https://nl.wikipedia.org/wiki/Taylorreeks extra oefeningen, die bovendien eenvoudig te controleren zijn.
Zo kan je bijvoorbeeld de uitkomst die jouw zelfgeprogrammeerde reeksontwikkeling van ln(1+x) geeft,
som ln(1+x)
vergelijken met de uitkomst van ln(1+x). Kies in dit geval x dan wel tussen -1 en 1 zoals de voorwaarde eist, en zoek uit hoe ln in C-taal geschreven wordt.

oplossing

Schrijf een programma dat aan de gebruiker vijf positieve gehele getallen vraagt. Geeft de gebruiker echter een negatief getal in, dan stopt het programma met getallen opvragen. Nadien schrijft het programma uit of de gebruiker inderdaad vijf positieve gehele getallen opgaf. Tot slot wordt de som van de ingegeven positieve gehele getallen uitgeschreven (ook als er niet genoeg ingegeven werden).
Test uit, onder andere met de getallenreeks 1 2 3 4 -5.

oplossing

Schrijf volgende functies en test ze uit in een eenvoudig hoofdprogramma:
De functie cijfersom(x) berekent van een gegeven geheel getal x de som van de cijfers. Zo is cijfersom(12345) gelijk aan 15.
Maak een recursieve versie cijfersom_rec(x) die hetzelfde doet als cijfersom(x).
oplossing

Herneem oefening 6, maar los dit nu op met twee functies:
De functie faculteit(x) berekent de faculteit van een gegeven geheel getal x.
De functie faculteit_rec(x) doet een recursieve berekening.
Controleer in een eenvoudig hoofdprogramma.
oplossing

Om de grootste gemende deler (ggd) van twee getallen te berekenen, werd je allicht aangeleerd om de twee getallen eerst te ontbinden in priemfactoren, om dan de gemeenschappelijke factoren te ontdekken. Het kan ook anders, met het algoritme van Euclides dat gebruik maakt van volgende gelijkheid:
ggd(a , b) = ggd(b , a mod b);
De uitdrukking a mod b lees je als 'a modulo b' en stelt de rest van a bij deling door b voor. In de meeste programeertalen, ook in C (en Cpp), gebruik je de notatie % in plaats van mod.
Het algoritme van Euclides vervangt de getallen a en b (herhaaldelijk) door de getallen b en a mod b. Indien a>b, zullen b en a mod b kleiner zijn dan a en b - en dus werd het probleem vereenvoudigd. Dit vervangen stopt van zodra een van de getallen 0 is: ggd(a,0) = a.

Schrijf een recursieve functie ggd(a,b) die de grootste gemene deler van twee gehele getallen berekent.

Test uit met

ggd(-6,-8)==2
ggd(24,18)==6
ggd( 0,-5)==5
ggd(6,-35)==1
Opmerking: Het is wel belangrijk dat je bij het uittesten duidelijk laat merken aan de gebruiker of de test geslaagd is (zodat hij zelf niet moet zitten narekenen of de gegeven uitkomst juist is).
In deze oefening kan je bijvoorbeeld een procedure controleer_ggd(a,b,res) toevoegen die nagaat of het restultaat dat je bekomt met ggd(a,b) overeenkomt met het meegegeven verwachte resultaat en de uitslag van de test rapporteert.
oplossing
