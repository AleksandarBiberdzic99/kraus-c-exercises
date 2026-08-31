//
//  main.c
//  3.6
//
//  Created by Aleksandar on 19. 7. 2026..
//

/*******************************************************************
 *  Zadatak 3.6 — Izracunavanje binomnih koeficijenata             *
 *                                                                 *
 *  Program ispisuje sve binomne koeficijente za svako n od 0 do   *
 *  nmax, sto daje Paskalov trougao. Koeficijenti su definisani    *
 *  rekurentnom vezom                                              *
 *                                                                 *
 *      B(n,k) = B(n-1,k-1) + B(n-1,k),  za 0 < k < n              *
 *      B(n,0) = B(n,n) = 1                                        *
 *                                                                 *
 *  Koristi se jedan jednodimenzioni niz koji se azurira u mestu:  *
 *  svaki novi red se dobija iz prethodnog, a petlja ide unazad    *
 *  (od k = n-1 ka 1) da se b[k-1] ne bi prepisao pre nego sto     *
 *  bude iskoriscen.                                               *
 *                                                                 *
 *  nmax? 12                                                       *
 *      1                                                          *
 *      1    1                                                     *
 *      1    2    1                                                *
 *      1    3    3    1                                           *
 *      1    4    6    4    1                                      *
 *      ...                                                        *
 *******************************************************************/

#include <stdlib.h>
#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int nmax,b[20];
    int n,k;
    
    printf("nmax ? ");
    scanf("%d",&nmax);
    
    for(n=0;n<=nmax;n++)
    {
        b[n]=1;
        for(k=n-1;k>0;k--)
            b[k]=b[k]+b[k-1];
        for(k=0;k<=n;k++)
            printf("%d ",b[k]);
        
        printf("\n");
    }
    
    return EXIT_SUCCESS;
}
