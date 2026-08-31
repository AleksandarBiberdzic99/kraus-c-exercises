//
//  main.c
//  3.8c
//
//  Created by Aleksandar on 20. 7. 2026..
//

/*******************************************************************
 *  Zadatak 3.8 c) — Izostavljanje elemenata zadate vrednosti      *
 *                                                                 *
 *  Program izbacuje iz niza sve elemente koji imaju zadatu        *
 *  vrednost. Obraduje se proizvoljan broj kompleta ulaznih        *
 *  podataka.                                                      *
 *                                                                 *
 *  Niz se prolazi jednom: elementi razliciti od trazene vrednosti *
 *  prepisuju se na prvo slobodno mesto u istom nizu, a nova       *
 *  duzina je broj tako zadrzanih elemenata.                       *
 *******************************************************************/

#include <stdlib.h>
#include <stdio.h>

#define MAX_LENGTH 1000

int main(int argc, const char * argv[]) {
    
    int a[MAX_LENGTH];
    int i,n,length,value;
    
    for(;;)
    {
        printf("Unesite broj elemenata niza: ");
        if(scanf("%d",&n)!=1 || n<=0 || n>MAX_LENGTH)break;
        
        printf("Unesite elemente niza: ");
        
        for(i=0;i<n;scanf("%d",&a[i++]));
        
        printf("Unesite vrednost koju želite da izbacite iz niza: ");
        scanf("%d",&value);
        
        
        //Izbacivanje svakog pojavljivanje unete vrednosti iz niza
        
        length=0;
        
        for(i=0;i<n;i++)
        {
            if(a[i]!=value)
                a[length++]=a[i];
        }
        
        //Ispis niza u sažetom stilu
        
        printf("Niz nakon izbacivanja vrednosti: ");
        for(i=0;i<length;printf("%d ",a[i++]))
            ;
            
            printf("\n");
    }
    
    
    return EXIT_SUCCESS;
}
