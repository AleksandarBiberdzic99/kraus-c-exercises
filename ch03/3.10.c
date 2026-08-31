//
//  main.c
//  3.10
//
//  Created by Aleksandar on 20. 7. 2026..
//

/*******************************************************************
 *  Zadatak 3.10 — Umetanje broja u ureden niz                     *
 *                                                                 *
 *  Program umece novi broj u vec ureden niz tako da niz ostane    *
 *  ureden. Obraduje se proizvoljan broj kompleta ulaznih          *
 *  podataka.                                                      *
 *                                                                 *
 *  Krecuci od kraja niza, elementi se pomeraju za jedno mesto     *
 *  prema kraju sve dok su veci od novog broja. Broj se zatim      *
 *  upisuje iza prvog nepomerenog elementa, odnosno na pocetak     *
 *  niza ako su svi elementi bili pomereni.                        *
 *                                                                 *
 *  n? 12                                                          *
 *  A? 2 4 6 8 10 12 14 16 18 20 22 24                             *
 *  b? 9                                                           *
 *  A= 2 4 6 8 9 10 12 14 16 18 20 22 24                           *
 *                                                                 *
 *  Niz je dimenzionisan na N+1 da bi bilo mesta za novi element.  *
 *******************************************************************/


#include <stdlib.h>
#include <stdio.h>

#define MAX_LEN 100

int main(int argc, const char * argv[]) {
    
    int i,n,value;
    int a[MAX_LEN];
    
    for(;;)
    {
        printf("Unesite broj elemenata niza: ");
        if(scanf("%d",&n)!=1 || n<=0 || n>=MAX_LEN)break;
        
        printf("Unesite elemente niza u rastućem porteku: ");
        
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        
        printf("Unesite vrednost koju želite da dodate: ");
        scanf("%d",&value);
        
        i=n-1;
        while(i>=0 && a[i]>value)
        {
            a[i+1]=a[i];
            i--;
        }
        a[i+1]=value;
        
        //ISPIS NIZA NAKON DODAVANJA NOVOG ELEMENTA
        
        printf("Niz nakon dodavanja nove vrednosti: ");
        
        for(i=0;i<n+1;printf("%d ",a[i++]));
        
        printf("\n");
    }
    return EXIT_SUCCESS;
}
