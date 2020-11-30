
/* versie 4 - gebruiker geeft getal in */
#include <stdio.h> 
int main() { 
     unsigned long long int fac = 1; 
     int i, n; 
     printf("Geef een geheel getal uit het interval [2,20] in: ");
     while (scanf("%d",&n)==0 || n<2 || n>20) {
          /* inputbuffer leegmaken - fflush(stdin); werkt ook*/
          while (getchar() != '\n');            
          printf("Foute input!\n");
          printf("Geef een geheel getal uit het interval [2,20] in: ");
     }
     for(i=2 ; i<=n ; i++) { 
          fac *= i; 
     } 
     printf("%d! = %lld \n",n,fac); 
     return 0; 
}

