//
//  main.c
//  3.3
//
//  Created by Aleksandar on 19. 7. 2026..
//

/*******************************************************************
 *  Zadatak 3.3 — Skalarni proizvod dva vektora                    *
 *                                                                 *
 *  Program cita dva vektora zadate duzine sa realnim              *
 *  komponentama, racuna njihov skalarni proizvod i ispisuje       *
 *  rezultat. Postupak se ponavlja sve dok se za duzinu vektora    *
 *  ne unese nedozvoljena vrednost (n <= 0 ili n > DIM).           *
 *                                                                 *
 *      s = suma a[i] * b[i], za i = 0 do n-1                      *
 *                                                                 *
 *  Duzina vektora (najvise 50)? 5                                 *
 *  Komponente vektora A? 1 2 3 4 5                                *
 *  Komponente vektora B? 5 4 3 2 1                                *
 *  Skalarni proizvod A*B=     35.000                              *
 *******************************************************************/

#include <stdlib.h>
#include <stdio.h>

#define MAX_NUMBER 100

int main(int argc, const char * argv[]) {
    
    int i,n;
    double vector1[MAX_NUMBER],vector2[MAX_NUMBER],scalar_product;
    
    while(1)
    {
        printf("Unesite duzinu dva vektora(najvise 100): ");
        
        if(scanf("%d",&n)!=1 || n<=0 || n>MAX_NUMBER)break;
        
        printf("Unesite komponente vektora 1: ");
        
        for(i=0;i<n;i++)
            scanf("%lf",&vector1[i]);
        
        printf("Unesite komponente vektora 2: ");
        
        for(i=0;i<n;i++)
            scanf("%lf",&vector2[i]);
        
        scalar_product=0.0;
        
        for(i=0;i<n;i++)
            scalar_product+=vector1[i]*vector2[i];
        
        printf("Skalarni proizvod vektora 1 i vektora 2 je: %.3lf\n",scalar_product);
        
        
        
    }
    
    return EXIT_SUCCESS;
}
