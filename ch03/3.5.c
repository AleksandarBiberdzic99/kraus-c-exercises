//
//  main.c
//  3.5
//
//  Created by Aleksandar on 19. 7. 2026..
//

/*******************************************************************
 *  Zadatak 3.5 — Obrtanje redosleda elemenata niza                *
 *                                                                 *
 *  Program obrce redosled elemenata niza realnih brojeva: prvi    *
 *  element menja mesto s poslednjim, drugi s pretposlednjim i     *
 *  tako redom. Nizovi se citaju i obraduju sve dok se za duzinu   *
 *  niza ne unese nedozvoljena vrednost (n <= 0 ili n > N_MAX).    *
 *                                                                 *
 *  Zamena se radi u mestu, sa dva indeksa koji krecu sa krajeva   *
 *  niza i pomeraju se jedan ka drugome dok se ne sretnu.          *
 *                                                                 *
 *  n? 5                                                           *
 *  A? 1 2 3 4 5                                                   *
 *  A= 5.00 4.00 3.00 2.00 1.00                                    *
 *******************************************************************/

#include <stdlib.h>
#include <stdio.h>

#define N_MAX 1000
int main(int argc, const char * argv[]) {
    
    int i,n;
    double a[N_MAX],temp;
    
    for(;;)
    {
        printf("Unesite broj elemenata niza: ");
        if(scanf("%d",&n)!=1 || n<=0 || n>N_MAX)break;
        
        printf("Unesite elemente niza: ");
        for(i=0;i<n;scanf("%lf",&a[i++]));
        
        for(i=0;i<n/2;i++)
        {
            temp=a[n-1-i];
            a[n-1-i]=a[i];
            a[i]=temp;
            
        }
        
        printf("Niz nakon obrtanja: ");
        
        for(i=0;i<n;printf("%.2f ",a[i++]));
        
        printf("\n");
    }
    
    return EXIT_SUCCESS;
}
